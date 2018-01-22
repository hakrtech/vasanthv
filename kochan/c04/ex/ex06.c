/* chapter 04 exercise 06 program to evaluate the polynomial
 * given 3x^3 - 5x^2 + 6
 * vasanth 22 january 2018
 */

#include <stdio.h>

#include "libinput.h"

int main(void)
{
	float x, result;

	x = input_decimal_float("enter x value: ");
	result = 3*(x*x*x) - 5*(x*x) + 6;

	printf("polynomial (3x^3 - 5x^2 + 6)\n x = %f\n result = %f\n", x, result);

	return 0;
}

