/* chapter 04 exercise 04 program to converts fahrenheit(F) into degrees celsius(C)
 * formula C = (F - 32) / 1.8
 * vasanth 22 january 2018
 */

#include <stdio.h>

#include "libinput.h"

int main(void)
{
	float f = 27, c;

	f = input_decimal_int("enter fahrenheit: ");
	c = (f - 32) / 1.8;

	printf("fahrenheit %f converted celsius %f\n", f, c);

	return 0;
}

