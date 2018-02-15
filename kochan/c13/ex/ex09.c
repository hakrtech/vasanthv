/* chapter 13 exercise 09 define macro ABSOLUTE_VALUE and evaluvate ABSOLUTE_VALUE(x + delta)
 * vasanth 14 february 2018
 */

#include <stdio.h>

#include "libinput.h"

#define ABSOLUTE_VALUE(x) ( ((x) < 0) ? -(x) : (x) )

int main(void)
{
	int a, b, delta;

	printf("test absolute value and delta>\n");
	a = input_decimal_int("enter val: ");

	b = ABSOLUTE_VALUE(a);
	printf("val = %d absolute val = %d\n", a, b);

	delta = input_decimal_int("enter delta val: ");
	b = ABSOLUTE_VALUE(a + delta);
	printf("val = %d delta val = %d absolute val + delta = %d\n", a, delta, b);

	return 0;
}

