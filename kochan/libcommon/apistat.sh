#!/bin/bash 
LIB=ari
HSRC=lib${LIB}.h
CSRC=lib${LIB}.c
HOUT=$LIB.h.spec.txt	# header api
COUT=$LIB.c.spec.txt	# c implementation
rm -f $HOUT $COUT

# echo -n "$HSRC	"
# cat $HOUT | egrep '^void|^int|^bool' | cat -n 

cat $HSRC | egrep '^void|^int|^bool' | awk -F\; '{ print $1; }' | sed -e 's/  [ ]*/ /g' | sed -e 's/)//' | sort -u | awk '{ printf "%s);\n", $0; }' > $HOUT

echo "$COUT	"
# cat $COUT | egrep '^void|^int|^bool' | cat -n | grep OKR

cat $CSRC | egrep '^void|^int|^bool' | awk -F\) '{ print $1; }' | sed -e 's/  [ ]*/ /g' | sort -u | awk '{ printf "%s);\n", $0; }' > $COUT

echo "$HSRC API - TODO"
diff $HOUT $COUT | egrep '^<' | sed -e 's/^< //' | cat -n
