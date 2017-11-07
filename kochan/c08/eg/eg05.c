/* Chapter 08 Example 05 Program to find the greatest common divisor of two non-negative integer values
 * Vasanth 01 October 2017
 */

#include <stdio.h>

void gcd(int a, int b)
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

	gcd(150, 35);
	gcd(1026, 405);
	gcd(5, 7);
	gcd(33, 88);
	gcd(95, 35);

	return 0;
}

