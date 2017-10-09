/* Chapter 8 Example 6 Program to find the gratest common divisor of tow nonnegative integer values and to return the result
 * Vasanth 01 October 2017
 */

#include <stdio.h>

int main(void)
{
	int result;
	int gcd();

	result = gcd(150,35);
	printf("The GCD of 150 and 35 is %i\n", result);

	result = gcd(1024, 504);
	printf("The GCD of 1024 and 504 is %i\n", result);

	result = gcd(864, 666);
	printf("The GCD of 864 and 666 is %i\n", result);

	return 0;
}

int gcd(int x, int y)
{
	int temp;

	while(y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}

	return x;
}
