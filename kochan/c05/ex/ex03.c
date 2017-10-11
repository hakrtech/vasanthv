/* Chapter 05 Exercise 03 Program to generate every fifth triangular number between 5 - 50
 * formula triangular_number = n (n+1) / 2
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;

	printf("fifth triangular number between 5 and 50\n");

	num = 5;
	while (num <= 50) {
		int triangular;

		triangular = ( num * (num+1) ) / 2;

		printf("%5i\t%i\n", num, triangular);

		num += 5;
	}

	return 0;
}
