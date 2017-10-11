/* Chapter 05 Exercise 04 Program to generate first 10 number factorial values
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int number;
	int initial;

	printf("first ten number factorial vlues\n");

	number = 1;
	initial = 1;
	while (initial <= 10) {
		number = number * initial;

		printf("%5i!\t%i\n", initial, number);

		initial += 1;
	}

	return 0;
}
