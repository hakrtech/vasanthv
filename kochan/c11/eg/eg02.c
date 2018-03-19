/* chapter 11 example 02 program to illustrate character pointers
 * vasanth 19 march 2018
 */

#include <stdio.h>

int main(void)
{
	char c = 'Q';
	char *char_val = &c;

	printf("basic character pointers>\n");
	printf("character [ %c ] pointer value [ %c ]\n", c, *char_val);

	c = '/';
	printf("character [ %c ] pointer value [ %c ]\n", c, *char_val);

	*char_val = '@';
	printf("character [ %c ] pointer value [ %c ]\n", c, *char_val);

	return 0;
}

