/* Chapter 05 Exercise 04 Program to generate first 10 number factorial values
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int f;

	printf("first ten number factorial values\n");

	i = 1;
	f = 1;
	while (i <= 10) {
		f = f * i;
		printf("%i!	%i\n", i, f);
		++i;
	}

	return 0;
}
