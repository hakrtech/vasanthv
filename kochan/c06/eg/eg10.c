/* Chapter 06 Example 10 Program to generate a table of prime numbers
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	printf("generationg first 100 prime number> 2 ");

	for (i = 3; i <= 100; i += 2) {
		_Bool is_prime;

		is_prime = 1;
		for (j = 3; j < i; j += 2) {
			int remainder;

			remainder = i % j;
			if (remainder == 0) {
				is_prime = 0;
				break;
			}
		}

		if (is_prime != 0) {
			printf("%i ", i);
		}
	}
	printf("\n");

	return 0;
}
