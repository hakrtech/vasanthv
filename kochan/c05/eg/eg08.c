/* Chapter 05 Example 08 Program to reverse the digits
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;

	printf("enter the number and to get reverse number ");
	scanf("%i", &num);
	printf("entered number is %i\n", num);
	printf("reversed number is ");

	while (num != 0) {
		int digit;

		digit = num % 10;
		printf("%i", digit);
		num = num / 10;
	}
	printf("\n");

	return 0;
}
