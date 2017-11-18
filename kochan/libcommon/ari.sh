#!/bin/sh
echo -n "libari.h	"
cat libari.h | egrep '^void|^int|^bool' | cat -n 
echo "libari.c	"
cat libari.c | egrep '^void|^int|^bool' | cat -n | grep OKR
