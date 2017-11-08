/* Chapter 07 Exercise 07 Program to generate prime numbers using arrays
 * Vasanth 02 November 2017
 */

#include <stdio.h>
//#include "level.h"

#define LIMIT 1000
#define PRIME  1	/* 1 is prime */
#define COMPOSITE 0	/* 0 is composite */


int main(void)
{
	int p[LIMIT];
	int i;
	int arrow;

	p[0] = COMPOSITE;
	p[1] = COMPOSITE;

	for (i = 2; i < LIMIT; ++i) {
		p[i] = PRIME;
	}	

	for (arrow = 2; arrow < LIMIT; ++arrow) {
		int jump;
	       
		jump = 2 * arrow;

		while (jump < LIMIT) {
			
			if (p[jump] == PRIME) {
				p[jump] = COMPOSITE;
			}
			jump += arrow;
		}
	}
	
	printf("prime numbers>\n");

	for (i = 2; i < LIMIT; ++i) {
		if (p[i] == PRIME) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}

