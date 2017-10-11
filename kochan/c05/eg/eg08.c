/* Chapter 05 Example 08 Program to reverse the digits
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	printf("give number get reverse number\n");
	scanf("%i", &num);

	while (num != 0) {
		int digit;
		digit = num % 10;
		printf("%i", digit);
		num = num / 10;
	}
	printf("\n");
	return 0;
}
