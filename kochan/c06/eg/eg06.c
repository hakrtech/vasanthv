/* Chapter 06 Example 06 Program to implement the sign function
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int sign;

	printf("enter number to check the number sign> ");
	scanf("%i", &num);
	printf("entered number is %i\n", num);

	if (num < 0) {
		sign = -1;
	} else if (num == 0) {
		sign = 0;
	} else {
		sign = 1;
	}

	printf("sign = %i\n", sign);

	return 0;
}
