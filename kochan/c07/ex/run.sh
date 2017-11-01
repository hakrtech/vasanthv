#!/bin/sh
rm -f t3
date  > t3
./a.out
date  >> t3
