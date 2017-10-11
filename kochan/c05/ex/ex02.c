/* Chapter 5 Exercise 2 Program to generate and display a table of n and n^2, range 1 to 10.
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;

	printf("table of n and n^2\n");

	num = 1;
	while (num <= 10) {
		printf("%5i%5i\n", num, num*num);

		num += 1;
	}

	return 0;
}
