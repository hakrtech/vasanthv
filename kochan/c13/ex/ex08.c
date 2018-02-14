/* chapter 13 exercise 08 define macros IS_DIGIT, IS_SPECIAL and test a character digit, alphabetic or special character
 * vasanth 14 february 2018
 */

#include <stdio.h>
#include <stdlib.h>

#define IS_DIGIT(x)	 ( ((x) >= '0') && ((x) <= '9') )
#define IS_LOWER_CASE(c) ( ((c) >= 'a') && ((c) <= 'z') )
#define IS_UPPER_CASE(c) ( ((c) >= 'A') && ((c) <= 'Z') )
#define IS_ALPHABETIC(c) ( (IS_LOWER_CASE(c) ? (1) : (0)) || (IS_UPPER_CASE(c) ? (1) : (0)) )

#define IS_SPECIAL(x)	 ( (IS_DIGIT(x) ? (0) : (1)) && (IS_ALPHABETIC(x) ? (0) : (1)) )

void chk_macro(char c)
{
	int d;

	d = IS_DIGIT(c);
	if (d) {
		printf("val = %d nonzero\ncharacter digit '%c'\n", d, c);
		exit(1);
	}

	d = IS_SPECIAL(c);
	if (d) {
		printf("val = %d nonzero\nspecial character '%c'\n", d, c);
	} else {
		printf("val = %d\nalphabetic character '%c'\n", d, c);
	}

}

int main(void)
{
	char c;

	printf("test digit and special character>\n");
	printf("enter a char: ");
	scanf("%c", &c);
	printf(" %c\n", c);
	chk_macro(c);

	return 0;
}

