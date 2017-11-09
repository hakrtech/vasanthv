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

