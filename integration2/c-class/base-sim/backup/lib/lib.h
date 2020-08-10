#ifndef SECLIB
#define SECLIB
#include <string.h>
#ifdef DEBUG
    #include <stdio.h>
#endif
#include "sha256.h"
#include "./crypto/RSA/types.h"
#define EXTRACT_LEN(_ptr) (unsigned int) ((*(_ptr))<<8)| (*(_ptr+1))
typedef unsigned char uint8_t;
typedef struct key_entry{
    bignum_t d,n,rr;
    uint8_t key_type;
}key_entry;
key_entry *const pk_store=(key_entry*)PK_STORE_ADDR;
//key_entry *const pk_store;
void digest_message(const uint8_t *message, int message_len, uint8_t *digest)
{
    SHA256_CTX ctx;
	sha256_init(&ctx);
	sha256_update(&ctx, message, message_len);
	sha256_final(&ctx, digest);
}
void init_fuse(uint8_t *fuse){
*fuse=0xa9;*(fuse+1)=0xcf;*(fuse+2)=0xe5;*(fuse+3)=0x9d;*(fuse+4)=0x5e;*(fuse+5)=0xde;*(fuse+6)=0xb0;*(fuse+7)=0x42;*(fuse+8)=0xcb;*(fuse+9)=0x91;*(fuse+10)=0x73;*(fuse+11)=0x28;*(fuse+12)=0xca;*(fuse+13)=0x70;*(fuse+14)=0xa7;*(fuse+15)=0x24;*(fuse+16)=0xc6;*(fuse+17)=0x23;*(fuse+18)=0x95;*(fuse+19)=0x8f;*(fuse+20)=0xde;*(fuse+21)=0xc2;*(fuse+22)=0xf5;*(fuse+23)=0xaf;*(fuse+24)=0x40;*(fuse+25)=0x71;*(fuse+26)=0xcd;*(fuse+27)=0xd1;*(fuse+28)=0xa9;*(fuse+29)=0x4f;*(fuse+30)=0xc5;*(fuse+31)=0x33;
}
int verify_srk(uint8_t *table)
{
    uint8_t fuse[32],digest[32],intermediate_hash[32*4],*temp = table+4;
    init_fuse(fuse);
    unsigned int len = 0,mlen=0;
    int i=0,srk_n = *(table+3),tlen = EXTRACT_LEN(table+1);
#ifdef DEBUG
    printf("In Verify SRK:%x %d\n", *table,srk_n);
#endif
    uint8_t *cond = table+tlen;
    if (*table == 0x01) {
        while(i<srk_n && temp<=cond)
        {

            mlen = EXTRACT_LEN((temp+1));
            #ifdef DEBUG
                printf("%x %x %d:%x %x %x\n",*table,*temp,i,table,temp,mlen);
            #endif
            digest_message(temp,mlen,digest);
            memcpy(intermediate_hash+len,digest,32);
            len+=32;
            temp=temp+mlen;
            i+=1;
        }
        digest_message(intermediate_hash,len,digest);
        if (strncmp(digest,fuse,32)==0){
            #ifdef DEBUG
                printf("SRK Verif Success.");
            #endif
            return 1;
                
        }
    }
    return 0;
}
int load_key(bignum_t *d,bignum_t *n, bignum_t *rr, uint8_t *cert)
{
    uint8_t *temp = cert;
    int cert_len = EXTRACT_LEN((temp+1));
    #ifdef DEBUG
        printf("In Load Key Func: %x\n",*temp);
        printf("%x\t",cert_len);
    #endif
    if (*(temp) == 0x04){
        temp = temp+3+4;
        int mod_len,exp_len,rr_len;
        mod_len = EXTRACT_LEN(temp);
        exp_len = EXTRACT_LEN((temp+2));
        rr_len = EXTRACT_LEN((temp+4));
        #ifdef DEBUG
            printf("%x\t",mod_len);
            printf("%x\t",exp_len);
            printf("%x\n",rr_len);
        #endif
        temp = temp+6;
        BN_init(d);
        BN_init(n);
        BN_init(rr);
        BN_bin2bn(n,temp,0,mod_len);
        BN_bin2bn(d,temp+mod_len,0,exp_len);
        BN_bin2bn(rr,temp+mod_len+exp_len,0,rr_len);
        
        #ifdef DEBUG
            char rsa_str[1000];
            BN_bn2hex(d,rsa_str);
            printf("D:\n%s\n\n",rsa_str);
            BN_bn2hex(n,rsa_str);
            printf("N:\n%s\n\n",rsa_str);
            BN_bn2hex(rr,rsa_str);
            printf("RR:\n%s\n\n",rsa_str);
        #endif
        return 1;
    }
    else
    {
        return 0;
    }
}
int RSAsignVerify(uint8_t *hash,int hash_len,uint8_t *sign,int sig_len,int verif_index)
{
    uint8_t msg[256];
    bignum_t sig,val;
    BN_init(&sig);
    BN_init(&val);
    BN_bin2bn(&sig,sign,0,sig_len);
    key_entry* source_key= pk_store + verif_index;
    rsaDecrypt(&val,&sig,&(source_key->d),&(source_key->n), source_key->rr);
    int len = BN_bn2bin(&val,msg);
    #ifdef DEBUG
        char rsa_str[1000];
        BN_bn2hex(&sig,rsa_str);
        printf("SIG:\n%s\n\n",rsa_str);
        BN_bn2hex(&val,rsa_str);
        printf("MSG:\n%s\n\n",rsa_str);
        int i;
        for(i=0;i<len;++i)
            printf("%02x",msg[i]);
        printf("\n");
        for(i=0;i<32;++i)
            printf("%x %x\n",hash[i],msg[len-hash_len+i]);
        printf("\n");
    #endif 
    if (strncmp(msg+len-hash_len,hash,hash_len)==0){
        return 1;
    
    #ifdef DEBUG
        printf("Signature Verified!\n");
    #endif
    }
    else
        return 0;
}
int verify_certificate(uint8_t *cert,int verif_index)
{
    #ifdef DEBUG
        printf("IN Verify Cert: %x\n",*cert);
    #endif 
    uint8_t *temp = cert,digest[32];
    int cert_len = EXTRACT_LEN((temp+1)),i=0;
    #ifdef DEBUG
        printf("%d\n",cert_len);
    #endif
    if (*(temp) == 0x04){
        temp = temp+3+4;
        int mod_len,exp_len,rr_len,sig_len;
        mod_len = EXTRACT_LEN(temp);
        exp_len = EXTRACT_LEN((temp+2));
        rr_len = EXTRACT_LEN((temp+4));
        temp = temp+6+mod_len+exp_len+rr_len;
        if (*(temp) == 0x03){
            sig_len = EXTRACT_LEN(temp+1);
            #ifdef DEBUG
                printf("Len: %d\n",sig_len);
            #endif
            digest_message(cert,cert_len+3,digest);
            return(RSAsignVerify(digest,32,temp+3,sig_len,verif_index));
        }
    }
    return 0;
    
}
int install_key(uint8_t type_of_key,uint8_t crypto_algo,uint8_t source_index,uint8_t tgt_index,void *pointer_to_certificate)
{
    int result=0;
    key_entry* target_key= pk_store + tgt_index;
    if (type_of_key == 2 )
    {
        if (pk_store[source_index].key_type != 1)
            return 0;
        uint8_t *cert=pointer_to_certificate;
        if (verify_certificate(cert+3,source_index)==1)
        {     
            result = load_key(&(target_key->d),&(target_key->n),&(target_key->rr),cert+3);
            target_key->key_type = type_of_key;
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
                    result = load_key(&(target_key->d),&(target_key->n),&(target_key->rr),cert);
                    break;
                }
                cert+=mlen;
                i++;
            }
            target_key->key_type = type_of_key;
        } 
    }
    return result;
}

int auth_data(uint8_t hash_algo, uint8_t crypto_algo, uint8_t pki_store_index,void *mem_addr_start, int length,void *csf_addr_start, int csf_len , void *pointer_to_signature)
{
    int result=0;
    uint8_t *sign = (uint8_t*)pointer_to_signature;
    key_entry* source_key= pk_store + pki_store_index;
    printf("pki_store_index=%x pk_store= %x source_key= %x\n",pki_store_index, pk_store, source_key);
    printf("key_type= %x\n",source_key->key_type);
    if ((source_key->key_type == 2 || source_key->key_type == 3) && *sign == 0x03)
    {
        uint8_t *data_pointer = mem_addr_start;
        uint8_t *csf_pointer = csf_addr_start;
        uint8_t hash[64],final_hash[32];
        digest_message(csf_pointer,csf_len,hash);
        digest_message(data_pointer,length,(hash+32));
        digest_message(hash,64,final_hash);
        result = RSAsignVerify(final_hash,32,(sign+3),EXTRACT_LEN(sign+1),pki_store_index);
    }
    return result;
}
void initialise_lib()
{
    int i;
    for(i=0;i<2;++i)
    {
      key_entry* pks= pk_store + i;
      pks->key_type=0; 
    }
}
#endif
