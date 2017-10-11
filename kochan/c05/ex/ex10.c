/* Chapter 05 Exercise 10 Program to print the digits in reverse order
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;

	printf("enter any negative or pastive number and printed the digits of a number in reverse order> ");
	scanf("%i", &num);
	printf("entered number %i\n", num);

	while (num != 0) {
		int last_digit;

		last_digit = num % 10;

		if (num < 0) {
			num = -num;
		}
		num = num / 10;

		printf("%i", last_digit);
	}
	printf("\n");

	return 0;
}
