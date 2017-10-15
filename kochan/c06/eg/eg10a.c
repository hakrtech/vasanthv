/* Chapter 06 Example 10a Revising - Program to generate a table of prime numbers
 * Vasanth 15 October 2017
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int i;
	int j;

	printf("generationg first 10000 prime number> 2 ");

	for (i = 3; i <= 10000; i += 2) {
		bool is_prime;

		is_prime = true;
		for (j = 3; j < i; j += 2) {
			int remainder;

			remainder = i % j;
			if (remainder == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime == true) {
			printf("%i ", i);
		}
	}
	printf("\n");

	return 0;
}
