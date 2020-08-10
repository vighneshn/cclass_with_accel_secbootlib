#ifndef __TYPES_H__
#define __TYPES_H__


#define N_BITS    521    /* Size of the Input */
#define WORD_SIZE  16           /* Machine dependent word size */
#define BN_BYTES (WORD_SIZE/8)
#if (N_BITS % WORD_SIZE)
#define MAX_DIGITS ((N_BITS/WORD_SIZE)+2)   /* Number of words */
#else
#define MAX_DIGITS ((N_BITS/WORD_SIZE)+1)
#endif

#define CIL    BN_BYTES                 /* chars in limb */
#define BIL    (CIL << 3)               /* bits  in limb  */
#define BIH    (CIL << 2)               /* half limb size */

typedef unsigned short word;       /* This needs to be set depending on the platform */

/* Structure of the multi-precision number */
typedef struct
{
	int sign;                      /* Value of +1 for positive number, -1 for negative number */
	word digits[MAX_DIGITS];
}bignum_t;


/* temporary multi-precision number to store product of two numbers */
typedef struct
{
	int sign;
	word muldigits[3*(MAX_DIGITS)];
} mulnum_t;


/* function prototypes */
int BN_hex2bn(bignum_t *bn, char *a);
void BN_bn2hex(bignum_t *a, char *p);
void BN_bn2hex2(mulnum_t *a, char *p);
void left_to_right_mul(bignum_t *x3,bignum_t *y3,bignum_t *k,bignum_t *A, bignum_t *P,bignum_t *x1,bignum_t *y1);

#endif
