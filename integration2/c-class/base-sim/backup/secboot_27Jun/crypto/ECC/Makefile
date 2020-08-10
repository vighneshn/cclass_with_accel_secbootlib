
all: types.h main.c bignum.c mul_subkara.c 192red_16.c sc_left2right.c
	gcc bignum.c -c
	gcc mul_subkara.c -c
	gcc 192red_16.c -c
	gcc main.c sc_left2right.c ecc_lib.c bignum.o mul_subkara.o 192red_16.o -o main

lib:
	gcc -fpic bignum.c -c 
	gcc -fpic subkara192.c -c
	gcc -fpic 192red_16.c -c
	gcc -fpic ecc_lib.c -c
	gcc -fpic sc_left2right.c -c
	gcc -shared -fpic -o libecc.so bignum.o subkara192.o 192red_16.o ecc_lib.o sc_left2right.o 
mul: 
	gcc -fpic mul_subkara.c -c
	gcc -shared -fpic -o libmul.so mul_subkara.o bignum.c 192red_16.c 

clean:
	rm -f main *.o main *.so *~
