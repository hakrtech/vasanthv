#!/bin/sh 
LIB=ari
HSRC=lib${LIB}.h
CSRC=lib${LIB}.c
H=$LIB.h.spec.txt	# header api
C=$LIB.c.spec.txt	# c implementation
rm -f $H $C

# echo -n "$HSRC	"
# cat $H | egrep '^void|^int|^bool' | cat -n 

cat $HSRC | egrep '^void|^int|^bool|^double' | awk -F\; '{ print $1; }' | sed -e 's/  [ ]*/ /g' | sed -e 's/)//' | sort -u > $H

echo "$C	"
# cat $C | egrep '^void|^int|^bool|^double' | grep OKR | cat -n

cat $CSRC | egrep '^void|^int|^bool|^double' | grep OKR | awk -F\) '{ print $1; }' | sed -e 's/  [ ]*/ /g' | sort -u > $C

# echo "$HSRC Array API - TODO"
diff $H $C | egrep '^<' | grep ari_ | egrep -v '_range_|_stat_' | sed -e 's/^< //' | cat -n

echo "$HSRC Array Range API - TODO"
diff $H $C | egrep '^<' | grep ari_ | grep _range_ | sed -e 's/^< //' | cat -n

# echo "$HSRC Statistics API - TODO"
# diff $H $C | egrep '^<' | grep ari_ | grep _stat_ | sed -e 's/^< //' | cat -n

# echo "$HSRC Today Targets - TODO"
# grep TODO $HSRC
