CC=gcc 
CFLAGS=-g -Wall

all: factor_table gcd 

factor_table: factor_table.c libhelp.a
	gcc -o factor_table factor_table.c libhelp.a

gcd: gcd.c

libhelp.o: libhelp.c
	gcc -c libhelp.c

libhelp.a: libhelp.o
	ar rv libhelp.a libhelp.o
	ranlib libhelp.a
	nm libhelp.a

clean:
	/bin/rm -f a.out *.o factor_table gcd libhelp
