#!/bin/sh
NFILES=$(find . -type f -name "*.[c]" -print | wc -l)
LOC=$(find . -name "*.[c]" -print | xargs wc -l | tail -1 | awk '{ print $1; }')
find . -type f -name "*.c" -print | xargs cat | sed -e '/^[ 	]*$/d' | awk -f rmc.awk > o
CLOC=$(find . -type f -name "*.c" -print | xargs cat | sed -e '/^[ 	]*$/d' | awk -f rmc.awk | wc -l)
TLOC=6000
echo "Lines of Code:   $LOC ($CLOC non ws) in $NFILES files"
echo "Target LOC:      $TLOC"
PCT=$(echo "$LOC*100/$TLOC" | bc)
CPCT=$(echo "$CLOC*100/$TLOC" | bc)
echo "Target Achieved: $PCT% ($CPCT%)"
exit 0
