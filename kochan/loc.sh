#!/bin/sh
NFILES=$(find . -type f -name "*.[c]" -print | wc -l)
LOC=$(find . -name "*.[c]" -print | xargs wc -l | tail -1 | awk '{ print $1; }')
find . -type f -name "*.c" -print | xargs cat | sed -e '/^[ 	]*$/d' | awk -f rmc.awk > o
CLOC=$(find . -type f -name "*.c" -print | xargs cat | sed -e '/^[ 	]*$/d' | awk -f rmc.awk | wc -l)
TLOC=10000
echo "Lines of Code:   $LOC ($CLOC core) in $NFILES files"
echo "Target LOC:      $TLOC"
PCT=$(echo "$LOC*100/$TLOC" | bc)
CPCT=$(echo "$CLOC*100/$TLOC" | bc)
echo "Target Achieved: $PCT% ($CPCT%)"
for d in `ls -1d c* lib*`
do
	LOC=$(find $d -name "*.[c]" -print | xargs wc -l | tail -1 | awk '{ print $1; }')
	CLOC=$(find $d -type f -name "*.c" -print | xargs cat | sed -e '/^[ 	]*$/d' | awk -f rmc.awk | wc -l)
	echo "Chapter $d $LOC $CLOC"
done  | awk '
BEGIN { sum = 0; asum = 0 }
/./ { sum = sum + $3;
      asum = asum + $4;
      printf "%5s %10s visual ... %5d %5d core ... %5d %5d\n", $1, $2, $3, sum , $4, asum
    }
'
exit 0
