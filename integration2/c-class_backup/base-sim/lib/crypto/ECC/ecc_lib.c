/******************************************************************************
 * Department of Computer Science Engineering, IIT Madras
 *
 * ecc_lib.c
 *
 * "Elliptic Curve library Algorithms(For Karatsuba multiplication)"
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
 * Jacobian Projective coordinate to affine coordinate
 *
 * Input : (X,Y,Z)
 *
 * Output :(x,y)
 **********************************************************************************/
void jacobproj_to_affine(bignum_t *x3,bignum_t *y3,bignum_t *X,bignum_t *Y,bignum_t *Z,bignum_t *p)
{
   bignum_t Z2,inv;
   mulnum_t r;
   BN_mulinit(&r);
   BN_init(&Z2);BN_init(&inv);
   BN_copy(&Z2,Z);
   karatsuba_mul(&r, &Z2, Z);   /***Z^2***/
   modulo_red(&Z2,&r,p);
 

        	 BN_inv_mod(&inv,&Z2,p);
                 karatsuba_mul(&r, X, &inv);
                 modulo_red(x3,&r,p);    /******affine coordinate x ****/
                 karatsuba_mul(&r, &Z2, Z);
                 modulo_red(&Z2,&r,p);
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
                karatsuba_mul(&r, Y, &inv);
                modulo_red(y3,&r,p);     /*******affine coordinate y ****/
}

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

/********************************************************************
 * Point doubling in jacobian coordinate (Karatsuba multiplication)
 *
 * Input  : P=(x,y) be the point on the curve
 *
 * Output : 2P 
 ********************************************************************/
void Jacobian_point_double(bignum_t *X3,bignum_t *Y3,bignum_t *Z3,bignum_t *a,bignum_t *p, bignum_t *X, bignum_t *Y,bignum_t *Z)
{      
  	bignum_t A,B,C,D,r1,D2,Z1,two;
       
   	BN_init(&A);BN_init(&B);BN_init(&C);BN_init(&r1);BN_init(&D2);BN_init(&Z1);BN_init(&two);
        mulnum_t r;
        BN_mulinit(&r);
        
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
        karatsuba_mul(&r, &A, Y);
        modulo_red(&A,&r,p);
    	B.digits[0]=4;
        karatsuba_mul(&r, &B, X);
        modulo_red(&B,&r,p);
              
        karatsuba_mul(&r, &B, &A);
        modulo_red(&B,&r,p);
    	C.digits[0]=8;
        karatsuba_mul(&r, &C, &A);
        modulo_red(&C,&r,p);
        karatsuba_mul(&r, &C, &A);
        modulo_red(&C,&r,p);
        r1.digits[0]=3;
        karatsuba_mul(&r, &r1, X);
        modulo_red(&r1,&r,p);
        karatsuba_mul(&r, &r1, X);
        modulo_red(&r1,&r,p);
        BN_copy(&Z1,Z);
        karatsuba_mul(&r, &Z1,Z);
        modulo_red(&Z1,&r,p);
        karatsuba_mul(&r, &Z1, &Z1);
        modulo_red(&Z1,&r,p);
        karatsuba_mul(&r, &Z1, a);
        modulo_red(&Z1,&r,p);
        BN_mod_add(&D,&r1,&Z1,p);
        
        BN_copy(&D2,&D);
        karatsuba_mul(&r, &D2, &D);
        modulo_red(&D2,&r,p);
        two.digits[0] = 2;
        karatsuba_mul(&r, &two, &B);
        modulo_red(&two,&r,p);
        BN_mod_sub(X3,&D2,&two,p);/*******X3 projective coordinate*****/
        BN_init(Z3);
        Z3->digits[0] = 2;
        karatsuba_mul(&r, Y, Z);
        modulo_red(Y,&r,p); 
        karatsuba_mul(&r, Z3, Y);
        modulo_red(Z3,&r,p);/******Z3 projective coordinate*****/

        BN_mod_sub(&B,&B,X3,p);
        karatsuba_mul(&r, &D, &B);
        modulo_red(&D,&r,p);
        BN_mod_sub(Y3,&D,&C,p);/********Y3 projective coordinate*****/

    
}
/********************************************************************
 * Point Addition affine-Jacobian coordinates (Karatsuba multiplication)
 *
 * Input : P = (X1,Y1,Z1)  Q = (x2,y2)
 *
 * Output : Q = P+Q = (X3,Y3,Z3)
 ********************************************************************/
void Jacobian_affine_addition(bignum_t *X3,bignum_t *Y3,bignum_t *Z3,bignum_t *X1,bignum_t *Y1,bignum_t *Z1,bignum_t *x2,bignum_t *y2,bignum_t *a,bignum_t *p)
{
        mulnum_t r;
        BN_mulinit(&r);
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
        karatsuba_mul(&r, &T1, Z1);
        modulo_red(&T1,&r,p);
    	BN_copy(&T2,&T1);
        karatsuba_mul(&r, &T2, Z1);
        modulo_red(&T2,&r,p);
        karatsuba_mul(&r, &T1, x2);
        modulo_red(&T1,&r,p);
        karatsuba_mul(&r, &T2, y2);
        modulo_red(&T2,&r,p);
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
       karatsuba_mul(&r, Z3,&T1);
       modulo_red(Z3,&r,p);/*************Z3***********/
       BN_copy(&T3,&T1);
       karatsuba_mul(&r, &T3, &T1);
       modulo_red(&T3,&r,p);
       BN_copy(&T4,&T3);
       karatsuba_mul(&r, &T4,&T1);
       modulo_red(&T4,&r,p);
       karatsuba_mul(&r, &T3, X1);
       modulo_red(&T3,&r,p);
       BN_init(&T1);
       T1.digits[0] = 2;
       karatsuba_mul(&r, &T1,&T3);
       modulo_red(&T1,&r,p);
       BN_copy(X3,&T2);
       karatsuba_mul(&r, X3, &T2);
       modulo_red(X3,&r,p);
       BN_mod_sub(X3,X3,&T1,p);
       BN_mod_sub(X3,X3,&T4,p);/***************X3***********/
       BN_mod_sub(&T3,&T3,X3,p);
       karatsuba_mul(&r, &T3,&T2);
       modulo_red(&T3,&r,p);
       karatsuba_mul(&r, &T4, Y1);
       modulo_red(&T4,&r,p);
       BN_mod_sub(Y3,&T3,&T4,p);/*************Y3************/

       return;
}
/********************************************************************
 * Point Addition using Jacobian coordinates (Karatsuba multiplication)
 *
 * Input : P = (X1,Y1,Z1)  Q = (X2,Y2,Z2)
 *
 * Output : Q = P+Q = (X3,Y3,Z3)
 ********************************************************************/
void jacob_add(bignum_t *X3,bignum_t *Y3,bignum_t *Z3,bignum_t *X1,bignum_t *Y1,bignum_t *Z1,bignum_t *X2,bignum_t *Y2,bignum_t *Z2,bignum_t *a,bignum_t *p)
{
     mulnum_t r;
     BN_mulinit(&r);
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
        karatsuba_mul(&r, &T1,Z1);
        modulo_red(&T1,&r,p);
    	BN_copy(&T2,&T1);
        karatsuba_mul(&r, &T2,Z1);
        modulo_red(&T2,&r,p);
        BN_copy(&T3,Z2);
        karatsuba_mul(&r, &T3,Z2);
        modulo_red(&T3,&r,p);
    	BN_copy(&T4,&T3);
        karatsuba_mul(&r, &T4,Z2);
        modulo_red(&T4,&r,p);		/****T4 = Z2^3*****/
        karatsuba_mul(&r, &T1,X2);
        modulo_red(&T1,&r,p);    	/****T1 = X2 * Z1^2*****/
        karatsuba_mul(&r, &T2,Y2);
        modulo_red(&T2,&r,p);   	/****T2 = Y2 * Z1^3*****/
        karatsuba_mul(&r, &T3,X1);
        modulo_red(&T3,&r,p);    	/****T3 = X1 * Z2^2*****/
        karatsuba_mul(&r, &T4,Y1);
        modulo_red(&T4,&r,p);   	/****T4 = Y1 * Z2^3*****/
        if(BN_compare( &T1, &T3) == 0 )
        	{
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
       BN_mod_sub(&T1,&T1,&T3,p);	/****h****/
       BN_mod_sub(&T2,&T2,&T4,p);	/****r****/
          
       BN_copy(Z3,&T1);
       karatsuba_mul(&r, Z3,Z1);
       modulo_red(Z3,&r,p);
       karatsuba_mul(&r, Z3,Z2);
       modulo_red(Z3,&r,p);		/*************Z3***********/

       BN_copy(&T5,&T2);
       karatsuba_mul(&r, &T5,&T2);
       modulo_red(&T5,&r,p);		/*****r^2****/

       BN_copy(&T6,&T1);
       karatsuba_mul(&r, &T6,&T1);
       modulo_red(&T6,&r,p); 		/********h^2*****/
       
       karatsuba_mul(&r, &T3,&T6);
       modulo_red(&T3,&r,p);
   
       two.digits[0] = 2;
       karatsuba_mul(&r,&two,&T3);
       modulo_red(&two,&r,p);
       
       karatsuba_mul(&r,&T1,&T6);
       modulo_red(&T1,&r,p);		/******h^3***/
      
       BN_mod_sub(&T5,&T5,&T1,p);
       BN_mod_sub(X3,&T5,&two,p);	/***************X3***********/
       BN_mod_sub(&T3,&T3,X3,p);
       karatsuba_mul(&r,&T2,&T3);
       modulo_red(&T2,&r,p);
       karatsuba_mul(&r,&T4,&T1);
       modulo_red(&T4,&r,p);
       BN_mod_sub(Y3,&T2,&T4,p);	/*************Y3************/
      
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
static void Repeated_doubling(bignum_t *X,bignum_t *Y,bignum_t *Z,int m,bignum_t *a,bignum_t *p)
{
         
   	mulnum_t r;
        BN_mulinit(&r);
        bignum_t two,three,A,W,B,T1,C,p1,inv,x3,y3;
        BN_init(&two);BN_init(&three);BN_init(&A);BN_init(&W);BN_init(&B);BN_init(&T1);BN_init(&C);BN_init(&inv);BN_init(&x3);BN_init(&y3);
  	  if((BN_cmp_int( X, 0 ) == 0 )&&(BN_cmp_int( Y, 0 ) == 0 )&&(BN_cmp_int( Z, 1 ) == 0 ))
                   return;
          
        two.digits[0] = 2;
        three.digits[0] = 3;
        karatsuba_mul(&r,Y,&two);
        modulo_red(Y,&r,p);
        BN_copy(&W,Z);
        karatsuba_mul(&r, &W,Z);
        modulo_red(&W,&r,p);
        karatsuba_mul(&r, &W,&W);
        modulo_red(&W,&r,p);
         while( m > 0 )
 		{
                 BN_copy(&A,X);
                 karatsuba_mul(&r, &A,X);
                 modulo_red(&A,&r,p);
                 karatsuba_mul(&r, &A,&three);
                 modulo_red(&A,&r,p);
                 BN_copy(&T1,&W);
                 karatsuba_mul(&r, &T1,a);
                 modulo_red(&T1,&r,p);
                 BN_mod_add(&A,&A,&T1,p);
                 BN_copy(&B,Y);
                 karatsuba_mul(&r, &B,Y);
                 modulo_red(&B,&r,p);
                 BN_copy(&C,&B);
                 karatsuba_mul(&r, &B,X);
                 modulo_red(&B,&r,p);
                 BN_copy(&T1,&B);
                 karatsuba_mul(&r, &T1,&two);
                 modulo_red(&T1,&r,p);
                 BN_copy(X,&A);
                 karatsuba_mul(&r, X,&A);
                 modulo_red(X,&r,p);
                 BN_mod_sub(X,X,&T1,p); /*****X*****/
                 karatsuba_mul(&r,Z,Y);
                 BN_init(Z);
                 modulo_red(Z,&r,p);
                 karatsuba_mul(&r, &C,&C);/******Z******/
                 modulo_red(&C,&r,p);
                 m = m - 1;
                 if( m > 0 )
			{
                          karatsuba_mul(&r, &W,&C);
                          modulo_red(&W,&r,p);
                        }
                 BN_mod_sub(&B,&B,X,p);
                 karatsuba_mul(&r, &A,&B);
                 modulo_red(&A,&r,p);
                 karatsuba_mul(&r, &A,&two);
                 modulo_red(&A,&r,p);
                 BN_mod_sub(Y,&A,&C,p); /***** Y *****/
                 
		}
               BN_inv_mod(&inv,&two,p);
               karatsuba_mul(&r,&inv,Y);
               modulo_red(Y,&r,p);
     
              return;     		
}

