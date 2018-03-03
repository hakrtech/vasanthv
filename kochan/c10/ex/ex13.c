/* chapter 10 exercise 13 program to convert a string into equivalent uppercase character
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define IS_LOWERCASE(c) ((c >= 'a') && (c <= 'z'))

void string_to_upper(char s[])
{
	char c;
	int i = 0;

	while (s[i] != '\0') {

		c = s[i];
		if (IS_LOWERCASE(c)) {
			c = c - 'a' + 'A';
			s[i] = c;
		}
		++i;
	}
	assert(s[i] == '\0');
}

int main(void)
{
	char c[101];

	printf("convert a string to equivalent uppercase character>\n");
	printf("enter a string: ");
	scanf("%s", c);
	printf("string [ %s ]\n", c);

	string_to_upper(c);
	printf("string with equivalent uppercase [ %s ]\n", c);

	return 0;
}

