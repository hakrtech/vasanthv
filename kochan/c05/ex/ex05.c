/* Chapter 05 Exercise 05 Power of two 2^n
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int n;
	int two_n;
	n = 0;
	two_n = 1;
	printf("power of two\n");

	while (n <= 10) {
		printf("%2i\t%i\n", n, two_n);
		two_n *= 2;
		++n;
	}
	return 0;
}
