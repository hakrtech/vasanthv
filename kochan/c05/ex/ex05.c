/* Chapter 05 Exercise 05 Program to find power of two 2^n
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int n;
	int two_pow;

	printf("power of 2^n values\n");

	n = 0;
	two_pow = 1;
	while (n <= 10) {
		printf("%i	%i\n", n, two_pow);
		two_pow *= 2;
		++n;
	}

	return 0;
}
