/* chapter 13 exercise 06 define macro IS_UPPER_CASE and test if a character is a uppercase letter
 * vasanth 14 february 2018
 */

#include <stdio.h>

#include "libinput.h"

#define IS_UPPER_CASE(c) ( ((c) >= 'A') && ((c) <= 'Z') )

int main(void)
{
	char c;
	int d;

	printf("test a character is a uppercase letter>\n");
	c = input_char("enter a char: ");

	d = IS_UPPER_CASE(c);
	if (d) {
		printf("val = %d nonzero\nchar '%c' uppercase\n", d, c);
	} else {
		printf("val = %d\nchar '%c' not a uppercase\n", d, c);
	}

	return 0;
}

