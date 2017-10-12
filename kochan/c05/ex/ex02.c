/* Chapter 5 Exercise 2 Program to generate and display a table of n and n^2, range 1 to 10.
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;

	printf("table of number and square value\n");

	i = 1;
	while (i <= 10) {
		int square;

		square = i * i;
		printf("%i	%i\n", i, square);
		++i;
	}

	return 0;
}
