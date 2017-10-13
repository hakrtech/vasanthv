/* Chapter 06 Exercise 07a Program to generate prime number using for loop
 * Vasanth 13 October 2017
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void prime_print(int output, bool prime)
{
	if (prime == true) {
		printf("%i ", output);
	}
}

void prime_generate(int limit)
{
	bool is_prime;
	int jump;
	int start;

	for (jump = 3; jump <= limit; jump += 2) {	/* now, this loop not check the even numbers */

		is_prime = true;

		for (start = 3; start < jump; ++start) {
			int remainder;

			remainder = jump % start;
			if (remainder == 0) {
				is_prime = false;
				break;		/* exit continuous looping */
			}
		}
		prime_print(jump, is_prime);
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
