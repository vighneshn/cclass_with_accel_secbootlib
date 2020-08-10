

all: types.h bignum.c Karatsuba.c rsa.c
	gcc bignum.c -c
	gcc Karatsuba.c -c
	gcc rsa.c -c
	gcc rsa_test.c bignum.o rsa.o -o rsa

lib:
	gcc -fpic bignum.c -c
	gcc -shared -fpic -o librsa.so rsa.c bignum.o 

clean:
	rm -f rsa *.o
