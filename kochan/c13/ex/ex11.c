/* chapter 13 exercise 11 program to include header file <ctype.h> and use isupper, isalpha and isdigit functions
 * also check your functions
 * vasanth 15 february 2018
 */

#include <stdio.h>
#include <ctype.h>

#include "libinput.h"

#define IS_DIGIT(x)	 ( ((x) >= '0') && ((x) <= '9') )
#define IS_LOWER_CASE(c) ( ((c) >= 'a') && ((c) <= 'z') )
#define IS_UPPER_CASE(c) ( ((c) >= 'A') && ((c) <= 'Z') )
#define IS_ALPHABETIC(c) ( (IS_LOWER_CASE(c)) || (IS_UPPER_CASE(c)) )

void chk_macro(char c)
{
	int d, e;

	d = isupper(c);
	e = IS_UPPER_CASE(c);
	if ((d && e) || (!d && !e)) {
		printf("matching\n");
	} else {
		printf("not matching chech macro\n");
	}

	d = isalpha(c);
	e = IS_ALPHABETIC(c);
	if (d && e) {
		printf("alphabetic char '%c'\n", c);
	} else if (!d && !e) {
		printf("not a alphabetic\n");
	} else {
		printf("check macro\n");
	}

	d = isdigit(c);
	e = IS_DIGIT(c);
	if (d && e) {
		printf("digit '%c'\n", c);
	} else if (!d && !e) {
		printf("not a digit\n");
	} else {
		printf("check macro\n");
	}
}

int main(void)
{
	char c;

	printf("compare your functions>\n");
	c = input_char("enter a char: ");
	chk_macro(c);

	return 0;
}

