/* Chapter 06 Example 07 Program to categorize a single character that is entered that is terminal
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	char c;

	printf("enter a single character for check> ");
	scanf("%c", &c);
	printf("entered charater %c\n", c);

	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'B') ) {
		printf("it's an alphabetic character\n");
	} else if ( (c >= '0') && (c <= '9') ) {
		printf("it's a digit\n");
	} else {
		printf("it's a special character\n");
	}

	return 0;
}
