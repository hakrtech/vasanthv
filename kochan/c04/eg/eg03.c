/* chapter 04 example 03 more arithmetic expressions
 * vasanth 21 january 2018
 */

#include <stdio.h>

int main(void)
{
	int a = 25;
	int b = 2;
	float c = 25.0;
	float d = 2.0;

	printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
	printf("a / b * b = %i\n", a / b * b);
	printf("c / d * d = %f\n", c / d * d);
	printf("-a = %i\n", -a);

	return 0;
}

