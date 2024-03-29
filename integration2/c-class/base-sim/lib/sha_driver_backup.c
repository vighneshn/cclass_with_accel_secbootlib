#include "util.h"

void pad_inp(void* source, uint64_t size){
  uint8_t mis_aligned = 1;//source%0x100;
  uint64_t*ptr = source;
  uint64_t*ptr2 = (long unsigned int)ptr & ~(long unsigned int)0x1f;
  uint64_t diff = (char*)ptr-(char*)ptr2;
  uint64_t tot_size = size + 1 + 64;
  uint64_t padtotsize = ((tot_size>>9)+1);
  uint64_t num64size = ((padtotsize<<3));
  volatile uint64_t* sha_plaintext=(uint64_t*) 0x00021200;
  volatile uint8_t* sha_config=(uint8_t*) 0x000212c0;

  uint64_t temp1=0, temp2=0;
  uint64_t size_p = (size>>6);
  uint64_t one = 1, req = size&0x3f, zero = 0;
  
  *sha_config = 0;
  printf("IN SHA %x %x %x %x\n", *((uint8_t*)source), size, tot_size, padtotsize);
  printf("IN SHA2 %x %x\n", (ptr), (char*)ptr-(char*)ptr2);
  temp1 = *(ptr+size_p);
  for(int i=0; i<num64size; i++){
    if(i==8)
      *sha_config = 1;
    if(64*(i+1)<=size){
      if(req!=0){
        if(i<size_p)
          temp2 = *(ptr+size_p-i-1);
        else
          temp2 = 0;
        *sha_plaintext = (temp1<<(64-req))|(temp2>>(req));
        temp1 = temp2;
      }
      else
        *sha_plaintext = *(ptr+(size_p-i-1));
      printf("\n%d, %lx\n", i, *(ptr+(size_p-i)));
    }
    else if(64*(i+1)<=size+64){
      uint64_t data;
      if(req!=0){
        if(i<size_p+1)
          temp2 = *(ptr+size_p-i-1);
        else
          temp2 = 0;
        data = (temp1<<(64-req))|(temp2>>(req));
        temp1 = temp2;
      }
      else
        data = *(ptr+(size_p-i-1));
      uint64_t one = 1;
      uint64_t max = ~0;
      data = ((data)|(one<<(64-(size+64-64*(i+1)+1))))&(max-((one<<(64-(64+size-64*(i+1)+2)))-1));
      printf("\n%d, %lx\n", i, data);
      *sha_plaintext = data;
    }
    else if(i==(num64size-1))
      *sha_plaintext = size;
    else
      *sha_plaintext = 0;
  }
}

void compute_hash(void* source, void* dest, uint64_t size){
  void *ptr = source;
  volatile uint64_t* ptr_out = dest;
  uint64_t tot_size = size + 1 + 64;
  uint64_t padtotsize = ((tot_size>>9)+1);
  uint64_t num64size = ((padtotsize<<3));
  volatile uint64_t* sha_plaintext=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_output=(uint64_t*) 0x00021280;
  volatile uint8_t* sha_config=(uint8_t*) 0x000212c0;
  volatile uint8_t* sha_status=(uint8_t*) 0x000212c1;

  pad_inp(source, size);
  while(*sha_status == 0);
  *(ptr_out+0) = *sha_output;
  *(ptr_out+1) = *sha_output;
  *(ptr_out+2) = *sha_output;
  *(ptr_out+3) = *sha_output;
  *sha_config = 0;
}
