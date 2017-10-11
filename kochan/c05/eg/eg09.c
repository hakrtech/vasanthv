/* Chapter 05 Example 09 Program to reverse the digit using do while loop
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	printf("give number get revese number\n");
	scanf("%i", &num);

	do {
		int digit;
		digit = num % 10;
		printf("%i", digit);
		num = num / 10;
	} while (num != 0);
	printf("\n");
	return 0;
}
