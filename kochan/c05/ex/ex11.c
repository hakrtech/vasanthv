/* Chapter 05 Exercise 11 Program to claculate the sum of digits
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int sum;

	printf("enter the number and it is calculated sum of digits> ");
	scanf("%i", &num);
	printf("entered number is %d\n", num);

	sum = 0;

	while (num != 0) {
		int initial;

		initial = num % 10;
		sum = sum + initial;
		num = num / 10;

		printf("+%i", initial);
	}
	printf(" = %i\n", sum);

	return 0;
}
