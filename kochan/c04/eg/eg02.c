/* chapter 04 example 02 illustrate the use of various arithmetic operators
 * vasanth 21 january 2018
 */

#include <stdio.h>

int main(void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	result = a - b;
	printf("a - b = %i\n", result);

	result = b * c;
	printf("b * c = %i\n", result);

	result = a / c;
	printf("a / c = %i\n", result);

	result = a + b * c;
	printf("a + b * c = %i\n", result);

	result = a * b + c * d;
	printf("a * b + c * d = %i\n", result);

	return 0;
}

