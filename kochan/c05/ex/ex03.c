/* Chapter 05 Exercise 03 Program to generate every fifth triangular number between 5 - 50
 * formula triangular_number = n (n+1) / 2
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;

	printf("fifth triangular number between 5 and 5000\n");

	i = 5;
	while (i <= 5000) {
		int triangular;

		triangular = ( i * (i+1) ) / 2;
		printf("%10i	%i\n", i, triangular);
		i += 5;
	}

	return 0;
}
