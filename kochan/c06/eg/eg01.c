/* Chapter 06 Example 01 Program to absolute value of an integer
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;

	printf("enter any number ");
	scanf("%i", &num);
	printf("entered number is %i\n", num);

	if (num < 0) {
		num = -num;
	}
	printf("the absolute value is %i\n", num);

	return 0;
}

