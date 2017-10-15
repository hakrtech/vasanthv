#!/bin/bash
NFILES=$(find . -type f -name "*.[hc]" -print | wc -l)
LOC=$(find . -name "*.[ch]" -print | xargs wc -l | tail -1 | awk '{ print $1; }')
CLOC=$(find . -type f -name "*.[hc]" -print | xargs cat | sed -e '/^[ 	]*$/d' | wc -l)
TLOC=5000
echo "Lines of Code:   $LOC ($CLOC non ws) in $NFILES files"
echo "Target LOC:      $TLOC"
PCT=$(echo "$LOC*100/$TLOC" | bc)
CPCT=$(echo "$CLOC*100/$TLOC" | bc)
echo "Target Achieved: $PCT% ($CPCT%)"
exit 0
