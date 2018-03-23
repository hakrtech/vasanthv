/* chapter 11 example 02 program to illustrate character pointers
 * vasanth 19 march 2018
 */

#include <stdio.h>

int main(void)
{
	char c = 'Q';
	char *char_ptr = &c;	/* char_ptr point to variable c,
				   because variable c referenced by char_ptr*/

	printf("basic character pointers>\n");
	printf("character [ %c ] pointer char [ %c ]\n", c, *char_ptr);

	c = '/';
	printf("character [ %c ] pointer char [ %c ]\n", c, *char_ptr);

	*char_ptr = '@';
	printf("character [ %c ] pointer char [ %c ]\n", c, *char_ptr);

	return 0;
}

