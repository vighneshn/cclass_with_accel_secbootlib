#include<string.h>
#include "lib.h"
#include "debug.h"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wimplicit-int"
#pragma GCC diagnostic ignored "-Wreturn-type"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"

void jump_to(void* jump_addr)
{
   volatile register unsigned long* a0 asm("a0") = (unsigned long*) jump_addr;
   asm volatile("jr a0");
}

int main(int argc, char *argv[])
{
    printf("Inboot\n");
    lDebug(2,"In Bootrom.");
    int boot_image=0;
    initialise_lib();
    boot_image = validate_program(*(unsigned int *)CSF_ADDRESS);
    if (boot_image == 1){
        lDebug(2,"Boot Success.");
        __asm__("li x10,0x80000000; jr x10;");
    }
}
