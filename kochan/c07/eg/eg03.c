/* Chapter 07 Example 03 Program to generate the first 20 Fibonacci numbers
 * Vasanth 28 October 2017
 */

#include <stdio.h>

int main(void)
{
	int fibonacci[20];
	int i;

	printf("first 20 fibonacci numbers>\n");

	fibonacci[0] = 0;		//by definition
	fibonacci[1] = 1;		//ditto

	for (i = 2; i < 20; ++i) {
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	}

	for (i = 0; i < 20; ++i) {
		printf("%i\n", fibonacci[i]);
	}

	return 0;
}