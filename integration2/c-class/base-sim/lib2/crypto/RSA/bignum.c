/******************************************************************************
 * Department of Computer Science Engineering, IIT Madras
 *
 * bignum.c
 *
 * "Multi-precision Algorithms"
 *  C code
 *
 * January 02, 2016
 *
 * Authors : Sravan Salaka, IIT Madras; S Pawan Kumar, IIITDM Kancheepuram
 *****************************************************************************/

#include <stdio.h>
#include <string.h>

#include "types.h"

static char Hex[] = "0123456789ABCDEF";



/* XXX #define's like this may not always be a good idea if we want to
   optimize for memory (rather than performance. We should probably have
   both options... which can be selected depending on the processor configuration
*/
#define MULADDC_INIT                    \
{                                       \
	word s0, s1, b0, b1;            \
	word r0, r1, rx, ry;            \
	b0 = ( b << BIH ) >> BIH;       \
	b1 = ( b >> BIH );

#define MULADDC_CORE                    \
	s0 = ( *s << BIH ) >> BIH;      \
	s1 = ( *s >> BIH ); s++;        \
	rx = s0 * b1; r0 = s0 * b0;     \
	ry = s1 * b0; r1 = s1 * b1;     \
	r1 += ( rx >> BIH );            \
	r1 += ( ry >> BIH );            \
	rx <<= BIH; ry <<= BIH;         \
	r0 += rx; r1 += (r0 < rx);      \
	r0 += ry; r1 += (r0 < ry);      \
	r0 +=  c; r1 += (r0 <  c);      \
	r0 += *d; r1 += (r0 < *d);      \
	c = r1; *(d++) = r0;

#define MULADDC_STOP                    \
}


/* Initializes big num */
void BN_init( bignum_t *X )
{
    if( X == NULL )
        return;
    int i;
    X->sign = 1;
    for(i=0;i<MAX_DIGITS;i++)
	X->digits[i]=0;
}

void BN_bin2bn(bignum_t *bn,unsigned char *ptr,int sign,int length)
{
    unsigned char *temp = ptr+length-1;
    int i,j;
    word k=0;
    (*bn).sign=sign;
    for(i=0;i<length/BN_BYTES;++i){
        k=0;
        for(j=0;j<BN_BYTES;j++,temp--){
            k = k |(word) (*temp)<<(j*8);
        }
        (*bn).digits[i]=k;
    }
    k = 0;
    for(j=0;j<length - ((length/BN_BYTES) * BN_BYTES) ;j++,temp--)
    {
        k = k |(word) (*temp)<<(j*8);
    }
    (*bn).digits[i]=k;
}

int BN_bn2bin(bignum_t *bn,unsigned char *buf)
{
    int i, j, z = 0;
    unsigned char v;
	int z1=0;
        if(bn->sign==-1)
	  *(buf++)='-';
	for (i = MAX_DIGITS-1; i >= 0; i--) {
		for (j = WORD_SIZE - 8; j >= 0; j -= 8) {
			v = (unsigned char)(((bn->digits[i] >> j)) & 0xff);
			if (z || (v != 0)) {
				*(buf++) = v; 
				z = 1;
				z1++;
			}
		}
	}
	return z1;
}

/* Converts given hexa-decimal to big number */
int BN_hex2bn(bignum_t *bn, char *a)
{
	BN_init(bn);
	int z;

	word l = 0;
	int neg = 0, h, m, i, j, k, c;
	int num;

	if ((a == NULL) || (*a == '\0'))
		return (0);

	if (*a == '-') {
		neg = 1;
		a++;
	}
        if(neg==1)
         bn->sign=-1;

	for (i = 0; isxdigit((unsigned char)a[i]); i++) ;

	num = i + neg;
	if (bn == NULL)
		return (num);
	j = i;
	m = 0;
	h = 0;
	while (j > 0) {
		m = ((BN_BYTES * 2) <= j) ? (BN_BYTES * 2) : j;
		l = 0;
		for (;;) {
			c = a[j - m];
			if ((c >= '0') && (c <= '9'))
				k = c - '0';
			else if ((c >= 'a') && (c <= 'f'))
				k = c - 'a' + 10;
			else if ((c >= 'A') && (c <= 'F'))
				k = c - 'A' + 10;
			else
				k = 0;
			l = (l << 4) | k;

			if (--m <= 0) {
				(*bn).digits[h++] = l;
				break;
			}
		}
		j -= (BN_BYTES * 2);
	}
	/* int z1;
	   for(z1=0;z1<MAX_DIGITS;z1++)
	   printf("%zd\t",ret.digits[z1]);
	   printf("\n");
	   printf("\n");   */

	return (num);
}

/* Used to display the output. Converts big number to hexa-decimal format */
void BN_bn2hex(bignum_t *a, char *p)
{
	int i, j, v, z = 0;
	int z1;
        if(a->sign==-1)
	  *(p++)='-';
	for (i = MAX_DIGITS-1; i >= 0; i--) {
		for (j = WORD_SIZE - 8; j >= 0; j -= 8) {
			v = ((int)(a->digits[i] >> (long)j)) & 0xff;
			if (z || (v != 0)) {
				*(p++) = Hex[v >> 4];
				*(p++) = Hex[v & 0x0f];
				z = 1;
			}
		}
	}
	*p='\0';
}

/*
 *  Used to display the output for product of two numbers
 */
void BN_bn2hex2(mulnum_t *a, char* p)
{
	int i, j, v, z = 0;
	int z1;

	if(a->sign==-1)
		*(p++)='-';
	for (i = (2*MAX_DIGITS)-1; i >= 0; i--) {
		for (j = WORD_SIZE - 8; j >= 0; j -= 8) {
			v = ((int)(a->muldigits[i] >> (long)j)) & 0xff;
			if (z || (v != 0)) {
				*(p++) = Hex[v >> 4];
				*(p++) = Hex[v & 0x0f];
				z = 1;
			}
		}
	}
	*p='\0';
}


/*
 * Compare unsigned values X and Y.
 * If X == Y return 0
 * If X < Y return -1
 * If X > Y return 1
 */
static int BN_cmp_abs( bignum_t *X, bignum_t *Y )
{
    size_t i, j;

    for( i = MAX_DIGITS; i > 0; i-- )
        if( X->digits[i - 1] != 0 )
            break;

    for( j = MAX_DIGITS; j > 0; j-- )
        if( Y->digits[j - 1] != 0 )
            break;

    if( i == 0 && j == 0 )
        return( 0 );

    if( i > j ) return(  1 );
    if( j > i ) return( -1 );

    for( ; i > 0; i-- )
    {
        if( X->digits[i - 1] > Y->digits[i - 1] ) return(  1 );
        if( X->digits[i - 1] < Y->digits[i - 1] ) return( -1 );
    }

    return( 0 );
}


/******************************************************************************
 *
 * Bignum Comparison
 * Inputs: Two big numbers X and Y
 * Output: 0 if X==Y, 1 if X>Y , -1 if X<Y.
 *
 ******************************************************************************/
int BN_compare( bignum_t *X, bignum_t *Y )
{
    size_t i, j;

    for( i = MAX_DIGITS; i > 0; i-- )
        if( X->digits[i - 1] != 0 )
            break;

    for( j = MAX_DIGITS; j > 0; j-- )
        if( Y->digits[j - 1] != 0 )
            break;

    if( i == 0 && j == 0 )
        return( 0 );

    if( i > j ) return(  X->sign );
    if( j > i ) return( -Y->sign );

    if( X->sign > 0 && Y->sign < 0 ) return(  1 );
    if( Y->sign > 0 && X->sign < 0 ) return( -1 );

    for( ; i > 0; i-- )
    {
        if( X->digits[i - 1] > Y->digits[i - 1] ) return(  X->sign );
        if( X->digits[i - 1] < Y->digits[i - 1] ) return( -X->sign );
    }

    return( 0 );
}

/*
 * Comparison of big number with integer
 */
static int BN_cmp_int( bignum_t *X, int z )
{
    bignum_t Y;
    BN_init(&Y);
    Y.digits[0]  = ( z < 0 ) ? -z : z;
    Y.sign = ( z < 0 ) ? -1 : 1;

    return( BN_compare( X, &Y ) );
}


/*
 * Copy the contents of Y into X
 */
static int BN_copy( bignum_t *X, bignum_t *Y )
{
    int ret;
    size_t i;
    BN_init(X);
    for(i=0;i<MAX_DIGITS;i++)
	X->digits[i]=Y->digits[i];

    X->sign = Y->sign;
}


/*
 * Unsigned addition: X = |A| + |B|
 */
static int BN_add_abs( bignum_t *X, bignum_t *A, bignum_t *B )
{
    int ret;
    size_t i, j;
    word *o, *p, c;

    if( X != A )
        BN_copy( X, A );

    /*
     * X should always be positive as a result of unsigned additions.
     */
    X->sign = 1;

    for( j = MAX_DIGITS; j > 0; j-- )
        if( B->digits[j - 1] != 0 )
            break;

    o = B->digits; p = X->digits; c = 0;

    for( i = 0; i < j; i++, o++, p++ )
    {
        *p +=  c; c  = ( *p <  c );
        *p += *o; c += ( *p < *o );
    }

    while( c != 0 )
    {
        if( i >= MAX_DIGITS )
        {
            p = X->digits + i;
        }

        *p += c; c = ( *p < c ); i++; p++;
    }
}

/*
 * Helper for BN_sub subtraction
 */
static void BN_sub_hlp( size_t n, word *s, word *d )
{
	size_t i;
	word c, z;

	for( i = c = 0; i < n; i++, s++, d++ )
	{
		z = ( *d <  c );     *d -=  c;
		c = ( *d < *s ) + z; *d -= *s;
	}

	while( c != 0 )
	{
		z = ( *d < c ); *d -= c;
		c = z; i++; d++;
	}
}

/*
 * Unsigned subtraction: X = |A| - |B|  (HAC 14.9)
 */
static int BN_sub_abs( bignum_t *X, bignum_t *A, bignum_t *B )
{
    bignum_t TB;
    int ret;
    size_t n;

    BN_init( &TB );

    if( X == B )
    {
       BN_copy( &TB, B );
        B = &TB;
    }

    if( X != A )
        BN_copy( X, A );

    /*
     * X should always be positive as a result of unsigned subtractions.
     */
    X->sign = 1;

    ret = 0;

    for( n =MAX_DIGITS; n > 0; n-- )
        if( B->digits[n - 1] != 0 )
            break;

    BN_sub_hlp( n, B->digits, X->digits );
}



/******************************************************************************
 *
 * Bignum Subtraction
 *
 * Inputs: Two big numbers A and B
 *
 * Output: big number X where X=A-B
 *
 ******************************************************************************/
void BN_sub( bignum_t *X, bignum_t *A, bignum_t *B )
{
    int ret, sign = A->sign;

    if( A->sign * B->sign > 0 )
    {
        if( BN_cmp_abs( A, B ) >= 0 )
        {
            BN_sub_abs( X, A, B );
            X->sign =  sign;
        }
        else
        {
            BN_sub_abs( X, B, A );
            X->sign = -sign;
        }
    }
    else
    {
        BN_add_abs( X, A, B );
        X->sign = sign;
    }
}


/******************************************************************************
 * Bignum Addition
 * Inputs: Two big numbers A and B
 * Output: big number X where X=A+B
 ******************************************************************************/
void BN_add( bignum_t *X, bignum_t *A, bignum_t *B )
{
    int ret, s = A->sign;

    if( A->sign * B->sign < 0 )
    {
        if( BN_cmp_abs( A, B ) >= 0 )
        {
            BN_sub_abs( X, A, B );
            X->sign =  s;
        }
        else
        {
            BN_sub_abs( X, B, A );
            X->sign = -s;
        }
    }
    else
    {
        BN_add_abs( X, A, B );
        X->sign = s;
    }

}



/******************************************************************************
 * Modular Addition
 *
 * Inputs: Three big numbers a,b and m
 * Output: big number r where r=(a+b) mod m
 * 'a' and 'b' should be non-negative and less than m 
 *
 ******************************************************************************/
static void BN_mod_add(bignum_t *r, bignum_t *a, bignum_t *b,bignum_t *m) 
{
	BN_add(r, a, b);
	if (BN_compare(r, m) >= 0)
		BN_sub(r, r, m);
}



/******************************************************************************
 * Modular Subtraction
 * Inputs: Three big numbers a,b and m
 * Output: big number r where r=(a-b) mod m
 * 'a' and 'b' should be non-negative and less than m 
 * NOTE: a and b should be non-negative and less than m 
 ******************************************************************************/
static void BN_mod_sub(bignum_t *r, bignum_t *a, bignum_t *b,bignum_t *m) 
{
	if (BN_compare(a, b) < 0)
	{
		BN_sub(r,b,a);
		BN_sub(r,m,r);
	}
	else
	{
		BN_sub(r,a,b);
	}
}



/*
 * Set value from integer
 */
static int BN_lset( bignum_t *X, int z )
{
    X->digits[0] = ( z < 0 ) ? -z : z;
    X->sign    = ( z < 0 ) ? -1 : 1;
}

/*
 * Helper function used in Montgomery multiplication.
*/
static void BN_mul_hlp( size_t i, word *s, word *d, word b )
{
	word c = 0, t = 0;
	for( ; i >= 16; i -= 16 )
	{
		MULADDC_INIT
			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE

			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE
			MULADDC_STOP
	}

	for( ; i >= 8; i -= 8 )
	{
		MULADDC_INIT
			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE

			MULADDC_CORE   MULADDC_CORE
			MULADDC_CORE   MULADDC_CORE
			MULADDC_STOP
	}

	for( ; i > 0; i-- )
	{
		MULADDC_INIT
			MULADDC_CORE
			MULADDC_STOP
	}

	t++;

	do {
		*d += c; c = ( *d < c ); d++;
	}
	while( c != 0 );
}


/*
 *   Initialization of Montgomery 
 */
static void BN_montg_init( word *mm, bignum_t *N )
{
	word x, m0 = N->digits[0];
	unsigned int i;

	x  = m0;
	x += (( m0 + 2 ) & 4 ) << 1;

	for( i = BIL; i >= 8; i /= 2 )
		x *= ( 2 - ( m0 * x ) );

	*mm = ~x + 1;
}



/* Helper function for Montgomery multiplication 
 *
 */
static void BN_montmul( bignum_t *A, bignum_t *B, bignum_t *N, word mm,
		mulnum_t *T )
{
	size_t i, n, m;
	word u0, u1, *d;

	memset( T->muldigits, 0, (2*(MAX_DIGITS)) * CIL );

	d = T->muldigits;
	n = MAX_DIGITS-1;
	m = MAX_DIGITS-1;

	for( i = 0; i < n; i++ )
	{
		/*
		 * T = (T + u0*B + u1*N) / 2^BIL
		 */
		u0 = A->digits[i];
		u1 = ( d[0] + u0 * B->digits[0] ) * mm;

		BN_mul_hlp( m, B->digits, d, u0 );
		BN_mul_hlp( n, N->digits, d, u1 );

		*d++ = u0; d[n+1] = 0;
	}

	memcpy( A->digits, d, (n+1) * CIL );

	if( BN_cmp_abs( A, N ) >= 0 )
	{
		BN_sub_hlp( n, N->digits, A->digits );
	}
	else
	{
		BN_sub_hlp( n, A->digits, T->muldigits );
	}
}


/*
 * Montgomery reduction: A = A * R^-1 mod N
 */
static void BN_montred( bignum_t *A, bignum_t *N, word mm, mulnum_t *T )
{
	char onenum[]="1";
	bignum_t U;
	memset( U.digits, 0, MAX_DIGITS * CIL );
	U.digits[0]=1;
	BN_montmul( A, &U, N, mm, T );
}

/*
 * Return the number of most significant bit
 */
static size_t BN_msb(bignum_t *X )
{
	size_t i, j;

	for( i = MAX_DIGITS-2; i > 0; i-- )
		if( X->digits[i] != 0 )
			break;

	for( j = BIL; j > 0; j-- )
		if( ( ( X->digits[i] >> ( j - 1 ) ) & 1 ) != 0 )
			break;

	return( ( i * BIL ) + j );
}

/******************************************************************************
 *
 * Montgomery Modular Multiplication
 *
 * Inputs: Three big numbers A,B and N. Also precomputed value of R^2 mod N as RR
 *
 * Output: A=(A*B) mod N
 *
 ******************************************************************************/

void BN_mont_mul(bignum_t *A, bignum_t *B , bignum_t *N, bignum_t RR)
{
	word mm; char* p;
	BN_montg_init( &mm, N );
	mulnum_t T;
	BN_montmul( A, B, N, mm, &T );
	BN_montmul( A, &RR, N, mm, &T);
	A->sign=1;
}

/*
 * Right-shift: X >>= count
 *
 */
int BN_shift_right( bignum_t *X, size_t count)
{
    size_t i, v0, v1;
    word r0 = 0, r1;

    v0 = count /  BIL;
    v1 = count & (BIL - 1);

    if( v0 > MAX_DIGITS || ( v0 == MAX_DIGITS && v1 > 0 ) )
        return BN_lset( X, 0 );

    /*
     * shift by count / limb_size
     */
    if( v0 > 0 )
    {
        for( i = 0; i < MAX_DIGITS - v0; i++ )
            X->digits[i] = X->digits[i + v0];

        for( ; i < MAX_DIGITS; i++ )
            X->digits[i] = 0;
    }

    /*
     * shift by count % limb_size
     */
    if( v1 > 0 )
    {
        for( i = MAX_DIGITS; i > 0; i-- )
        {
            r1 = X->digits[i - 1] << (BIL - v1);
            X->digits[i - 1] >>= v1;
            X->digits[i - 1] |= r0;
            r0 = r1;
        }
    }

    return( 0 );
}

/*
 * Left-shift: X <<= 1
 */
static void BN_shift_left( bignum_t *X )
{
 int i,j;
    word r0 = 0, r1;
     for(j=MAX_DIGITS-1;j>=0;j--)
         if(X->digits[j]!=0)
            break;
      
        for( i = 0; i <=j; i++ )
        {
            r1 = X->digits[i] >> (BIL - 1);
            X->digits[i] <<= 1;
            X->digits[i] |= r0;
            r0 = r1;
        }
}

/* 
 * Compares X with zero 
 *
 */
static int BN_compare_zero(bignum_t* X)
{
    int i=0;
    for(i=0; i<MAX_DIGITS; i++)
    {
        if(X->digits[i]!=0)
            return 0;
    }
    return 1;
}

/*************************************************************** 
    GCD and Extended Euclidean Algorithm for inverse computation 
 ***************************************************************/
/*
 * The function computes the GCD of P and Q and returns the result in result 
 * It uses the Euclidean Algorithm
 */
void BN_gcd(bignum_t *result, bignum_t * P, bignum_t *Q)
{
  bignum_t bn_one,t,bn_zero, X, Y;
  BN_init(&bn_one);
  BN_init(&bn_zero);
  BN_init(&X);
  BN_init(&Y);
  BN_copy(&X,P);
  BN_copy(&Y,Q);
    char one []="1";
  char zero []="0";
BN_hex2bn(&bn_one, one);
BN_hex2bn(&bn_zero, zero);
int count=0;
  while((X.digits[0]&1)==0 && (Y.digits[0]&1)==0)
	{
		BN_shift_right(&X, 1);
		BN_shift_right(&Y, 1);
                count++;
	}
  while(BN_compare_zero(&X)!=1)
  {
     while((X.digits[0]&1)==0)
		BN_shift_right(&X, 1);
      while((Y.digits[0]&1)==0)
		BN_shift_right(&Y, 1);
      if(BN_compare(&X,&Y)>=0)
	{
	  BN_sub(&t,&X,&Y);
	  BN_shift_right(&t, 1);
	}
	else
	{
  	   BN_sub(&t,&Y,&X);
	   BN_shift_right(&t, 1);
	}
     if(BN_compare(&X,&Y)>=0)
          BN_copy(&X,&t);
	else
	 BN_copy(&Y,&t);
  }
int i;
   for(i=0;i<count;i++)
  BN_shift_left(&Y);
   BN_copy(result,&Y);
} 



/*
 * Modular inverse: X = A^-1 mod N  (HAC 14.61 / 14.64)
 */

void BN_inverse(bignum_t *X, bignum_t *A, bignum_t *N)
{
 bignum_t RRP;  /* Precompute R^2 mod N */
 BN_init( &RRP);
  char RRPstring[]="71F44F8193A25D6FCCAA0E39043943D8F743B17EA185624A1383B93FC4E51D537A04E3E69381D87B8BFC8A7624ABCB0A632875358A45957E9254A000F056F07F";
  BN_hex2bn(&RRP,RRPstring);
  BN_inv_mod( X, A, N, RRP);
}

int BN_inv_mod( bignum_t *X, bignum_t *A, bignum_t *N, bignum_t RRP)
{
    int ret;
    bignum_t G, TA, TU, U1, U2, TB, TV, V1, V2,bn_one, bn_zero;

    BN_init( &TA ); BN_init( &TU ); BN_init( &U1 ); BN_init( &U2 );
    BN_init( &G ); BN_init( &TB ); BN_init( &TV );
    BN_init( &V1 ); BN_init( &V2 );BN_init( &bn_one);BN_init( &bn_zero);

     char one []="1";
  BN_hex2bn(&bn_one,one);
     BN_copy(&TA,A);
     BN_mont_mul(&TA,&bn_one,N,RRP);
     BN_copy( &TU, &TA );
     BN_copy( &TB, N );
    BN_copy( &TV, N );

    BN_lset( &U1, 1 );
    BN_lset( &U2, 0 );
    BN_lset( &V1, 0 );
    BN_lset( &V2, 1 );

    do
    {
        while( ( TU.digits[0] & 1 ) == 0 )
        {
             BN_shift_right( &TU, 1);

            if( ( U1.digits[0] & 1 ) != 0 || ( U2.digits[0] & 1 ) != 0 )
            {
                BN_add( &U1, &U1, &TB );
                BN_sub( &U2, &U2, &TA );
            }

             BN_shift_right( &U1, 1);
             BN_shift_right( &U2, 1);
        }

        while( ( TV.digits[0] & 1 ) == 0 )
        {
              BN_shift_right( &TV, 1);

            if( ( V1.digits[0] & 1 ) != 0 || ( V2.digits[0] & 1 ) != 0 )
            {
                BN_add( &V1, &V1, &TB );
                BN_sub( &V2, &V2, &TA );
            }

            BN_shift_right( &V1, 1);
            BN_shift_right( &V2, 1);
        }

        if( BN_compare( &TU, &TV ) >= 0 )
        {
            BN_sub( &TU, &TU, &TV );
            BN_sub( &U1, &U1, &V1 );
            BN_sub( &U2, &U2, &V2 );
        }
        else
        {
             BN_sub( &TV, &TV, &TU );
            BN_sub( &V1, &V1, &U1 );
            BN_sub( &V2, &V2, &U2 );
        }
    }
    while(BN_cmp_int( &TU, 0) != 0 );

    while( BN_cmp_int( &V1, 0) < 0 )
        BN_add( &V1, &V1, N );

    while(BN_compare( &V1, N ) >= 0 )
       BN_sub( &V1, &V1, N ); 

    BN_copy( X, &V1 );


    return( ret );
}



/******************************************************************************
 *
 * Montgomery Modular Exponentiation
 *
 * Inputs: Three big numbers A,E and N. Also precomputed value of R^2 mod N as RR
 *
 * Output: X where X=(A^E) mod N
 *
 ******************************************************************************/

void BN_exp_mod( bignum_t *X, bignum_t *A, bignum_t *E, bignum_t *N, bignum_t RR)
{
	size_t wbits, wsize, one = 1;
	size_t i, j, nblimbs;
	size_t bufsize, nbits;
	word ei, mm, state;
	bignum_t W[ 2 << 6], Apos;
	BN_init(&Apos);
	mulnum_t T;
	int neg;
	BN_montg_init( &mm, N );
	/*
	 * Init temps and window size
	 */
	memset( W, 0, sizeof( W ) );
	memset( Apos.digits, 0, MAX_DIGITS * CIL );

	i = BN_msb( E );


	wsize = ( i > 671 ) ? 6 : ( i > 239 ) ? 5 :
		( i >  79 ) ? 4 : ( i >  23 ) ? 3 : 1;

	if( wsize > 6)
		wsize = 6;

    neg = ( A->sign == -1 );
      if( neg )
    {
        BN_copy( &Apos, A );
        Apos.sign = 1;
        A = &Apos;
    }

	BN_copy( &W[1], A );

	

	BN_montmul( &W[1], &RR, N, mm, &T );

	/*int z1;
	  for(z1=0;z1<MAX_DIGITS;z1++)
	  printf("%ld\t",W[1].digits[z1]);
	  printf("\n");
	  printf("\n");  */



	/*
	 * X = R^2 * R^-1 mod N = R mod N
	 */
	BN_copy( X, &RR );

	BN_montred( X, N, mm, &T );


	/*char* test;
	  test= BN_bn2hex(X);
	  printf("%s\n",test); */


	if( wsize > 1 )
	{
		/*
		 * W[1 << (wsize - 1)] = W[1] ^ (wsize - 1)
		 */
		j =  one << ( wsize - 1 );
		BN_copy( &W[j], &W[1]    );

		for( i = 0; i < wsize - 1; i++ )
			BN_montmul( &W[j], &W[j], N, mm, &T );

		/*
		 * W[i] = W[i - 1] * W[1]
		 */
		for( i = j + 1; i < ( one << wsize ); i++ )
		{
			BN_copy( &W[i], &W[i - 1] );

			BN_montmul( &W[i], &W[1], N, mm, &T );
		}
	}
	nblimbs = MAX_DIGITS-1;
	bufsize = 0;
	nbits   = 0;
	wbits   = 0;
	state   = 0;
	while( 1 )
	{
		if( bufsize == 0 )
		{
			if( nblimbs == 0 )
				break;

			nblimbs--;

			bufsize = sizeof( word ) << 3;
		}

		bufsize--;

		ei = (E->digits[nblimbs] >> bufsize) & 1;

		/*
		 * skip leading 0s
		 */
		if( ei == 0 && state == 0 )
			continue;

		if( ei == 0 && state == 1 )
		{
			/*
			 * out of window, square X
			 */
			BN_montmul( X, X, N, mm, &T );
			continue;
		}

		/*
		 * add ei to current window
		 */
		state = 2;

		nbits++;
		wbits |= ( ei << ( wsize - nbits ) );

		if( nbits == wsize )
		{
			/*
			 * X = X^wsize R^-1 mod N
			 */
			for( i = 0; i < wsize; i++ )
				BN_montmul( X, X, N, mm, &T );

			/*
			 * X = X * W[wbits] R^-1 mod N
			 */
			BN_montmul( X, &W[wbits], N, mm, &T );

			state--;
			nbits = 0;
			wbits = 0;
		}
	}
	/*
	 * process the remaining bits
	 */
	for( i = 0; i < nbits; i++ )
	{
		BN_montmul( X, X, N, mm, &T );

		wbits <<= 1;

		if( ( wbits & ( one << wsize ) ) != 0 )
			BN_montmul( X, &W[1], N, mm, &T );
	}

	/*
	 * X = A^E * R * R^-1 mod N = A^E mod N
	 */
	BN_montred( X, N, mm, &T );
     if( neg )
    {
        X->sign = -1;
        BN_add( X, N, X );
    }
}


