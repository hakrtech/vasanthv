#!/bin/bash
LOC=$(find . -name "*.c" -print | xargs wc -l | tail -1 | awk '{ print $1; }')
TLOC=5000
echo "Lines of Code:   $LOC"
echo "Target LOC:      $TLOC"
PCT=$(echo "$LOC*100/$TLOC" | bc)
echo "Target Achieved: $PCT%"
exit 0
