/* chapter 13 exercise 06 define macro IS_UPPER_CASE and test if a character is a uppercase letter
 * vasanth 14 february 2018
 */

#include <stdio.h>

#define IS_UPPER_CASE(c) ( ((c) >= 'A') && ((c) <= 'Z') )

int main(void)
{
	char c;
	int d;

	printf("test a character is a uppercase letter>\n");
	printf("enter a character: ");
	scanf("%c", &c);
	printf(" %c\n", c);

	d = IS_UPPER_CASE(c);
	if (d) {
		printf("value = %d nonzero\ncharacter '%c' uppercase letter\n", d, c);
	} else {
		printf("value = %d\ncharacter '%c' not a uppercase letter\n", d, c);
	}

	return 0;
}

