/* Chapter 5 Exercise 2 Program to generate and display a table of n and n^2, range 1 to 10.
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int n;
	n = 1;
	printf("table of n and n^2\n");

	while (n <= 10) {
		printf("%5i%5i\n", n, n*n);
		n += 1;
	}
	return 0;
}
