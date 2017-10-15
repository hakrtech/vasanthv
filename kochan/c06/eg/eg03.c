/* Chapter 06 Example 03 Program to if a number is even or add
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num_test;
	int remainder;

	printf("enter your number to be tested> " );
	scanf("%i", &num_test);
	printf("entered number is %i\n", num_test);

	remainder = num_test % 2;

	if (remainder == 0) {
		printf("the number is even \n");
	}
	if (remainder != 0) {
		printf("the number is odd \n");
	}

	return 0;
}
