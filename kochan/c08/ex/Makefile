# choice of compiles
CC=clang
CC=gcc 

# preprocess with these options usually called CPPFLAGS
PREPROCESSOR.FLAGS=-DLAB -DDEBUG

# compile with these options usually called CFLAGS
COMPILE.FLAGS+=-g -Wall -Werror -pedantic -ansi --std=c99

# search for user header files in these directories
INCDIR=-I.

# add this to compile flags
COMPILE.FLAGS+=$(INCDIR)

# link time search for libraries in these directories
LIBDIR=-L. -L../px

# link with these libraries
LIB=-lhakr -lnumi -lm -lreal

# link with these flags usually called LDFLAGS
LINK.FLAGS=$(LIBDIR) $(LIB)

# list of binaries (executables)
BIN=ex02 ex03 ex03a ex03b ex04 ex05 ex06 ex07 ex08 ex09 ex10 ex11 ex12 ex13

# default target - compile libraries and then binaries
all: 	lib bin

lib: 	libnumi.a libreal.a

bin:	$(BIN)

# clean up and build everything again
build:	clean all

clean:
	/bin/rm -f a.out *.o *.a $(BIN)

# number integer library
libnumi.a: libnumi.o
	ar crs $@ libnumi.o

libnumi.o: libnumi.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $< 

# number float library
libreal.a: libnumf.o libnumd.o
	ar crs $@ libnumf.o libnumd.o

libnumf.o: libnumf.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $< 

libnumd.o: libnumd.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $< 

# binaries
ex02: 	ex02.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex03: 	ex03.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex03a: 	ex03a.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex03b: 	ex03b.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex04: 	ex04.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex05: 	ex05.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex06: 	ex06.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex07: 	ex07.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex08: 	ex08.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex09: 	ex09.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex10: 	ex10.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex11: 	ex11.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex12: 	ex12.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

ex13: 	ex13.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

