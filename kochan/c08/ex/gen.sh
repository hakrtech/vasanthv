#!/bin/sh
if [ "$1" == "" ];
then
	exit 1
fi
N=$1
# echo $N
yes | cat -n | head -$N | awk '{ print $1; }' 
exit 0
