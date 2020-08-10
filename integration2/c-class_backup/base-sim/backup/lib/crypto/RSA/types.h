#ifndef __TYPES_H__
#define __TYPES_H__


#define N_BITS     2048            /* Size of the Input */
#define WORD_SIZE  64             /* Machine dependent word size */
#define BN_BYTES (WORD_SIZE/8)
#if (N_BITS % WORD_SIZE)
#define MAX_DIGITS ((N_BITS/WORD_SIZE)+2)   /* Number of words */
#else
#define MAX_DIGITS ((N_BITS/WORD_SIZE)+1)
#endif

#define CIL    BN_BYTES                 /* chars in limb */
#define BIL    (CIL << 3)               /* bits  in limb  */
#define BIH    (CIL << 2)               /* half limb size */

typedef unsigned long long word;       /* This needs to be set depending on the platform */

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
	word muldigits[2*(MAX_DIGITS)];
} mulnum_t;


/* function prototypes */
void BN_init( bignum_t *X );
void BN_bin2bn(bignum_t *bn,unsigned char *ptr,int sign,int length);
int BN_bn2bin(bignum_t *bn,unsigned char *buf);
int BN_hex2bn(bignum_t *bn, char *a);
void BN_bn2hex(bignum_t *a, char *p);
void BN_bn2hex2(mulnum_t *a, char *p);
void BN_sub(bignum_t *r, bignum_t *a, bignum_t *b);
void BN_add(bignum_t *X, bignum_t *A, bignum_t *B);
int BN_compare(bignum_t *a, bignum_t *b);
void BN_mont_mul(bignum_t *A, bignum_t *B , bignum_t *N, bignum_t RR);
void BN_exp_mod( bignum_t *X, bignum_t *A, bignum_t *E, bignum_t *N, bignum_t RR);
void BN_gcd(bignum_t *result, bignum_t * X, bignum_t *Y);
void BN_inverse(bignum_t *X, bignum_t *A, bignum_t *N);
void rsaEncrypt(bignum_t *bn_cipher,bignum_t *bn_message, bignum_t *bn_e, bignum_t *bn_n, bignum_t RR);
void rsaDecrypt(bignum_t *bn_result,bignum_t *bn_cipher, bignum_t *bn_d, bignum_t *bn_n, bignum_t RR);
void rsaDecrypt_CRC(bignum_t *bn_result,bignum_t *bn_cipher,bignum_t *bn_dp,bignum_t *bn_dq,bignum_t *bn_qp,bignum_t *bn_p,bignum_t *bn_q, bignum_t *bn_n, bignum_t RR);
void karatsuba_mul(mulnum_t * r, bignum_t *a, bignum_t *b);
int BN_inv_mod( bignum_t *X, bignum_t *A, bignum_t *N, bignum_t RRP);

#endif
