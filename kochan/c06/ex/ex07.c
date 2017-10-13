/* Chapter 06 Exercise 07 Program to generate prime number
 * Vasanth 13 October 2017
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num;
	int i;
	bool is_prime;

	printf("enter number and to get upto prime numbers> ");
	scanf("%i", &num);
	printf("entered number is %i\n", num);
	printf("prime numbers: 2 ");

	i = 3;
	while (i <= num) {
		int j;

		is_prime = true;
		j = 3;
		while (j < i) {
			if (i % j == 0) {
				is_prime = false;
				break;		/* exit continuous looping */
			}
			++j;
		}

		if (is_prime != false) {
			printf("%i ", i);
		}
		i += 2;		/* now, this loop not check the even numbers */
	}
	printf("\n");

	return 0;
}
