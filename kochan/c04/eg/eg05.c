/* chapter 04 example 05 basic conversions
 * vasanth 21 january 2018
 */

#include <stdio.h>

int main(void)
{
	float x = 123.125, y;
	int a, b = -150;

	a = x;
	printf("%f assigned to an int produces %i\n", x, a);

	x = b;
	printf("%i assigned to a float produces %f\n", b, x);

	x = b / 100;
	printf("%i divided by 100 produces %f\n", b, x);

	y = b / 100.0;
	printf("%i divided by 100.0 produces %f\n", b, y);

	y = (float) b / 100; // type cast operator
	printf("(float) %i divided by 100 produces %f\n", b, y);

	return 0;
}

