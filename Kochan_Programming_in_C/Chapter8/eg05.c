/* Chapter 8 Example 5 Program to find the greatest common divisor of two nonnegative integer values
 * Vasanth 01 October 2017
 */

#include <stdio.h>

int main(void)
{
	void gcd();

	gcd(150, 35);
	gcd(1026, 405);
	gcd(999, 44);

	return 0;
}

void gcd(int a, int b)
{
	int temp;

	printf("The GCD of %i and %i is ", a, b);

	while(b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	printf("%i\n", a);
}
