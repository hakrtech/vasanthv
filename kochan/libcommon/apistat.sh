#!/bin/bash 
LIB=ari
HSRC=lib${LIB}.h
CSRC=lib${LIB}.c
HOUT=$LIB.h.spec.txt	# header api
COUT=$LIB.c.spec.txt	# c implementation
rm -f $HOUT $COUT

# echo -n "$HSRC	"
# cat $HOUT | egrep '^void|^int|^bool' | cat -n 

cat $HSRC | egrep '^void|^int|^bool|^double' | awk -F\; '{ print $1; }' | sed -e 's/  [ ]*/ /g' | sed -e 's/)//' | sort -u > $HOUT

echo "$COUT	"
# cat $COUT | egrep '^void|^int|^bool|^double' | grep OKR | cat -n

cat $CSRC | egrep '^void|^int|^bool|^double' | grep OKR | awk -F\) '{ print $1; }' | sed -e 's/  [ ]*/ /g' | sort -u > $COUT

echo "$HSRC Array API - TODO"
diff $HOUT $COUT | egrep '^<' | egrep -v '_range_|_stat_' | sed -e 's/^< //' | cat -n

echo "$HSRC Array Range API - TODO"
diff $HOUT $COUT | egrep '^<' | grep _range_ | sed -e 's/^< //' | cat -n

echo "$HSRC Statistics API - TODO"
diff $HOUT $COUT | egrep '^<' | grep _stat_ | sed -e 's/^< //' | cat -n
