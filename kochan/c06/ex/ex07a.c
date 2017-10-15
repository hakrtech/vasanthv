/* Chapter 06 Exercise 07a Program to generate prime number using for loop
 * Vasanth 13 October 2017
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void prime_print(int output, bool found)
{
	if (found == true) {
		printf("%i ", output);
	}
}

void prime_generate(int limit)
{
	bool is_prime;
	int i;
	int j;

	for (i = 3; i <= limit; i += 2) {	/* In even number two only prime and other even numbers are not prime depend upon proof. so eliminated even values */

		is_prime = true;

		for (j = 3; j < i; j += 2) {
			int remainder;

			remainder = i % j;
			if (remainder == 0) {
				is_prime = false;
				break;
			}
		}
		prime_print(i, is_prime);
	}
}

int main(void)
{
	int input;

	printf("enter number and to get upto prime numbers> ");
	scanf("%i", &input);
	printf("entered number is %i\n", input);

	if (input < 2) {
		printf("sorry this is not valid value to check prime or not\n");
		exit (EXIT_FAILURE);
	}
	printf("prime numbers: 2 ");

	prime_generate(input);

	printf("\n");

	return 0;
}
