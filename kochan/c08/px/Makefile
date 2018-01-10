
# choice of compiles
CC=clang
CC=gcc 

# preprocess with these options usually called CPPFLAGS
PREPROCESSOR.FLAGS=-DLAB -DDEBUG
TEST.PREPROCESSOR.FLAGS=$(PREPROCESSOR.FLAGS) -DTEST

# compile with these options usually called CFLAGS
COMPILE.FLAGS+=-g -Wall -Werror -pedantic -ansi --std=c99

# search for user header files in these directories
INCDIR=-I ../../libcommon

# add this to compile flags
COMPILE.FLAGS+=$(INCDIR)

# link time search for libraries in these directories
LINK.LIBDIRS=-L ../../libcommon

# list of libraries to link with 
LINK.LIBS=-larray

# link with these flags usually called LDFLAGS
LINK.FLAGS=$(LINK.LIBDIRS) $(LINK.LIBS)

# list of binaries to be built
BIN=factor_table gcd
TESTBIN=koodai

# list of libraries to be built
LIB.LOCAL.INC=-L .
LIB.LOCAL.LNK=-lkoodai
LIB.LOCAL.FLAGS=$(LIB.LOCAL.INC) $(LIB.LOCAL.LNK)
LIB.LOCAL=libkoodai.a
LIBCOMMONDIR= ../../libcommon
RETURNPATH= ../c08/px

#
# default target - compile libraries and then binaries
#

all: 	lib bin testbin

lib:	libcommon liblocal

libcommon: 	$(LIBCOMMON)
	cd $(LIBCOMMONDIR) && make && cd $(RETURNPATH)

liblocal:	$(LIB.LOCAL)

bin:	$(BIN)

testbin: $(TESTBIN)

# clean up and build everything again
rebuild: build

build:	clean all

clean:
	/bin/rm -f a.out *.o *.a *.core $(BIN) $(TESTBIN)
#
# end of Makefile template
#

# local libraries
LIBOBJ=koodai.o
libkoodai.a: $(LIBOBJ)
	ar rcs $@ $(LIBOBJ)

koodai.o: koodai.c 
	$(CC) -c -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $<

# binaries
factor_table: factor_table.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LIB.LOCAL.FLAGS) $(LINK.FLAGS) -linteger

gcd: 	gcd.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LIB.LOCAL.FLAGS) $(LINK.FLAGS)

# test binaries
koodai: koodai.c
	$(CC) -o $@ $(TEST.PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS) -linteger

