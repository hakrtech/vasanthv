# choice of compiles
CC=gcc 
CC=clang

# preprocess with these options usually called CPPFLAGS
PREPROCESSOR.FLAGS=-DLAB -DDEBUG

# compile with these options usually called CFLAGS
COMPILE.FLAGS+=-g -Wall -Werror -pedantic -ansi --std=c99

# search for user header files in these directories
INCDIR=-I.

# add this to compile flags
COMPILE.FLAGS+=$(INCDIR)

# link time search for libraries in these directories
LINK.LIBDIRS=

# list of libraries to link with 
LINK.LIBS=

# link with these flags usually called LDFLAGS
LINK.FLAGS=$(LINK.LIBDIRS) $(LINK.LIBS)

# list of binaries to be built
BIN=

# list of libraries to be built
LIB=libinteger.a libreal.a libhakr.a

#
# default target - compile libraries and then binaries
#

all: 	lib bin 

lib: 	$(LIB)

bin:	$(BIN)

# clean up and build everything again
rebuild: build

build:	clean all

clean:
	/bin/rm -f a.out *.o *.a $(BIN) $(LIB)
#
# end of Makefile template
#

# integer number library
libinteger.a: libnumi.o
	ar crs libinteger.a libnumi.o

libnumi.o: libnumi.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $< 

# real number library
libreal.a: libnumf.o libnumd.o
	ar crs $@ libnumf.o libnumd.o

libnumf.o: libnumf.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $< 

libnumd.o: libnumd.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $<

# own hakr library
libhakr.a: libhelp.o
	ar crs libhakr.a libhelp.o
	# nm -s libhakr.a

# renamed
libhelp.o: libhelp.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) -c $< 

