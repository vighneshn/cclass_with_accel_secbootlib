#ifdef DEBUG
    #include<stdio.h>
//    #include<stdlib.h>
#endif
#include<string.h>
#include "lib.h"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wimplicit-int"
#pragma GCC diagnostic ignored "-Wreturn-type"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"

/*
unsigned char* read_file(char* name,int len)
{
    unsigned char *data;
    data = (unsigned char *)malloc(len*sizeof(unsigned char));
    FILE *fp = fopen(name, "rb");
    if (!fp) {
	    fprintf(stderr, "unable to open: %s\n", name);
	    return NULL;
    }
    int n = fread(data,len,1,fp);
    printf("fread: %d\n",n);
    fclose(fp);
    return data;
}*/

//volatile int wait=1;
int main(int argc, char *argv[])
{
    printf("In BOOT\n"); 
    //while(wait);
    int boot_image=0;
    pk_store=(key_entry*)PK_STORE_ADDR;
    initialise_lib();
    //uint8_t *csf = *(unsigned int *)CSF_ADDRESS;
    uint8_t *csf = *(uint8_t *)CSF_ADDRESS;
    //uint8_t *csf=read_file("./csf.bin",4274),*data=read_file("./data.bin",1);
    //test(&csf);
#ifdef DEBUG
    printf("%x\n",csf);
    int i=0;
#endif
    char *temp = csf;    
    //uint8_t *temp = csf;    
    printf("%x %x\n",*temp,temp);
    if (*(temp++) != 0x0F)
    {
#ifdef DEBUG
        printf("Incorrect CSF Header Tag.\n");
#endif
        return 0;
    }
    printf("%x %x %x %x %x %x %x %x %x %x\n",temp,*temp,*(temp+1),*(temp+2),*(temp+3),*(temp+4),*(temp+5),*(temp+6),*(temp+7),*(temp+8));
    int csf_len =  ((*temp)<<8)+*(temp+1);
    temp+=3;
    printf("%x %x %x %x %x %x %x %x %x %x\n",csf,*csf,*(csf+1),*(csf+2),*(csf+3),*(csf+4),*(csf+5),*(csf+6),*(csf+7),*(csf+8));
    int status = 0;
    while( csf + csf_len > temp)
    {
#ifdef DEBUG
        printf("%d %x\n",i,temp);
        i++;
#endif
        if (*temp == 0x10 )
        {
            printf("In BOOT 2\n"); 
            temp++;
            temp++;
            int offset = (*(temp+4)<<24)+(*(temp+5)<<16)+(*(temp+6)<<8)+*(temp+7);
            status = install_key(*temp,*(temp+1),*(temp+2),*(temp+3),csf+offset);
            temp=temp+8;
#ifdef DEBUG
            if (status){
                printf("Install Key Success\n");
            }
            else
                printf("Install Key Fail\n");
#endif
        }
        else if(*temp==0x11)
        {
            printf("In BOOT 3\n"); 
            temp+=2;
            if (*(temp-1) == 9)
            {
                int offset = (*(temp+3)<<24)+(*(temp+4)<<16)+(*(temp+5)<<8)+*(temp+6);

                status = auth_data(*(temp),*(temp+1),*(temp+2),csf,csf_len,csf+offset);
                temp+=7;
            }
            else
            {
                
                unsigned char *data_offset = (unsigned char *)((unsigned int)0+(*(temp+3)<<24)+(*(temp+4)<<16)+(*(temp+5)<<8)+*(temp+6));
                int sign_offset = (*(temp+11)<<24)+(*(temp+12)<<16)+(*(temp+13)<<8)+*(temp+14);
                int data_len =  (*(temp+7)<<24)+(*(temp+8)<<16)+(*(temp+9)<<8)+*(temp+10);
                status = auth_data(*(temp),*(temp+1),*(temp+2),data_offset,data_len,csf+sign_offset);
                //printf("LENGTHS: %x\t%x\t%x\t%x\n",*data,data_offset,sign_offset,data_len);
                //status = auth_data(*(temp),*(temp+1),*(temp+2),data,data_len,csf+sign_offset);
                temp+=15;
                boot_image = status;
            }
#ifdef DEBUG
            if(status)
                printf("Auth Data success\n");
            else
                printf("Auth Data Fail\n");
#endif
        }
        if (status == 0)
        {
            printf("In BOOT 4\n"); 
            break; 
        }
    }
    if (boot_image == 1){
#ifdef DEBUG
        printf("Boot Success.\n");
#endif
        __asm__("li x10,0x80000000; jr x10;");

     //free(csf);
     //free(data);
    }
}
