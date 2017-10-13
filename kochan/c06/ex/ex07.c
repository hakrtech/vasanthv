/* Chapter 06 Exercise 07 Program to generate prime number
 * Vasanth 13 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int i;
	_Bool prime;

	printf("enter number and to get upto prime numbers> ");
	scanf("%i", &num);
	printf("entered number is %i\n", num);

	i = 2;
	while (i <= num) {
		int j;

		prime = 1;
		j =2;
		while ( j < i) {
			if (i % j == 0) {
				prime = 0;
			}
			++j;
		}

		if (prime != 0) {
			printf("%i ", i);
		}
		++i;
	}
	printf("\n");

	return 0;
}
