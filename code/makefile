all:crypt memory function preCode
	gcc -g main.c memAlloc.o function.o preCode.o -lm -o encrypt
	gcc -g main.c memAlloc.o function.o preCode.o -lm -o decode

crypt:
	gcc -g -c cryptography.c

memory:
	gcc -g -c memAlloc.c

function:
	gcc -g -c function.c

preCode:
	gcc -g -c preCode.c
