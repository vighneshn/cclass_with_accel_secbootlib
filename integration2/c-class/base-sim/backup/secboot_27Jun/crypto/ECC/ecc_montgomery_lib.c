/******************************************************************************
 * Department of Computer Science Engineering, IIT Madras
 *
 * ecc_montgomery_lib.c
 *
 * "Elliptic Curve library Algorithms(For Montgomery multiplication)"
 *  C code
 *
 * January 02, 2017
 *
 *Authors :Keerthi K
 *****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "types.h"


/**********************************************************************************
 * Affine to Jacobian Projective
 *
 * Input : (x,y)
 *
 * Output :(X,Y,Z) where X = x/Z^c ,Y = y/Z^d ,Z!=0
 **********************************************************************************/
void affine_to_jacobproj(bignum_t *X,bignum_t *Y,bignum_t *Z,bignum_t *x,bignum_t *y)
{

    /**For easy computation choose Z = 1**/
      BN_copy(X,x);
      BN_copy(Y,y);
      Z->digits[0] = 1;
}

/**********************************************************************************
 * Jacobian Projective coordinate to affine coordinate
 *
 * Input : (X,Y,Z)
 *
 * Output :(x,y)
 **********************************************************************************/
void jacobproj_to_affine(bignum_t *x3,bignum_t *y3,bignum_t *X,bignum_t *Y,bignum_t *Z,bignum_t *p)
{
    bignum_t RR;
    BN_init(&RR);

    char Rstring[]="100000000000000020000000000000001";
    BN_hex2bn(&RR, Rstring);
   bignum_t Z2,inv;
   BN_init(&Z2);BN_init(&inv);
   BN_copy(&Z2,Z);
   BN_mont_mul(&Z2,Z,p,RR);   /***Z^2***/

        	BN_inv_mod(&inv,&Z2,p);
        	 BN_mont_mul(X,&inv,p,RR);
        	 BN_copy(x3,X);       /******affine coordinate x ****/
	
        	 BN_mont_mul(&Z2,Z,p,RR);
       		 if(Z2.sign < 0)
      		  {
		  Z2.sign = 1;
                  BN_inv_mod(&inv,&Z2,p);
        	  inv.sign = -1;
        	  }
        	  else
         	  {
	 	  BN_inv_mod(&inv,&Z2,p);
         	  }
         	BN_mont_mul(Y,&inv,p,RR);
         	BN_copy(y3,Y);     /*******affine coordinate y ****/


}
/********************************************************************
 * Point doubling in jacobian coordinate (Montgomery multiplication)
 *
 * Input  : P=(x,y) be the point on the curve
 *
 * Output : 2P 
 ********************************************************************/s
void Jacobian_point_double(bignum_t *X3,bignum_t *Y3,bignum_t *Z3,bignum_t *a,bignum_t *p, bignum_t *X, bignum_t *Y,bignum_t *Z)
{
   	bignum_t A,B,C,D,RR,r1,D2,Z1,two;
   	BN_init(&A);BN_init(&B);BN_init(&C);BN_init(&RR);BN_init(&r1);BN_init(&D2);BN_init(&Z1);BN_init(&two);
	
    	/************ RR = R^2 mod P *****************/
        char Rstring[]="100000000000000020000000000000001";
        BN_hex2bn(&RR, Rstring);
        if(BN_cmp_int( X, 0) == 0 )
         	{
                 if(BN_cmp_int( Y, 0) == 0 )
 		  	{
 			if(BN_cmp_int( Z, 1) == 0 )
				{
				BN_copy(X3,X);
				BN_copy(Y3,Y);
				BN_copy(Z3,Z);
                                return;
				}
			}
		}
    	BN_copy(&A,Y);
    	BN_mont_mul(&A,Y,p,RR);
    	B.digits[0]=4;
    	BN_mont_mul(&B,X,p,RR);
    	BN_mont_mul(&B,&A,p,RR);
    	C.digits[0]=8;
    	BN_mont_mul(&C,&A,p,RR);
    	BN_mont_mul(&C,&A,p,RR);
        r1.digits[0]=3;
        BN_mont_mul(&r1,X,p,RR);
    	BN_mont_mul(&r1,X,p,RR);
        BN_copy(&Z1,Z);
        BN_mont_mul(&Z1,Z,p,RR);
        BN_mont_mul(&Z1,&Z1,p,RR);
        BN_mont_mul(&Z1,a,p,RR);
        BN_mod_add(&D,&r1,&Z1,p);
        
        BN_copy(&D2,&D);
        BN_mont_mul(&D2,&D,p,RR);
        two.digits[0] = 2;
        BN_mont_mul(&two,&B,p,RR);
        BN_mod_sub(X3,&D2,&two,p);/*******X3 projective coordinate*****/
        BN_init(Z3);
        Z3->digits[0] = 2;
        BN_mont_mul(Y,Z,p,RR);
        BN_mont_mul(Z3,Y,p,RR);/******Z3 projective coordinate*****/

        BN_mod_sub(&B,&B,X3,p);
        BN_mont_mul(&D,&B,p,RR);
        BN_mod_sub(Y3,&D,&C,p);/********Y3 projective coordinate*****/
   
        
   
}
/********************************************************************
 * Point Addition affine-Jacobian coordinates (Montgomery multiplication)
 *
 * Input : P = (X1,Y1,Z1)  Q = (x2,y2)
 *
 * Output : Q = P+Q = (X3,Y3,Z3)
 ********************************************************************/
void Jacobian_affine_addition(bignum_t *X3,bignum_t *Y3,bignum_t *Z3,bignum_t *X1,bignum_t *Y1,bignum_t *Z1,bignum_t *x2,bignum_t *y2,bignum_t *a,bignum_t *p)
{
        bignum_t RR;
        BN_init(&RR);
        /************ RR = R^2 mod P *****************/
        char Rstring[]="100000000000000020000000000000001";
        BN_hex2bn(&RR, Rstring);
    	bignum_t T1,T2,z2,T3,T4;
    	BN_init(&T1);BN_init(&T2);BN_init(&T3);BN_init(&T4);BN_init(&z2);
        z2.digits[0] = 1;
        if((BN_cmp_int( x2, 0) == 0 )&&(BN_cmp_int( y2, 0) == 0 ))
         	{
                 BN_copy(X3,X1);
		 BN_copy(Y3,Y1);
		 BN_copy(Z3,Z1);
                 return;
                 }
        if((BN_cmp_int( X1, 0) == 0 )&&(BN_cmp_int( Y1, 0) == 0 )&&(BN_cmp_int( Z1, 1) == 0 ))
		{
                 BN_copy(X3,x2);
		 BN_copy(Y3,y2);
		 BN_copy(Z3,&z2);
                 return;
		}
        BN_copy(&T1,Z1);
    	BN_mont_mul(&T1,Z1,p,RR);
    	BN_copy(&T2,&T1);
    	BN_mont_mul(&T2,Z1,p,RR);
    	BN_mont_mul(&T1,x2,p,RR);
    	BN_mont_mul(&T2,y2,p,RR);
    	BN_mod_sub(&T1,&T1,X1,p);
    	BN_mod_sub(&T2,&T2,Y1,p);
    	if(BN_cmp_int( &T1, 0) == 0 )
        	{
           
                 if(BN_cmp_int( &T2, 0) == 0 )
        	 {
                   Jacobian_point_double(X3,Y3,Z3,a,p,x2,y2,&z2);
                   return;
                 }
                 else
                {
                 X3->digits[0] = 0;
                 Y3->digits[0] = 0;
                 Z3->digits[0] = 1;
                 return;
                }
  
                }
       BN_copy(Z3,Z1);
       BN_mont_mul(Z3,&T1,p,RR);/*************Z3***********/
       
       BN_copy(&T3,&T1);
       BN_mont_mul(&T3,&T1,p,RR);
       BN_copy(&T4,&T3);
       BN_mont_mul(&T4,&T1,p,RR);
       BN_mont_mul(&T3,X1,p,RR);
       BN_init(&T1);
       T1.digits[0] = 2;
       BN_mont_mul(&T1,&T3,p,RR);
       BN_copy(X3,&T2);
       BN_mont_mul(X3,&T2,p,RR);
       BN_mod_sub(X3,X3,&T1,p);
       BN_mod_sub(X3,X3,&T4,p);/***************X3***********/
       BN_mod_sub(&T3,&T3,X3,p);
       BN_mont_mul(&T3,&T2,p,RR);
       BN_mont_mul(&T4,Y1,p,RR);
       BN_mod_sub(Y3,&T3,&T4,p);/*************Y3************/
       return;
}
/********************************************************************
 * Point Addition using Jacobian coordinates (Montgomery multiplication)
 *
 * Input : P = (X1,Y1,Z1)  Q = (X2,Y2,Z2)
 *
 * Output : Q = P+Q = (X3,Y3,Z3)
 ********************************************************************/
void jacob_add(bignum_t *X3,bignum_t *Y3,bignum_t *Z3,bignum_t *X1,bignum_t *Y1,bignum_t *Z1,bignum_t *X2,bignum_t *Y2,bignum_t *Z2,bignum_t *a,bignum_t *p,bignum_t RR)
{
     bignum_t T1,T2,T3,T4,T5,T6,two;
     BN_init(&T1);BN_init(&T2);BN_init(&T3);BN_init(&T4);BN_init(&T5);BN_init(&T6),BN_init(&two);
     if((BN_cmp_int( X2, 0) == 0 )&&(BN_cmp_int( Y2, 0) == 0 )&&(BN_cmp_int( Z2, 1) == 0 ))
         	{
                 BN_copy(X3,X1);
		 BN_copy(Y3,Y1);
		 BN_copy(Z3,Z1);
                 return;
                 }
     if((BN_cmp_int( X1, 0) == 0 )&&(BN_cmp_int( Y1, 0) == 0 )&&(BN_cmp_int( Z1, 1) == 0 ))
		{
                 BN_copy(X3,X2);
		 BN_copy(Y3,Y2);
		 BN_copy(Z3,Z2);
                 return;
		}

        BN_copy(&T1,Z1);
    	BN_mont_mul(&T1,Z1,p,RR);/****T1 = Z1^2*****/
    	BN_copy(&T2,&T1);
    	BN_mont_mul(&T2,Z1,p,RR);/****T2 = Z1^3*****/
         BN_copy(&T3,Z2);
    	BN_mont_mul(&T3,Z2,p,RR);/****T3 = Z2^2*****/
    	BN_copy(&T4,&T3);
    	BN_mont_mul(&T4,Z2,p,RR);/****T4 = Z2^3*****/
    	BN_mont_mul(&T1,X2,p,RR);/****T1 = X2 * Z1^2*****/
    	BN_mont_mul(&T2,Y2,p,RR);/****T2 = Y2 * Z1^3*****/
        BN_mont_mul(&T3,X1,p,RR);/****T3 = X1 * Z2^2*****/
    	BN_mont_mul(&T4,Y1,p,RR);/****T4 = Y1 * Z2^3*****/
        if(BN_compare( &T1, &T3) == 0 )
        	{
                  printf("equal");
                 if(BN_compare( &T2, &T4) == 0 )
        	 {
                   Jacobian_point_double(X3,Y3,Z3,a,p,X1,Y1,Z1);
                   return;
                 }
                 else
                {
                 X3->digits[0] = 0;
                 Y3->digits[0] = 0;
                 Z3->digits[0] = 1;
                 return;
                }
  
                }
       BN_mod_sub(&T1,&T1,&T3,p);/****h****/
       BN_mod_sub(&T2,&T2,&T4,p);/****r****/
          
       BN_copy(Z3,&T1);
       BN_mont_mul(Z3,Z1,p,RR);
       BN_mont_mul(Z3,Z2,p,RR);/*************Z3***********/

       BN_copy(&T5,&T2);
       BN_mont_mul(&T5,&T2,p,RR);/*****r^2****/

       BN_copy(&T6,&T1);
       BN_mont_mul(&T6,&T1,p,RR);/********h^2*****/

       BN_mont_mul(&T3,&T6,p,RR);/*****u1*h^2***/
   
       two.digits[0] = 2;
       BN_mont_mul(&two,&T3,p,RR);/****2*u1*h^2*****/

       BN_mont_mul(&T1,&T6,p,RR);/******h^3***/
      
       BN_mod_sub(&T5,&T5,&T1,p);
       BN_mod_sub(X3,&T5,&two,p);/***************X3***********/
       BN_mod_sub(&T3,&T3,X3,p);
       BN_mont_mul(&T2,&T3,p,RR);
       BN_mont_mul(&T4,&T1,p,RR);
       BN_mod_sub(Y3,&T2,&T4,p);/*************Y3************/
       return;

}
/*************************************************************************************
 *
 *  Finding Negation of the point on the curve
 *
 *  Input : (x1,y1)
 *
 *  Output : (x3,y3)
 *
 *************************************************************************************/
static void Point_negation(bignum_t *x3,bignum_t *y3,bignum_t *P,bignum_t *x1,bignum_t *y1)
{
       bignum_t temp;
       BN_mod_sub(&temp,P,y1,P);
       BN_copy(x3,x1);
       BN_copy(y3,&temp);
       
}
/********************************************************************************
 *
 * Modulus function
 * 
 * Note : count should be power of 2
 *
 ********************************************************************************/
static void BN_mod(bignum_t *x,size_t count)
{    
     int i;
     bignum_t p;
     BN_init(&p);
     BN_copy(&p,x);
     BN_shift_right(&p,count);
     for(i = 0 ;i < count ; i++)
          BN_shift_left(&p);
 
     BN_sub(x,x,&p);
          
       x->sign=1;
     
}
/**********************************************************************************
 *
 * NAF of a poitive integer
 *
 * Input : k a positive Integer
 *
 * Output : NAF(k)
 *
 ********************************************************************************/
static void NAF(int *io,int *a,bignum_t *k)
{
     int i=0;
     bignum_t TA,two,ki,rem,r1,num;
     BN_init(&TA);BN_init(&two);BN_init(&num);BN_init(&rem);
     two.digits[0] = 2;
     BN_copy(&TA,k);
     int z=1,m;
     signed int p;
     while(BN_cmp_int( &TA, z ) >= 0)
     {

         if(( TA.digits[0] & 1 ) == 1)
	 { 
           BN_copy(&num,&TA);
           BN_mod(&num,2);
           rem.digits[0] = num.digits[0];
           BN_sub(&ki,&two,&rem);
           BN_sub(&TA,&TA,&ki);
           //BN_copy(&TA,&r1);
           p = ki.digits[0];
           if( ki.sign < 0 )
              *(a++) = -p;
           else
              *(a++) = p;
           
         }
         else
         {
            *(a++) = 0;
         }
     
      BN_shift_right(&TA, 1);
      i = i + 1;
     }
   *io = i;
}
/**********************************************************************************
 *
 *  Width w NAF of a positive integer k
 *
 *  Input : k a positive Integer(w is the width of the window)
 *
 *  Output : W_NAF(k)
 *
 ********************************************************************************/
static void W_NAF(int *io,int *a,bignum_t *k,int w)
{

     int i=0;
     bignum_t TA,win,r1,num;
     BN_init(&TA);BN_init(&win);BN_init(&num);
     win.digits[0] = (1<<w);
     BN_copy(&TA,k);
     signed int p;
     while(BN_cmp_int( &TA, 1 ) >= 0)
     {

         if(( TA.digits[0] & 1 ) == 1)
	 { 
                BN_copy(&num,&TA);
           	BN_mod(&num,w);
           	p = num.digits[0];
           	if( p > (1<<(w-1)))
               		{
               		BN_sub(&num,&num,&win);
               		}
           	BN_sub(&TA,&TA,&num);
           	p = num.digits[0];
           	if( num.sign < 0 )
      		  *(a++) = -p;
           	else
      		  *(a++) = p;
           
         }
         else
         {
            *(a++) = 0;
         }
     
      BN_shift_right(&TA, 1);
      i = i + 1;
     }
   *io = i;
}
/*****************************************************************************
 *
 *   Repeated Doubling  Algorithm for curve y^2 = x^3+ax+b
 *
 ****************************************************************************/
static void Repeated_doubling(bignum_t *X,bignum_t *Y,bignum_t *Z,int m,bignum_t *a,bignum_t *p,bignum_t RR)
{
        bignum_t two,three,A,W,B,T1,C,p1,inv,x3,y3;
        BN_init(&two);BN_init(&three);BN_init(&A);BN_init(&W);BN_init(&B);BN_init(&T1);BN_init(&C);BN_init(&inv);BN_init(&x3),BN_init(&y3);
  	  if((BN_cmp_int( X, 0 ) == 0 )&&(BN_cmp_int( Y, 0 ) == 0 )&&(BN_cmp_int( Z, 1 ) == 0 ))
                   return;
          two.digits[0] = 2;
          three.digits[0] = 3;
          //BN_shift_left(Y);
          BN_mont_mul(Y,&two,p,RR);
          BN_copy(&W,Z);
          BN_mont_mul(&W,Z,p,RR);
          BN_mont_mul(&W,&W,p,RR);
          
 	  while( m > 0 )
 		{
                 BN_copy(&A,X);
                 BN_mont_mul(&A,X,p,RR);
                 BN_mont_mul(&A,&three,p,RR);
                 BN_copy(&T1,&W);
                 BN_mont_mul(&T1,a,p,RR);
                 BN_mod_add(&A,&A,&T1,p);
                 BN_copy(&B,Y);
                 BN_mont_mul(&B,Y,p,RR);
                 BN_copy(&C,&B);
                 BN_mont_mul(&B,X,p,RR);
                 BN_copy(&T1,&B);
                 BN_mont_mul(&T1,&two,p,RR);
                 BN_copy(X,&A);
                 BN_mont_mul(X,&A,p,RR);
                 BN_mod_sub(X,X,&T1,p); /*****X*****/
                 BN_mont_mul(Z,Y,p,RR); /******Z******/
		 BN_mont_mul(&C,&C,p,RR);
                 m = m - 1;
                 if( m > 0 )
			{
                         BN_mont_mul(&W,&C,p,RR);
                        }
                 BN_mod_sub(&B,&B,X,p);
                 BN_mont_mul(&A,&B,p,RR);
		 BN_mont_mul(&A,&two,p,RR);
                 BN_mod_sub(Y,&A,&C,p); /***** Y *****/
                 
		}
              BN_inv_mod(&inv,&two,p);
              BN_mont_mul(Y,&inv,p,RR);
             		
}
