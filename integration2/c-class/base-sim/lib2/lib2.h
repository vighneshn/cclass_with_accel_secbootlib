#include "lib.h"
#ifndef FUSEFILE
    #define FUSEFILE \"fuse.bin\"
#endif
#define xstr(s) str(s)
#define str(s) #s
__asm__(" .align 8\n.section .rodata.fuse\n__fuse__:");
__asm__(xstr(.incbin FUSEFILE));
#include <string.h>
#include "debug.h" 
#include "sha256.h"
#include "./crypto/RSA/types.h"
#define EXTRACT_LEN(_ptr) (unsigned int) ((*(_ptr))<<8)| (*(_ptr+1))
typedef unsigned char uint8_t;
typedef struct key_entry{
    bignum_t d,n,rr;
    uint8_t key_type;
}key_entry;
key_entry pk_store[10];
void digest_message(const uint8_t *message, int message_len, uint8_t *digest)
{
    SHA256_CTX ctx;
	sha256_init(&ctx);
	sha256_update(&ctx, message, message_len);
	sha256_final(&ctx, digest);
}

void digest_blocks(uint8_t *digest, uint8_t *blocks, int num)
{
    int i;
    SHA256_CTX ctx;
	sha256_init(&ctx);
	for(i=0;i<num;++i)
	{
        unsigned char *data = (unsigned char *)((unsigned int)0+(*(blocks)<<24)+(*(blocks+1)<<16)+(*(blocks+2)<<8)+*(blocks+3));
        int len = (*(blocks+4)<<24)+(*(blocks+5)<<16)+(*(blocks+6)<<8)+*(blocks+7);
	    sha256_update(&ctx, data, len);
        blocks = blocks+8;	
    }
	sha256_final(&ctx, digest);
}

extern int __fuse__;

int verify_srk(uint8_t *table)
{
    lDebug(2,"Verifying SRK Table");
    lDebug(3,"%s: %x",debugV(table));
    uint8_t *fuse,digest[32],intermediate_hash[32*4],*temp = table+4;
    fuse = &(__fuse__);
    unsigned int len = 0,mlen=0;
    int i=0,srk_n = *(table+3),tlen = EXTRACT_LEN(table+1);
    lDebug(3,"%s: %x",debugV(srk_n));
    uint8_t *cond = table+tlen;
    if (*table == 0x01) {
        while(i<srk_n && temp<=cond)
        {
            mlen = EXTRACT_LEN((temp+1));
            digest_message(temp,mlen,digest);
            memcpy(intermediate_hash+len,digest,32);
            len+=32;
            temp=temp+mlen;
            i+=1;
        }
        digest_message(intermediate_hash,len,digest);
        lDebug(3,"%s address: %x",debugV(fuse));
        debugX(3,fuse,32);
        debugX(3,digest,32);
        if (strncmp(digest,fuse,32)==0){
            lDebug(2,"SRK Hash Match Successful.");
            return 1;
        }
    #if DEBUG>0
        else
        {
            lDebug(1,"SRK Table Hash Doesnt Match with fuse.");
        }
    #endif
    }
    return 0;
}
int load_key(bignum_t *d,bignum_t *n, bignum_t *rr, uint8_t *cert)
{
    uint8_t *temp = cert;
    int cert_len = EXTRACT_LEN((temp+1));
    lDebug(2,"Installing Key. %s: %d",debugV(cert));
    if (*(temp) == 0x04){
        temp = temp+3+4;
        int mod_len,exp_len,rr_len;
        mod_len = EXTRACT_LEN(temp);
        exp_len = EXTRACT_LEN((temp+2));
        rr_len = EXTRACT_LEN((temp+4));
        temp = temp+6;
        BN_init(d);
        BN_init(n);
        BN_init(rr);
        BN_bin2bn(n,temp,0,mod_len);
        BN_bin2bn(d,temp+mod_len,0,exp_len);
        BN_bin2bn(rr,temp+mod_len+exp_len,0,rr_len);
        #if DEBUG>0
            char mod[1000],exp[1000],RR[1000];
            BN_bn2hex(d,mod);
            BN_bn2hex(n,exp);
            BN_bn2hex(rr,RR);
            lDebug(3,"%s: %s",debugV(mod));
            lDebug(3,"%s: %s",debugV(exp));    
            lDebug(3,"%s: %s",debugV(RR));
            lDebug(2,"Key Install Successful.");
        #endif
        return 1;
    }
    lDebug(1,"Error in certificate");
    return 0;
}
int RSAsignVerify(uint8_t *hash,int hash_len,uint8_t *sign,int sig_len,int verif_index)
{
    lDebug(2,"Verifying Signature");
    uint8_t msg[256];
    bignum_t sig,val;
    BN_init(&sig);
    BN_init(&val);
    BN_bin2bn(&sig,sign,0,sig_len);
    rsaDecrypt(&val,&sig,&(pk_store[verif_index].d),&(pk_store[verif_index].n), (pk_store[verif_index].rr));
    int len = BN_bn2bin(&val,msg);
    #if DEBUG>0
        char SIG[1000],MSG[1000];
        BN_bn2hex(&sig,SIG);
        BN_bn2hex(&val,MSG);
        lDebug(3,"%s: %s",debugV(SIG));
        lDebug(3,"%s: %s",debugV(MSG));
    #endif 
    if (strncmp(msg+len-hash_len,hash,hash_len)==0){
        lDebug(2,"Signature Match.");
        return 1;
    }
    else{
        lDebug(1,"Signature does not match.");
        return 0;
    }
}
int verify_certificate(uint8_t *cert,int verif_index)
{
    lDebug(2,"Verifying Certificate.");
    uint8_t *temp = cert,digest[32];
    int cert_len = EXTRACT_LEN((temp+1)),i=0;
    if (*(temp) == 0x04){
        temp = temp+3+4;
        int mod_len,exp_len,rr_len,sig_len;
        mod_len = EXTRACT_LEN(temp);
        exp_len = EXTRACT_LEN((temp+2));
        rr_len = EXTRACT_LEN((temp+4));
        temp = temp+6+mod_len+exp_len+rr_len;
        if (*(temp) == 0x03){
            sig_len = EXTRACT_LEN(temp+1);
            digest_message(cert,cert_len+3,digest);
            return(RSAsignVerify(digest,32,temp+3,sig_len,verif_index));
        }
    }
    return 0;
}
int install_key(uint8_t type_of_key,uint8_t crypto_algo,uint8_t source_index,uint8_t tgt_index,void *pointer_to_certificate)
{
    int result=0;
    if (type_of_key == 2 )
    {
        if (pk_store[source_index].key_type != 1)
            return 0;
        uint8_t *cert=pointer_to_certificate;
        if (verify_certificate(cert+3,source_index)==1)
        {     
            result = load_key(&(pk_store[tgt_index].d),&(pk_store[tgt_index].n),&(pk_store[tgt_index].rr),cert+3);
            pk_store[tgt_index].key_type = type_of_key;
        }
    }
    else if(type_of_key==1)
    {
        uint8_t *cert=pointer_to_certificate;
        if (verify_srk(cert)==1)
        {
            unsigned int mlen,i = 0,srk_len = EXTRACT_LEN(cert+1),srk_n=*(cert+3);
            cert=cert+4;
            while(i<srk_n) 
            {
                mlen = EXTRACT_LEN((cert+1));
                if(i==source_index) 
                {            
                    result = load_key(&(pk_store[tgt_index].d),&(pk_store[tgt_index].n),&(pk_store[tgt_index].rr),cert);
                    break;
                }
                cert+=mlen;
                i++;
            }
            pk_store[tgt_index].key_type = type_of_key;
        } 
    }
    return result;
}

int auth_data(uint8_t hash_algo, uint8_t crypto_algo, uint8_t pki_store_index,void *blocks, int num, void *pointer_to_signature)
{
    int result=0;
    uint8_t *sign = pointer_to_signature;
    lDebug(3,"%s addr: %x",debugV(sign));
    lDebug(3,"%s : %x", debugV(pki_store_index));
    lDebug(3,"%s : %x", debugV(num));
    if ((pk_store[pki_store_index].key_type == 2 || pk_store[pki_store_index].key_type == 3) && *sign == 0x03)
    {
        uint8_t hash[32];
        digest_blocks(hash,blocks,num);
        result = RSAsignVerify(hash,32,(sign+3),EXTRACT_LEN(sign+1),pki_store_index);
    }
    return result;
}
void initialise_lib()
{
    int i;
    for(i=0;i<10;++i)
    {
        pk_store[i].key_type=0; 
    }
}
int validate_program(void *csf_addr)
{
    int valid=0;
    uint8_t *csf = csf_addr;
    lDebug(3,"%s address: %x",debugV(csf));
    uint8_t *temp = csf;    
    if (*(temp++) != 0x0F)
    {
        lDebug(1,"Incorrect CSF");
        return 0;
    }
    int csf_len =  ((*temp)<<8)+*(temp+1);
    temp+=3;
    int status = 0;
    while( csf + csf_len > temp)
    {

        lDebug(3,"%s: %x",debugV(temp));
        if (*temp == 0x10 )
        {
            temp++;
            temp++;
            int offset = (*(temp+4)<<24)+(*(temp+5)<<16)+(*(temp+6)<<8)+*(temp+7);
            status = install_key(*temp,*(temp+1),*(temp+2),*(temp+3),csf+offset);
            temp=temp+8;
#if DEBUG>0
            if (status){
                lDebug(2,"Install Key Success.");
            }
            else
                lDebug(1,"Install Key Fail");
#endif
        }
        else if(*temp==0x11)
        {
            int len = (unsigned char )*(temp+1);
            temp+=2;
            if (len == 9)
            {
                unsigned char blocks[8];
                blocks[0] = (unsigned char)((int)csf>>24);
                blocks[1] = (unsigned char)((int)csf>>16);
                blocks[2] = (unsigned char)((int)csf>>8);
                blocks[3] = (unsigned char)((int)csf);
                blocks[4] = (unsigned char)((int)csf_len>>24);
                blocks[5] = (unsigned char)((int)csf_len>>16);
                blocks[6] = (unsigned char)((int)csf_len>>8);
                blocks[7] = (unsigned char)(int)csf_len;
                int i;
                for(i=0;i<8;++i)
                    printf("%02x ",blocks[i]);
                unsigned int offset = ((unsigned int)0+(*(temp+3)<<24)+(*(temp+4)<<16)+(*(temp+5)<<8)+*(temp+6));
                status = auth_data(*(temp),*(temp+1),*(temp+2),blocks,1,csf+offset);
                temp+=7;
            }
            else if (((len-9)%8) == 0)
            {
                int num = (len-9)>>3;
                int sign_offset = ((*(temp+3)<<24)+(*(temp+4)<<16)+(*(temp+5)<<8)+*(temp+6));
                //int data_len = (*(temp+11)<<24)+(*(temp+12)<<16)+(*(temp+13)<<8)+*(temp+14);
                //unsigned char *data_offset =  (unsigned char *)((unsigned int)0+*(temp+7)<<24)+(*(temp+8)<<16)+(*(temp+9)<<8)+*(temp+10);
                //status = auth_data(*(temp),*(temp+1),*(temp+2),data_offset,data_len,csf+sign_offset);
                status = auth_data(*(temp),*(temp+1),*(temp+2),(temp+7),num,csf+sign_offset);
                temp+=len-2;
                valid = status;
            }
#if DEBUG>0
            if(status)
                lDebug(2,"Auth Data success");
            else
                lDebug(1,"Auth Data Fail");
#endif
        }
        else
        {
            break;
        }
        if (status == 0)
        {
            lDebug(1,"CSF Verification Fail");
            break; 
        }
    }
    return valid;
}
