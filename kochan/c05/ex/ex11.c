/* Chapter 05 Exercise 11 Program to sum of digits
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int sum;
	printf("Enter to get sum of number ");
	scanf("%i", &num);
	sum = 0;

	while (num != 0) {
		int initial;
		initial = num % 10;
		sum = sum + initial;
		printf("+%i", initial);
		num = num / 10;
	}
	printf(" = %i\n", sum);
	return 0;
}
