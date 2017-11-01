/* Chapter 07 Exercise 07 Program to generate prime numbers using algorithm
 * Vasanth 01 November 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "level.h"

#define PRIME (1)
#define COMPOSITE (0)

int main(void)
{
	int p[LIMIT];
	int limit = LIMIT;
	int arrow = 2;
	int i;


	p[0] = COMPOSITE;
	p[1] = COMPOSITE;
	
	printf("int max = %d\n",INT_MAX);
	printf("sizeof int = %u\n",sizeof(int));
	printf("sizeof short = %u\n",sizeof(short));
	printf("sizeof long = %u\n",sizeof(long));
	printf("sizeof char = %u\n",sizeof(char));
	printf("short max = %d\n", SHRT_MAX);
	printf("long max = %lu\n", LONG_MAX);
	printf("long long max = %llu\n\n", LLONG_MAX);
	
	for (i = 2; i <= limit; ++i) {
		p[i] = PRIME;
	}

	while (arrow <= limit) {
	
		if (p[arrow] == PRIME) {
			
			for (i = 2; i <= limit; ++i) {
			
				if (p[arrow] == PRIME) {
					int j;

					j = arrow * i;

					if (j < 0) {
						break;
					}
					if(j > limit) {
						break;
					}

					if (j < limit && p[j] == PRIME) {
						p[j] = COMPOSITE;
					}
				}
			 }

		}

		++arrow;
	}

	printf("prime numbers>\n");

	for (i = 2; i <= limit; ++i) {
		if(p[i] == PRIME) {
			printf("%i ", i);
		}
	}
	printf("\n");
	
	return 0;
}

