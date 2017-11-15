
# choice of compiles
CC=gcc 
CC=clang

# preprocess with these options usually called CPPFLAGS
PREPROCESSOR.FLAGS=-DLAB -DDEBUG

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
BIN=factor_table gcd koodai

# list of libraries to be built
LIB=
LIBDIR= ../../libcommon
RETURNPATH= ../c08/px

#
# default target - compile libraries and then binaries
#

all: 	lib bin 

lib: 	$(LIB)
	cd $(LIBDIR) && make && cd $(RETURNPATH)

bin:	$(BIN)

# clean up and build everything again
rebuild: build

build:	clean all

clean:
	/bin/rm -f a.out *.o *.a $(BIN) $(LIB)
#
# end of Makefile template
#

#binary
factor_table: factor_table.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

gcd: 	gcd.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)

koodai: koodai.c
	$(CC) -o $@ $(PREPROCESSOR.FLAGS) $(COMPILE.FLAGS) $< $(LINK.FLAGS)
	
