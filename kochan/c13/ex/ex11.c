/* chapter 13 exercise 11 program to include header file <ctype.h> and use isupper, isalpha and isdigit functions
 * also check your functions
 * vasanth 15 february 2018
 */

#include <stdio.h>
#include <ctype.h>
#include <assert.h>

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
	assert((d && e) || (!d && !e));
	printf("matching\n");

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

void chk_macro_using_decimal(void)
{
	int a, b, i;

	printf("chk macro using decimal 0 to 127>\n");

	for (i = 0; i <= 127; i++) {
		a = isalpha(i);
		b = IS_ALPHABETIC(i);
		assert((a && b) || (!a && !b));
		printf("matching i = %d [%d] and '%d'\n", i, a, b);
	}
}

int main(void)
{
	char c;

	printf("compare your functions>\n");
	c = input_char("enter a char: ");
	chk_macro(c);
	chk_macro_using_decimal();

	return 0;
}

