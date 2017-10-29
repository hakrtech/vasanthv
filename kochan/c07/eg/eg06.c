/* Chapter 07 Example 06 Introducing character arrays
 * Vasanth 28 October 2017
 */

#include <stdio.h>

int main(void)
{
	char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
	int i;

	printf("print sample array characters>\n");

	for (i = 0; i < 6; ++i) {
		printf("%c", word[i]);
	}
	printf("\n");

	return 0;
}
