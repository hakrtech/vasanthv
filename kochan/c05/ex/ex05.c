/* Chapter 05 Exercise 05 Program to find power of two 2^n
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int n;
	int two_n;

	printf("power of two values\n");

	n = 0;
	two_n = 1;
	while (n <= 10) {
		printf("%2i\t%i\n", n, two_n);

		two_n *= 2;
		++n;
	}

	return 0;
}
