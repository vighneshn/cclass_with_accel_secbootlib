/******************************************************************************
 * Department of Computer Science Engineering, IIT Madras
 *
 * 192red_16.c
 *
 * "192 bit NIST prime reduction for 16 bit WORD_SIZE"
 *  C code
 *
 * December 01, 2016
 *
 *Authors : Keerthi K
 *****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "types.h"
void modulo_red(bignum_t *one,mulnum_t *ret,bignum_t *bn_p)
{
          bignum_t s1,s2,s3,s4,num,num2,num3;
	
            BN_init(&s1);BN_init(&s2);BN_init(&s4);BN_init(&s3);BN_init(&num2);BN_init(&num3);
            s1.digits[0]=ret->muldigits[0];
            s1.digits[1]=ret->muldigits[1];
	    s1.digits[2]=ret->muldigits[2];
            s1.digits[3]=ret->muldigits[3];
            s1.digits[4]=ret->muldigits[4];
	    s1.digits[5]=ret->muldigits[5];
            s1.digits[6]=ret->muldigits[6];
            s1.digits[7]=ret->muldigits[7];
	    s1.digits[8]=ret->muldigits[8];
            s1.digits[9]=ret->muldigits[9];
            s1.digits[10]=ret->muldigits[10];
	    s1.digits[11]=ret->muldigits[11];

            s2.digits[0]=ret->muldigits[12];
            s2.digits[1]=ret->muldigits[13];
	    s2.digits[2]=ret->muldigits[14];
            s2.digits[3]=ret->muldigits[15];
            s2.digits[4]=ret->muldigits[16];
	    s2.digits[5]=ret->muldigits[17];
            s2.digits[6]=ret->muldigits[18];
            s2.digits[7]=ret->muldigits[19];
	    s2.digits[8]=ret->muldigits[20];
            s2.digits[9]=ret->muldigits[21];
            s2.digits[10]=ret->muldigits[22];
	    s2.digits[11]=ret->muldigits[23];

            s3.digits[0]=ret->muldigits[20];
            s3.digits[1]=ret->muldigits[21];
	    s3.digits[2]=ret->muldigits[22];
            s3.digits[3]=ret->muldigits[23];
            s3.digits[4]=ret->muldigits[12];
	    s3.digits[5]=ret->muldigits[13];
            s3.digits[6]=ret->muldigits[14];
            s3.digits[7]=ret->muldigits[15];
	    s3.digits[8]=ret->muldigits[16];
            s3.digits[9]=ret->muldigits[17];
            s3.digits[10]=ret->muldigits[18];
	    s3.digits[11]=ret->muldigits[19];

            s4.digits[0]=0;
            s4.digits[1]=0;
	    s4.digits[2]=0;
            s4.digits[3]=0;
            s4.digits[4]=ret->muldigits[20];
	    s4.digits[5]=ret->muldigits[21];
            s4.digits[6]=ret->muldigits[22];
            s4.digits[7]=ret->muldigits[23];
	    s4.digits[8]=0;
            s4.digits[9]=0;
            s4.digits[10]=0;
	    s4.digits[11]=0;

            BN_add(&num,&s1,&s2);
	    BN_add(&num2,&s3,&s4);
            BN_add(one,&num,&num2);
            while(BN_compare(one,bn_p) == 1)
               BN_sub(one,one,bn_p);
}
