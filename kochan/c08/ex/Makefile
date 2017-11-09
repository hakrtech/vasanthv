# choice of compiles
CC=gcc 
CC=clang

# preprocess with these options usually called CPPFLAGS
PREPROCESSOR.FLAGS=-DLAB -DDEBUG

# compile with these options usually called CFLAGS
COMPILE.FLAGS+=-g -Wall -Werror -pedantic -ansi

# search for user header files in these directories
INCDIR=-I.

# add this to compile flags
COMPILE.FLAGS+=$(INCDIR)

# link time search for libraries in these directories
LIBDIR=-L.

# link with these libraries
LIB=-lhakr

# link with these flags usually called LDFLAGS
LINK.FLAGS=$(LIBDIR) $(LIB)

# list of binaries (executables)
BIN=factor_table gcd

# default target - compile libraries and then binaries
all: 	lib bin

lib: 	libhakr.a

bin:	$(BIN)

libhakr.a: libhelp.o
	ar crs libhakr.a libhelp.o
	# nm -s libhakr.a

# rename to libari.c libarf.c libnumi.c libnumf.c ...
libhelp.o: libhelp.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $< 

factor_table: factor_table.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

gcd: 	gcd.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

# clean up and build everything again
build:	clean all

clean:
	/bin/rm -f a.out *.o *.a $(BIN)


CC=gcc
CFLAGS=-g -Wall


all: ex02  ex03 ex03a ex03b  ex04  ex05  ex06  ex07  ex08  ex09  ex10  ex11  ex12  ex13

ex02: 	ex02.c
	gcc $(CFLAGS) $< -o $@
	size $@

ex03: 	ex03.c
	gcc $(CFLAGS) ex03.c -lm -o ex03

ex03a: 	ex03a.c
	gcc ex03a.c -lm -o ex03a

ex03b: ex03b.c
	gcc ex03b.c -lm -o ex03b

ex04: 	ex04.c

ex05: 	ex05.c

ex06: 	ex06.c

ex07: 	ex07.c

ex08: 	ex08.c

ex09: 	ex09.c

ex10: 	ex10.c

ex11: 	ex11.c

ex12: 	ex12.c

ex13: 	ex13.c


clean:
	/bin/rm -f a.out *.o ex02  ex03  ex03a  ex03b  ex04  ex05  ex06  ex07  ex08  ex09  ex10  ex11  ex12  ex13

