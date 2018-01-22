/* chapter 04 exercise 08 program to round off largest even multiple
 * formula: next_multiple = i + j - i % j
 * vasanth 22 january 2018
 */

#include <stdio.h>

#include "libinput.h"

int main(void)
{
	int x, y, result;

	x = input_decimal_int("enter x: ");
	y = input_decimal_int("enter y: ");
	result = (x + y) - (x % y);

	printf("largest even multiple: %d\n", result);

	return 0;
}

