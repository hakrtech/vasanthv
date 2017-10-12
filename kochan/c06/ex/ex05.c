/* Chapter 06 Exercise 05 Program to reverse the digit of a number
 * Example -5678 to print 8765-
 * Vasanth 12 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;

	printf("enter negative number and to get reverse digits\n");
	scanf("%i",&num);
	printf("entered value is %d\n", num);
	printf("reversed value is ");

	do {
		int last_digit;

		last_digit = num % 10;
		num = num / 10;
		printf("%d", last_digit);

		if (num < 0) {
			num = -num;
		}
	} while (num != 0);
	printf("\n");

	return 0;
}
