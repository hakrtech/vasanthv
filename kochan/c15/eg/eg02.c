/* chapter 15 example 02 communication between different modules
 * vasanth 18 january 2018
 */

#include <stdio.h>

double x;
static double result;

static void do_sqr(void)
{
	double sqr(void);

	x = 2.0;
	result = sqr();
}

int main(void)
{
	do_sqr();

	printf("sqr(2.0) = %g\n", result);

	return 0;
}

