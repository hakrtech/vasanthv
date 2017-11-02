/* Chapter 07 Exercise 07 Program to generate prime numbers using arrays
 * Vasanth 02 November 2017
 */

#include <stdio.h>

#define LIMIT 1000
#define PRIME_TRUE 0	/* 0 is prime */
#define PRIME_FALSE 1	/* 1 is composite */

int p[LIMIT];	/* array of declaration values is initialy zero into outside main function */ 

int main(void)
{
	int arrow;

	printf("prime numbers>\n");
	
	for (arrow = 2; arrow < LIMIT; ++arrow) {
		int jump = 2 * arrow;

		while (jump < LIMIT) {
			
			if (p[jump] == PRIME_TRUE) {
				p[jump] = PRIME_FALSE;
			}
			jump += arrow;
		}
		
		if(p[arrow] == PRIME_TRUE) {
			printf("%d ", arrow);
		}
	}
	printf("\n");

	return 0;
}

