#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "types.h"

int main(int argc, char **argv)
{
        char p1[2*(MAX_DIGITS*CIL)];
        char na[] = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFC";
        char nb[] = "64210519e59c80e70fa7e9ab72243049feb8deecc146b9b1";
        char np[] = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFF";	
        char nx[] = "d458e7d127ae671b0c330266d246769353a012073e97acf8";
        char ny[] = "325930500d851f336bddc050cf7fb11b5673a1645086df3b";
        char nx2[] = "F22C4395213E9EBE67DDECDD87FDBD01BE16FB059B9753A4";
        char ny2[] = "264424096AF2B3597796DB48F8DFB41FA9CECC97691A9C79";
        char nk[] = "A78A236D60BAEC0C5DD41B33A542463A8255391AF64C74EE";


	bignum_t x,y,x3,y3,p,a,k,x2,y2;
        BN_init(&x);BN_init(&y);BN_init(&x3);BN_init(&y3);BN_init(&p);BN_init(&a);BN_init(&k);BN_init(&x2);BN_init(&y2);
	BN_hex2bn(&x,nx); // convert the string to BIGNUM
	BN_hex2bn(&y,ny);
        BN_hex2bn(&p,np);
        BN_hex2bn(&a,na);
        BN_hex2bn(&x2,nx2); 
	BN_hex2bn(&y2,ny2);
        BN_hex2bn(&k,nk);
        printf("Values of (x,y) coordinates\n");
        BN_bn2hex(&x,p1);
        printf("%s\n",p1);
           
        BN_bn2hex(&y,p1);
	printf("%s\n",p1);

        printf("Values of k\n");
        BN_bn2hex(&k,p1);
        printf("%s\n\n\n",p1);
       
        left_to_right_mul(&x3,&y3,&k,&a,&p,&x,&y);

	printf("Result after scalar Multiplication\n");
        BN_bn2hex(&x3,p1);
        printf("%s\n",p1);
           
        BN_bn2hex(&y3,p1);
	printf("%s\n",p1);
      
	return 0;
}
