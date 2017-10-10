/* Chapter 05 Exercise 03 Program to generate every fifth triangular number between 5 - 50
 * formula triangular_number = n (n+1) / 2
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int n;
	n = 5;
	printf("fifth triangular number between 5 and 50\n");

	while (n <= 50) {
		int triangular;
		triangular = (n * (n+1)) / 2;
		printf("%5i\t%i\n", n, triangular);
		n += 5;
	}
	return 0;
}
