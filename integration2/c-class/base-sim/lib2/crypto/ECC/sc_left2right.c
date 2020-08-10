/******************************************************************************
 * Department of Computer Science Engineering, IIT Madras
 *
 * sc_left2right.c
 *
 * "Scalar Multiplication"
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
/************************************************************************
 *
 *	Left-to-Right method of point Scalar Multiplication
 *
 *      INPUT : k interger and Point on curve, P = (x,y)
 *
 *	OUTPUT = kP
 *
 ***********************************************************************/
  void left_to_right_mul(bignum_t *x3,bignum_t *y3,bignum_t *k,bignum_t *A, bignum_t *P,bignum_t *x1,bignum_t *y1)
  {
	size_t nblimbs;
	size_t bufsize;
	word ei,state;
        int count=0;
        nblimbs = MAX_DIGITS-1;
	bufsize = 0;
	state   = 0;
        bignum_t X1,Y1,Z1,X3,Y3,Z3;
        BN_init(&X1);BN_init(&Y1);BN_init(&Z1);BN_init(&X3);BN_init(&Y3);BN_init(&Z3);
        X1.digits[0] = 0;
        Y1.digits[0] = 0;
        Z1.digits[0] = 1;
	while( 1 ){


		/******** k value converting to binary**********/
		if( bufsize == 0 )
		{
			if( nblimbs == 0 )
				break;

			nblimbs--;

			bufsize = sizeof( word ) << 3;
		}

		bufsize--;

		ei = (k->digits[nblimbs] >> bufsize) & 1;
	
                
		/*
		 * skip leading 0s
		 */
		if( ei == 0 && state == 0 )
			continue;

                         state=2;
                	 Jacobian_point_double(&X3,&Y3,&Z3,A,P,&X1,&Y1,&Z1);
                         BN_copy(&X1,&X3);
                    	 BN_copy(&Y1,&Y3);
                         BN_copy(&Z1,&Z3);
                         if( ei == 1 )
                            {
                              Jacobian_affine_addition(&X3,&Y3,&Z3,&X1,&Y1,&Z1,x1,y1,A,P);
                         	
                     		  BN_copy(&X1,&X3);
                    	          BN_copy(&Y1,&Y3);
                                  BN_copy(&Z1,&Z3);
                            }
                } 
      
    jacobproj_to_affine(x3,y3,&X1,&Y1,&Z1,P);

}
