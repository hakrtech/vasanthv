/* chapter 10 exercise 13 program to convert a string into equivalent uppercase character
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <assert.h>

#define IS_LOWERCASE(c) ((c >= 'a') && (c <= 'z'))

void string_to_upper(char s[])
{
	char c;
	int i = 0;

	while (s[i] != '\0') {

		c = s[i];
		if (IS_LOWERCASE(c)) {
			c = c - 'a' + 'A';	/* ascii decimal character set calculation
						   eg. let c = 'f'
						   	   c = 'f' - 'a'+ 'A'
							   c = 102 - 97 + 65
							   c = 70 (ascii decimal 70 == 'F')
							   c = 'F' */
			s[i] = c;
		}
		++i;
	}
	assert(s[i] == '\0');
}

int main(void)
{
	char source[101];

	printf("convert a string into equivalent uppercase character>\n");
	printf("enter a string: ");
	scanf("%s", source);
	printf("string [ %s ]\n", source);

	string_to_upper(source);
	printf("string with equivalent uppercase [ %s ]\n", source);

	return 0;
}

