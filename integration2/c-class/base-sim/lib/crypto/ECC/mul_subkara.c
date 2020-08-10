/****************************************************************************************
 *  Department of Computer Science Engineering, IIT Madras
 *
 * mul_subkara.c
 *
 * "Multiplication Algorithms"
 *  C code for subtractive Karatsuba Multiplication
 *
 * December, 2016
 *
 * NOTICE
 * This file contains code for school-book multiplication and subtractive Karatsuba Multiplication.
 *
 ***************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "types.h"

#  define BN_BITS4        (WORD_SIZE/2)
#  define BN_MASK1        (0xffffffffffffffffLL)
#  define BN_MASK1l       (0xffffffffL)
#  define BN_MASK1h       (0xffffffff00000000LL)
#  define BN_MASK2        (0xffffffffLL)
#  define BN_MASK2l       (0xffffL)
#  define BN_MASK2h       (0xffff0000LL)
#  define BN_MASK3l       (0xffL)
#  define BN_MASK3h       (0xff00LL)
#  define BN_MASK4l       (0xfL)
#  define BN_MASK4h       (0xf0LL)
/* Use BN_MASK3l  for 16-bit word size */
/* Use BN_MASK4l for 8-bit word size */
#  define LBITS(a)        ((a)&BN_MASK3l)
#  define HBITS(a)        (((a)>>BN_BITS4)&BN_MASK3l)
#  define L2HBITS(a)      (((a)<<BN_BITS4))


#  define mul64(l,h,bl,bh) \
        { \
        word m,m1,lt,ht; \
 \
        lt=l; \
        ht=h; \
        m =(bh)*(lt); \
        lt=(bl)*(lt); \
        m1=(bl)*(ht); \
        ht =(bh)*(ht); \
        m=(m+m1); if (m < m1) ht+=L2HBITS((word)1); \
        ht+=HBITS(m); \
        m1=L2HBITS(m); \
        lt=(lt+m1); if (lt < m1) ht++; \
        (l)=lt; \
        (h)=ht; \
        }

#  define mul_add(r,a,bl,bh,c) { \
        word l,h; \
 \
        h= (a); \
        l=LBITS(h); \
        h=HBITS(h); \
        mul64(l,h,(bl),(bh)); \
 \
        /* non-multiply part */ \
        l=(l+(c)); if (l < (c)) h++; \
        (c)=(r); \
        l=(l+(c)); if (l < (c)) h++; \
        (c)=h; \
        (r)=l; \
        }

#  define mul(r,a,bl,bh,c) { \
        word l,h; \
 \
        h= (a); \
        l=LBITS(h); \
        h=HBITS(h); \
        mul64(l,h,(bl),(bh)); \
 \
        /* non-multiply part */ \
        l+=(c); if ((l) < (c)) h++; \
        (c)=h; \
        (r)=l; \
        }
/* Comparing words */
static int bn_cmp_words(word *a,word *b, int n)
{
    int i;
    word aa, bb;

    aa = a[n - 1];
    bb = b[n - 1];
    if (aa != bb)
        return ((aa > bb) ? 1 : -1);
    for (i = n - 2; i >= 0; i--) {
        aa = a[i];
        bb = b[i];
        if (aa != bb)
            return ((aa > bb) ? 1 : -1);
    }
    return (0);
}

/* Subtraction of words */
static word bn_sub_words(word *r, word *a, word *b, int n)
{
 word t1, t2;
    int c = 0;
  while (n) {
        t1 = a[0];
        t2 = b[0];
        r[0] = (t1 - t2 - c);
        if (t1 != t2)
            c = (t1 < t2);
        a++;
        b++;
        r++;
        n--;
    }
    return (c);
}


/* Addition of words */
static word bn_add_words(word *r, word *a, word *b , int n)
{

word c, l, t;
c=0;
 while (n) {
        t = *a;
        t = (t + c);
        c = (t < c);
        l = (t + *b);
        c += (l < t);
        *r = l;
        a++;
        b++;
        r++;
        n--;
    }
    return ((word)c);
}

/* Multiplication of words */
static word bn_mul_words(word *rp, word *ap, int num, word w)
{
    word carry = 0;
    word bl, bh;

    if (num <= 0)
        return ((word)0);

    bl = LBITS(w);
    bh = HBITS(w);
    while (num) {
        mul(rp[0], ap[0], bl, bh, carry);
        ap++;
        rp++;
        num--;
    }
    return (carry);
}

/* Used for multiply and then addition of words */
static word bn_mul_add_words(word *rp, word *ap, int num,word w)
{
    word c = 0;
    word bl, bh;

    if (num <= 0)
        return ((word)0);

    bl = LBITS(w);
    bh = HBITS(w);

    while (num) {
        mul_add(rp[0], ap[0], bl, bh, c);
        ap++;
        rp++;
        num--;
    }
    return (c);
}

/******************************************************************************
 *
 * School-Book Multiplication
 *
 * Inputs: Two big numbers a and b
 *
 * Output: big number r where r=a*b
 *
 ******************************************************************************/
static void bn_mul_normal(word *r, word *a, int na, word *b, int nb)
	{
	word *rr;
	if (na < nb)
		{
		int itmp;
		word *ltmp;

		itmp=na; na=nb; nb=itmp;
		ltmp=a;   a=b;   b=ltmp;

		}
	rr= &(r[na]);
	rr[0]=bn_mul_words(r,a,na,b[0]);

	for (;;)
		{
		if (--nb <= 0) return;
		rr[1]=bn_mul_add_words(&(r[1]),a,na,b[1]);
		if (--nb <= 0) return;
		rr[2]=bn_mul_add_words(&(r[2]),a,na,b[2]);
		if (--nb <= 0) return;
		rr[3]=bn_mul_add_words(&(r[3]),a,na,b[3]);
		if (--nb <= 0) return;
		rr[4]=bn_mul_add_words(&(r[4]),a,na,b[4]);
		rr+=4;
		r+=4;
		b+=4;
		}
	}

/* Helper function for Karatsuba Multiplication Algorithm */
static void bn_mul_recursive(word *r, word *a, word *b,int n2, word *t)
	{
	int n=n2/2;
	unsigned int neg,zero,sign=0;
	word ln,lo,*p;
        int c1,c2;
	if (n2 < 16)
		{
		bn_mul_normal(r,a,n2,b,n2);
		return;
		}
	/* r=(a[0]-a[1])*(b[1]-b[0]) */
	c1=bn_cmp_words(a,&(a[n]),n);
        
	c2=bn_cmp_words(&(b[n]),b,n);

	zero=neg=0;

	switch (c1*3+c2)
		{
	case -4:
                sign = 1;
		bn_sub_words(t,      &(a[n]),a,      n); /* - */
		bn_sub_words(&(t[n]),b,      &(b[n]),n); /* - */
		break;
	case -3:
		zero=1;
		break;
	case -2:
		bn_sub_words(t,      &(a[n]),a,      n); /* - */
		bn_sub_words(&(t[n]),&(b[n]),b,      n); /* + */
		neg=1;
		break;
	case -1:zero=1;
		break;
	case 0: zero=1;
		break;
	case 1:
		zero=1;
		break;
	case 2: 
		bn_sub_words(t,      a,      &(a[n]),n); /* + */
		bn_sub_words(&(t[n]),b,      &(b[n]),n); /* - */
		
		break;
	case 3:
		zero=1;
		break;
	case 4:
                sign = 1;
		bn_sub_words(t,      a,      &(a[n]),n);
		bn_sub_words(&(t[n]),&(b[n]),b,      n);
		break;
		}
		p= &(t[n2*2]);
                if (!zero)
                       {
			bn_mul_recursive(&(t[n2]),t,&(t[n]),n,p);
          
                       }
		else
                       {
			memset(&(t[n2]),0,n2*sizeof(word));
                       }
		bn_mul_recursive(r,a,b,n,p);
		bn_mul_recursive(&(r[n2]),&(a[n]),&(b[n]),n,p);
	       /* t[32] holds (a[0]-a[1])*(b[1]-b[0])
	        * r[0] holds (a[0]*b[0])
	        * r[32] holds (a[1]*b[1])
	        */  
                c1 = 0; int m1 = n2/2,c=0;
	        c=(int)(bn_add_words(t,r,&(r[n2]),n2));

                /*******check whether to perform addition or substraction by t[n2]******/
                	if(sign == 1)
                	 {
	
		            c+=(int)(bn_add_words(&(t[n2]),t,&t[n2],n2));

                 	 }	
                 	else
                  	 {

                   	    c-=(int)(bn_sub_words(&(t[n2]),t,&t[n2],n2));

                  	 }
          
           	c+=(int)(bn_add_words(r+m1,&(t[n2]),r+m1,n2));
                /**********toggle the carry*********/
            	if (c)
		{
			p= &(r[n2+m1]);
			lo= *p;
			ln=(lo+c);
			*p=ln;
			if (ln < (word)c)
				{
				do	{
					p++;
					lo= *p;
					ln=(lo+1);
					*p=ln;
					} while (ln == 0);
				}
		}
          
	}



/******************************************************************************
 *
 * Karatsuba Multiplication
 *
 * Inputs: Two big numbers a and b
 *
 * Output: big number r where r=a*b
 *
 ******************************************************************************/
void karatsuba_mul(mulnum_t *r, bignum_t *a, bignum_t *b)
{
int n=MAX_DIGITS-1;
mulnum_t temp;
BN_mulinit(&temp);
bn_mul_recursive(r->muldigits, a->digits, b->digits, n, temp.muldigits);
}
