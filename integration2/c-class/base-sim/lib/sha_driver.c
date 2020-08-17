#include "util.h"

void compute_hash(void* source, void* dest, uint64_t size, int debug_flag){
  uint64_t *ptr = source;
  uint64_t *ptr2 = (long unsigned int)ptr & ~(long unsigned int)0x7;
  int diff = ((char*)ptr - (char*)ptr2)<<3;
  //void *ptr_out = dest;
  volatile uint64_t* ptr_out = dest;
  uint64_t tot_size = size + 1 + 64;
  uint64_t padtotsize = ((tot_size>>9)+1);
  //uint64_t padtotsize = ((tot_size>>9)+1);
  //uint64_t padtotsize = ((tot_size>>10)+1);
  uint64_t num64size = ((padtotsize<<3));
  //uint64_t num64size = ((tot_size>>6));
  volatile uint64_t* sha_plaintext=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_output=(uint64_t*) 0x00021280;
  volatile uint8_t* sha_config=(uint8_t*) 0x000212c0;
  volatile uint8_t* sha_status=(uint8_t*) 0x000212c1;
  
  *sha_config = 0;
  //printf("Addresses in sha %x, %x, %d, %d\n", ptr, ptr2, diff, ptr-ptr2);
  for(int i=0; i<num64size; i++){
    //printf("%d, %d, %lx, %d, %d\n", i, padtotsize, *((uint64_t*)(ptr2+i)), num64size, size);
    if(i==8){
      *sha_config = 1;
    }
    if(64*(i+1)<=size){
      //printf("IF\n");
      uint64_t temp1 = *(ptr2+i);
      uint64_t temp = *(ptr2+i+1);
      uint64_t temp2 = ((*((uint64_t*)(ptr2+i)))>>diff)|(temp<<(64-diff));
      if((diff!=0) && (diff!=64))
        *sha_plaintext = (((temp2)<<56)&(0xff00000000000000))|(((temp2)<<40)&(0x00ff000000000000))|(((temp2)<<24)&(0x0000ff0000000000))|(((temp2)<<8)&(0x000000ff00000000))|(((temp2)>>8)&(0x00000000ff000000))|(((temp2)>>24)&(0x0000000000ff0000))|(((temp2)>>40)&(0x000000000000ff00))|(((temp2)>>56)&(0x00000000000000ff));
      else
        *sha_plaintext = (((temp1)<<56)&(0xff00000000000000))|(((temp1)<<40)&(0x00ff000000000000))|(((temp1)<<24)&(0x0000ff0000000000))|(((temp1)<<8)&(0x000000ff00000000))|(((temp1)>>8)&(0x00000000ff000000))|(((temp1)>>24)&(0x0000000000ff0000))|(((temp1)>>40)&(0x000000000000ff00))|(((temp1)>>56)&(0x00000000000000ff));
        //*sha_plaintext = *(ptr+i);
      //*sha_plaintext = *((uint64_t*)(ptr2+i));
      //if(debug_flag!=0)
      //  printf("IF %0.2lx %0.2lx %0.2lx %0.2lx %0.2lx\n", ((*((uint64_t*)(ptr2+i)))>>(diff))|(temp<<(64-diff)), temp, temp2, (*(ptr2+i))>>diff, temp<<(64-diff));
      //ptr2 = ptr2+1;
    }
    else if(64*(i+1)<=size+64){
      //printf("\nELIF1 diff %d\n", diff);
      uint64_t temp1 = *(ptr2+i);
      uint64_t temp = *(ptr2+i+1);
      uint64_t temp2 = ((*((uint64_t*)(ptr2+i)))>>diff)|(temp<<(64-diff));
      if(diff==0)
        temp2 = temp1;
      //uint64_t data = *((uint64_t*)(ptr2+i));
      uint64_t data = (((temp2)<<56)&(0xff00000000000000))|(((temp2)<<40)&(0x00ff000000000000))|(((temp2)<<24)&(0x0000ff0000000000))|(((temp2)<<8)&(0x000000ff00000000))|(((temp2)>>8)&(0x00000000ff000000))|(((temp2)>>24)&(0x0000000000ff0000))|(((temp2)>>40)&(0x000000000000ff00))|(((temp2)>>56)&(0x00000000000000ff));
      //data = temp1;
      uint64_t one = 1;
      uint64_t max = ~0;
      //Below line was working.
      //data = ((data)|(one<<(64-(size+64-64*(i+1)+1))))&(max-((one<<(64-(64+size-64*(i+1)+2)))-1));
      //New line
      data = ((data)|(one<<(64-(size+64-64*(i+1)+1))))&(max-((one<<(64-(64+size-64*(i+1)+1)))-1));
      *sha_plaintext = data;
      //printf("\nELIF %llx, %llx, %llx, %llx, %llx\n", data, 64-(size+64-64*(i+1)+1), ((one)<<(size+64-64*(i+1)+1)),*((uint64_t*)(ptr2+i))<<63, (one<<63));
    }
    else if(i==(num64size-1)){
      //printf("ELIF2 %d\n", size);
      *sha_plaintext = size;
      //printf("ELIF2 %lx\n", size);
    }
    else {
      //printf("ELSE\n");
      *sha_plaintext = 0;
      //printf("ELSE\n");
    }
  }
  //printf("DONE sending IP\n");

  //for(int i=0; i<4; i++){
  //  *(ptr_out+i) = *sha_output;
    //ptr_out++;
  //  printf("%d, %lx\n", i, *sha_output);
  //}
  *sha_config = 0;
  while(*sha_status == 0);
  //*(ptr_out+3) = *sha_output;
  //*(ptr_out+2) = *sha_output;
  //*(ptr_out+1) = *sha_output;
  //*(ptr_out+0) = *sha_output;
  volatile uint64_t temp0 = *sha_output;
  *(ptr_out+3) = ((temp0>>56)&(0x00000000000000ff))|((temp0>>40)&(0x000000000000ff00))|((temp0>>24)&(0x0000000000ff0000))|((temp0>>8)&(0x00000000ff000000))|((temp0<<8)&(0x000000ff00000000))|((temp0<<24)&(0x0000ff0000000000))|((temp0<<40)&(0x00ff000000000000))|((temp0<<56)&(0xff00000000000000));
  temp0 = *sha_output;
  *(ptr_out+2) = ((temp0>>56)&(0x00000000000000ff))|((temp0>>40)&(0x000000000000ff00))|((temp0>>24)&(0x0000000000ff0000))|((temp0>>8)&(0x00000000ff000000))|((temp0<<8)&(0x000000ff00000000))|((temp0<<24)&(0x0000ff0000000000))|((temp0<<40)&(0x00ff000000000000))|((temp0<<56)&(0xff00000000000000));
  temp0 = *sha_output;
  *(ptr_out+1) = ((temp0>>56)&(0x00000000000000ff))|((temp0>>40)&(0x000000000000ff00))|((temp0>>24)&(0x0000000000ff0000))|((temp0>>8)&(0x00000000ff000000))|((temp0<<8)&(0x000000ff00000000))|((temp0<<24)&(0x0000ff0000000000))|((temp0<<40)&(0x00ff000000000000))|((temp0<<56)&(0xff00000000000000));
  temp0 = *sha_output;
  *(ptr_out+0) = ((temp0>>56)&(0x00000000000000ff))|((temp0>>40)&(0x000000000000ff00))|((temp0>>24)&(0x0000000000ff0000))|((temp0>>8)&(0x00000000ff000000))|((temp0<<8)&(0x000000ff00000000))|((temp0<<24)&(0x0000ff0000000000))|((temp0<<40)&(0x00ff000000000000))|((temp0<<56)&(0xff00000000000000));
  //printf("DONE sending PP\n");
}

//int main(){
//  uint64_t a[8] = {7,1,2,3,4,5,6};
//  uint64_t b[4];
//
//  compute_hash(a,b,576);
//  printf("%lx %lx %lx %lx\n", b[0], b[1], b[2], b[3]);
//
//  compute_hash(a,b,416);
//  printf("%lx %lx %lx %lx\n", b[0], b[1], b[2], b[3]);
//}
//int main(){
  //dbeef000b7dde0006fbbc000df778000beef00007dde0000fbbc0000f7780000eef00000dde00000bbc0000077800000ef000000de000000bc00000078000000
  /*
  volatile uint64_t* sha_plaintext1=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext2=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext3=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext4=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext5=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext6=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext7=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext8=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_output1=(uint64_t*) 0x00021280;
  volatile uint64_t* sha_output2=(uint64_t*) 0x00021280;
  volatile uint64_t* sha_output3=(uint64_t*) 0x00021280;
  volatile uint64_t* sha_output4=(uint64_t*) 0x00021280;
  volatile uint8_t* sha_config=(uint8_t*) 0x000212c0;
  volatile uint8_t* sha_status=(uint8_t*) 0x000212c1;

  // *sha_config=0;
  *sha_plaintext1=0xbc00000078000000;
  *sha_plaintext2=0xef000000de000000;
  *sha_plaintext3=0xbbc0000077800000;
  *sha_plaintext4=0xeef00000dde00000;
  *sha_plaintext5=0xfbbc0000f7780000;
  *sha_plaintext6=0xbeef00007dde0000;
  *sha_plaintext7=0x6fbbc000df778000;
  *sha_plaintext8=0xdbeef000b7dde000;
  printf("Hi");

  volatile uint64_t outLSB1= *sha_output1;
  volatile uint64_t outLSB2= *sha_output1;
  volatile uint64_t outLSB3= *sha_output1;
  volatile uint64_t outLSB4= *sha_output1;
  printf("\nResult2: 0x %lx %lx %lx %lx \n", outLSB4, outLSB3, outLSB2, outLSB1);
  return 0;
  */
//}
