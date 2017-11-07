/* Chapter 08 Example 05 Program to find the greatest common divisor of two non-negative integer values
 * Vasanth 01 October 2017
 */

#include <stdio.h>

void common_div(int a, int b)
{
	int temp;
	
	printf("%i and %i greatest common divisor> ", a, b);

	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("%i\n", a);
}

int main(void)
{

	common_div(150, 35);
	common_div(1026, 405);
	common_div(5, 7);
	common_div(33, 88);
	common_div(95, 35);

	return 0;
}

