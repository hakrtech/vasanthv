/* Chapter 06 Exercise 07 Program to generate prime number
 * Vasanth 13 October 2017
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	int limit;
	int i;
	bool is_prime;

	printf("enter number and to get upto prime numbers> ");
	scanf("%i", &limit);
	printf("entered number is %i\n", limit);

	if (limit < 2) {
		printf("sorry this is not valid value to check prime or not\n");
		exit (EXIT_FAILURE);
	}
	printf("prime numbers: 2 ");

	i = 3;
	while (i <= limit) {
		int j;

		is_prime = true;
		j = 3;
		while (j < i) {
			int remainder;

			remainder = i % j;
			if (remainder == 0) {
				is_prime = false;
				break;
			}
			j += 2;
		}

		if (is_prime == true) {
			printf("%i ", i);
		}

		i += 2;		/* In even number two only prime and other even numbers are not prime depend upon proof. so eliminated even values */
	}
	printf("\n");

	return 0;
}
