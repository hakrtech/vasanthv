# choice of compiles
CC=clang
CC=gcc 

# preprocess with these options usually called CPPFLAGS
PREPROCESSOR.FLAGS=

# compile with these options usually called CFLAGS
COMPILE.FLAGS+=-g -Wall -Werror -pedantic -ansi --std=c99

# search for user header files in these directories
INCDIR=-I ../../libcommon

# add this to compile flags
COMPILE.FLAGS+=$(INCDIR)

# link time search for libraries in these directories
LINK.LIBDIRS=-L ../../libcommon

# list of libraries to link with 
LINK.LIBS=-larray -linput

# link with these flags usually called LDFLAGS
LINK.FLAGS=$(LINK.LIBDIRS) $(LINK.LIBS)

# list of binaries to be built
BIN=ex02 ex03 ex04 ex05 ex06 ex07 ex08 ex09 ex10 ex11 ex12 ex13 ex14

# list of libraries to be built
LIBDIR= ../../libcommon
RETURNPATH= ../c10/ex
LIB=

#
# default target - compile libraries and then binaries
#
.PHONY: all lib bin rebuild build clean

all: 	lib bin

lib: 	$(LIB)
	cd $(LIBDIR) && make && cd $(RETURNPATH)

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
# $< is rhs
ex02: 	ex02.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex03: 	ex03.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex04: 	ex04.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex05: 	ex05.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex06: 	ex06.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex07: 	ex07.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex08: 	ex08.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex09: 	ex09.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex10: 	ex10.c
	$(CC) -o $@ $(COMPILE.FLAGS) $< $(LINK.FLAGS) -larray -linteger

ex11: 	ex11.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex12: 	ex12.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex13: 	ex13.c
	$(CC) -o $@ $(COMPILE.FLAGS) $<

ex14: 	ex14.c
	$(CC) -o $@ $(COMPILE.FLAGS) $< $(LINK.FLAGS) -larray -linteger

