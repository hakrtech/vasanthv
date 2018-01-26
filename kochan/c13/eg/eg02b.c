/* chapter 13 example 02b program to convert an ascii character from lowercase to uppercase
 * vasanth 26 january 2018
 */

#include <stdio.h>

#define IS_LOWER_CASE(x) (((x) >= 'a') && ((x) <= 'z'))
#define TO_UPPER(x) (IS_LOWER_CASE(x) ? (x) - 'a' + 'A' : (x))
#define debugprintf(...) printf("DEBUG: " __VA_ARGS__);

void uppercase(char *s)
{
	while (*s != '\0') {
		*s = TO_UPPER(*s);
		++s;
		debugprintf("%s\n", s);
	}
}

int main(void)
{
	char str[100];

	printf("conversion of characters lowercase to upppercase>\n");
	printf("enter word: ");
	scanf("%s", str);

	uppercase(str);
	printf("uppercase: %s\n", str);	

	return 0;
}

