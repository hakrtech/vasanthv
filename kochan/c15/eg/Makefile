# choice of compiles
CC=clang
CC=gcc 

# preprocess with these options usually called CPPFLAGS
PREPROCESSOR.FLAGS=

# compile with these options usually called CFLAGS
COMPILE.FLAGS+=-g -Wall -Werror -pedantic -ansi --std=c99

# search for user header files in these directories
INCDIR=

# add this to compile flags
COMPILE.FLAGS+=$(INCDIR)

# link time search for libraries in these directories
LINK.LIBDIRS=

# list of libraries to link with 
LINK.LIBS=

# link with these flags usually called LDFLAGS
LINK.FLAGS=$(LINK.LIBDIRS) $(LINK.LIBS)

# list of binaries to be built
BIN=testmod eg01

# list of libraries to be built
LIBDIR=
RETURNPATH=
LIB=

#
# default target - compile libraries and then binaries
#
.PHONY: all bin rebuild build clean

all: 	bin

bin:	$(BIN)

# clean up and build everything again
rebuild: build

build:	clean all

clean:
	/bin/rm -f a.out *.o *.a *.core $(BIN) $(LIB)
#
# end of Makefile template
#


# binaries
# $@ is lhs
# $< is 
testmod: eg0mod1.c eg0mod2.c eg0main.c eg0mod.h
	$(CC) -o $@ $(COMPILE.FLAGS) eg0mod1.c eg0mod2.c eg0main.c

eg01: eg01.c eg01a.c eg01a.h
	$(CC) -o $@ $(COMPILE.FLAGS) eg01.c eg01a.c

