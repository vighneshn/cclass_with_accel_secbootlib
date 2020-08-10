
#include<stdio.h>
#include "types.h"

int main(int argc, char **argv)
{
	char p[MAX_DIGITS*CIL+2];
	int crc=0;  /* 0 if CRC is not used */
	char rsa_n
		[]="9292758453063D803DD603D5E777D7888ED1D5BF35786190FA2F23EBC0848AEADDA92CA6C3D80B32C4D109BE0F36D6AE7130B9CED7ACDF54CFC7555AC14EEBAB93A89813FBF3C4F8066D2D800F7C38A81AE31942917403FF4946B0A83D3D3E05EE57C6F5F5606FB5D4BC6CD34EE0801A5E94BB77B07507233A0BC7BAC8F90F79";
	char rsa_d
		[]="24BF6185468786FDD303083D25E64EFC66CA472BC44D253102F8B4A9D3BFA75091386C0077937FE33FA3252D28855837AE1B484A8A9A45F7EE8C0C634F99E8CDDF79C5CE07EE72C7F123142198164234CABB724CF78B8173B9F880FC86322407AF1FEDFDDE2BEB674CA15F3E81A1521E071513A1E85B5DFA031F21ECAE91A34D";
	char rsa_p
		[]="C36D0EB7FCD285223CFB5AABA5BDA3D82C01CAD19EA484A87EA4377637E75500FCB2005C5C7DD6EC4AC023CDA285D796C3D9E75E1EFC42488BB4F1D13AC30A57";
	char rsa_q
		[]="C000DF51A7C77AE8D7C7370C1FF55B69E211C2B9E5DB1ED0BF61D0D9899620F4910E4168387E3C30AA1E00C339A795088452DD96A9A5EA5D9DCA68DA636032AF";

	char rsa_dp
		[]="C1ACF567564274FB07A0BBAD5D26E2983C94D22288ACD763FD8E5600ED4A702DF84198A5F06C2E72236AE490C93F07F83CC559CD27BC2D1CA488811730BB5725";

	char rsa_dq
		[]="4959CBF6F8FEF750AEE6977C155579C7D8AAEA56749EA28623272E4F7D0592AF7C1F1313CAC9471B5C523BFE592F517B407A1BD76C164B93DA2D32A383E58357";

	char rsa_qp
		[]="9AE7FBC99546432DF71896FC239EADAEF38D18D2B2F0E2DD275AA977E2BF4411F5A3B2A5D33605AEBBCCBA7FEB9F2D2FA74206CEC169D74BF5A8C50D6F48EA08";

	char rsa_pt
		[]="AABBCC03020100FFFFFFFFFF1122330A0B0CCCDDDDDDDDDD";

	char rsa_e
		[]="10001";

	char Rstring[]="34234408D8982C0C21B9F7CB875490DD2C869FB47AAA9B7978B3E37D984E0374F3B5E4DD1EF2E0DCCD630C368B4C20B14526B97C482F3B969CDF0BF6A4D1BD5AF3CC41F7B73CC706987C991548466EEE49A089027BAE89432669CF66564476D5DD8BAD2F239B7597B72211C4D3B68CDB16E20B05A7A9ECB9DABAB191F10199F";

	bignum_t bn_p;   /* 1st prime factor */
	bignum_t bn_q;   /* 2nd prime factor */
	bignum_t bn_d;   /* private exponent */
	bignum_t bn_n;   /* Public modulus */
	bignum_t bn_dp;  /* d % (p - 1) */
	bignum_t bn_dq;  /* d% (q - 1) */
	bignum_t bn_pt;  /* Plain text */
	bignum_t bn_qp;  /* q^-1 mod p */
	bignum_t bn_e;   /* public exponent */
	bignum_t bn_cipher, bn_message, bn_result, RR;
BN_init(&bn_p);BN_init(&bn_q);BN_init(&bn_d);BN_init(&bn_n);BN_init(&bn_dp);BN_init(&bn_dq);BN_init(&bn_pt);BN_init(&bn_qp);BN_init(&bn_e);
BN_init(&bn_cipher);BN_init(&bn_message);BN_init(&bn_result);BN_init(&RR);
 
	BN_hex2bn(&RR, Rstring);
	BN_hex2bn(&bn_p, rsa_p);
	BN_hex2bn(&bn_q, rsa_q);
	BN_hex2bn(&bn_d, rsa_d);
	BN_hex2bn(&bn_n, rsa_n);
	BN_hex2bn(&bn_dp,rsa_dp);
	BN_hex2bn(&bn_dq,rsa_dq);
	BN_hex2bn(&bn_qp,rsa_qp);
	BN_hex2bn(&bn_e, rsa_e);
	BN_hex2bn(&bn_pt,rsa_pt);
	BN_hex2bn(&bn_message,rsa_pt);


printf("Given q and p:\n");
 printf("GCD is:\n");
 BN_gcd(&bn_result, &bn_p,&bn_q);
   BN_bn2hex(&bn_result,p);
     printf("%s\n",p);
  printf("Inverse is:\n");
   BN_inverse(&bn_result,&bn_q,&bn_p);
    BN_bn2hex(&bn_result,p);
     printf("%s\n\n",p);
	rsaEncrypt(&bn_cipher,&bn_message,&bn_e,&bn_n,RR);

	if(crc==0)
		rsaDecrypt(&bn_result,&bn_cipher,&bn_d,&bn_n, RR); 
	else
	{
		printf("CRC Implemented\n");
		rsaDecrypt_CRC(&bn_result,&bn_cipher,&bn_dp,&bn_dq,&bn_qp,&bn_p,&bn_q, &bn_n,RR); 
	}


	if(BN_compare(&bn_result, &bn_pt)==0)
		printf("RSA Passed\n\n");
	else
		printf("RSA Failed\n\n");

   
}
