/******************************************************************************
 * Department of Computer Science Engineering, IIT Madras
 *
 * rsa.c
 *
 * "The 1024-bit RSA Implementation"
 *  C code
 *
 * January 02, 2016
 *
 * Reference : https://en.wikipedia.org/wiki/RSA_(cryptosystem)
 *
 *****************************************************************************/

#include "types.h"


/*********************************************************************************
 * RSA Encryption
 *
 * Inputs: Plain text as bn_message, Public exponent bn_e, modulus number N as bn_n. 
 *         Also R^2 mod N is precomputed and given as RR
 *
 * Output: cipher=(message)^e mod N
 * 
 *********************************************************************************/

#include <stdint.h>
#define RSA_LEN (N_BITS/64) 

/*

void rsaSignV1_5(unsigned char *cipher, void *message,bignum_t *bn_e,bignum_t *bn_n,bignum_t RR)
{
    uint64_t padded_message[RSA_LEN];
    uint64_t mod_message[4],*temp=message;
    int i;
    for(i=0;i<4;++i)
        mod_message[i] = temp[3-i];
    pad_v1_5(padded_message,mod_message,4,0);
    bignum_t bn_message,bn_cipher; 

    
    
}

*/

void rsaEncrypt(bignum_t *bn_cipher, bignum_t *bn_message, bignum_t *bn_e, bignum_t *bn_n, bignum_t RR)
{
	BN_exp_mod(bn_cipher,bn_message,bn_e,bn_n, RR);
}



/*********************************************************************************
 * RSA Decryption (with out CRT)
 *
 * Inputs: cipher text as bn_cipher, private exponent bn_d, modulus number N as bn_n. 
 *         Also R^2 mod N is precomputed and given as RR
 *
 * Output: message=(cipher)^d mod N
 *
 *********************************************************************************/
void rsaDecrypt(bignum_t *bn_result,bignum_t *bn_cipher, bignum_t *bn_d, bignum_t *bn_n, bignum_t RR)
{
	BN_exp_mod(bn_result,bn_cipher,bn_d,bn_n, RR);
}


/*********************************************************************************
 * RSA Decryption with Chinese Remainder Theorem
 *
 * Inputs: cipher text as bn_cipher, private exponent bn_d, modulus number N as bn_n. 
 *         Also R^2 mod N is precomputed and given as RR
 *
 * Output: message=(cipher)^d mod N
 *********************************************************************************/
static void precompute(bignum_t *RRP, bignum_t *RRQ, bignum_t *bn_p, bignum_t *bn_q)
{
    /*
	 * Precompute R^2 mod P where R is base^MAX_DIGITS.
	 */
	char RRPstring
		[]="71F44F8193A25D6FCCAA0E39043943D8F743B17EA185624A1383B93FC4E51D537A04E3E69381D87B8BFC8A7624ABCB0A632875358A45957E9254A000F056F07F";
	/*
	 * Precompute R^2 mod Q 
	 */
	char RRQstring
		[]="7291A5E57E56A5CFB11229C83DE404224CDFBE98EEBA49CB658B1749179C59EF509052D6275E89A12F38C5E9FFD67B18C4B9F491942FF808737DB56CEBC0FF1A";

      BN_hex2bn(RRP, RRPstring);
	BN_hex2bn(RRQ, RRQstring);
}

void rsaDecrypt_CRC(bignum_t *bn_result,bignum_t *bn_cipher,bignum_t *bn_dp,bignum_t *bn_dq,bignum_t *bn_qp,bignum_t *bn_p,bignum_t *bn_q, bignum_t *bn_n, bignum_t RR)
{
	
	bignum_t bn_t1,bn_t2,bn_temp,bn_t, RRP,RRQ;
        
        precompute(&RRP, &RRQ,bn_p,bn_q);
	
	/*
	 *  T1= (cipher)^dp mod P
	 */
	BN_exp_mod(&bn_t1,bn_cipher,bn_dp,bn_p, RRP);
	/*
	 *  T2= (cipher)^dq mod Q
	 */
	BN_exp_mod(&bn_t2,bn_cipher,bn_dq,bn_q, RRQ);
	/*
	 *  T= (T1-T2)*qp mod P
	 */
	BN_sub(&bn_t, &bn_t1, &bn_t2);
	BN_mont_mul(&bn_t, bn_qp,bn_p,RRP);
	/*
	 *  result=T2+T*Q
	 */
	BN_mont_mul(&bn_t,bn_q,bn_n,RR);
	BN_add(bn_result,&bn_t2,&bn_temp);
}
