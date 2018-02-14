/* chapter 13 exercise 07 define macro IS_ALPHABETIC and test if a character is an alphabetic character
 * vasanth 14 february 2018
 */

#include <stdio.h>

#include "libinput.h"

#define IS_LOWER_CASE(c) ( ((c) >= 'a') && ((c) <= 'z') )
#define IS_UPPER_CASE(c) ( ((c) >= 'A') && ((c) <= 'Z') )
#define IS_ALPHABETIC(c) ( (IS_LOWER_CASE(c) ? (1) : (0)) || (IS_UPPER_CASE(c) ? (1) : (0)) )

int main(void)
{
	char c;
	int d;

	printf("test a character is an alphabeti character>\n");
	c = input_char("enter a char: ");

	d = IS_ALPHABETIC(c);
	if (d) {
		printf("val = %d nonzero\nchar '%c' alphabetic\n", d, c);
	} else {
		printf("val = %d\nchar '%c' not a alphabetic\n", d, c);
	}

	return 0;
}

