/* Chapter 06 Exercise 07 Program to generate prime number
 * Vasanth 13 October 2017
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int limit;
	int i;
	bool is_prime;

	printf("enter number and to get upto prime numbers> ");
	scanf("%i", &limit);
	printf("entered number is %i\n", limit);

	if (limit >= 2) {
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
					break;		/* exit continuous looping */
				}
				++j;
			}

			if (is_prime != false) {
				printf("%i ", i);
			}

			i += 2;		/* now, this loop not check the even numbers */
		}
		printf("\n");
	} else {
		printf("sorry this is not valid number to check prime or not\n");
	}

	return 0;
}
