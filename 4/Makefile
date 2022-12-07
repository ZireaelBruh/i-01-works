main: encrypt.o main.o -oset
	gcc encrypt.o main.o -o main

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

main.o: main.c encrypt.h
	gcc -c main.c