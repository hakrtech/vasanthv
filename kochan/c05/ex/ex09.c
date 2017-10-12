/* Chapter 05 Exercise 09 Program to find triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int input;
	int triangulnum;

	printf("give number and get upto total triangular number> ");
	scanf("%i", &input);
	printf("given number %i\n", input);

	i = 1;
	triangulnum = 0;
	while (i <= input) {
		triangulnum = triangulnum + i;
		printf("%2i\t%i\n", i, triangulnum);
		++i;
	}

	return 0;
}
