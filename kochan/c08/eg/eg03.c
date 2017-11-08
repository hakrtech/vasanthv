/* Chapter 8 Example 03 more on calling functions
 * vasanth 01 October 2017
 */

#include <stdio.h>

#define STR "programming is fun !"

void print_msg(char c)
{	
	printf("%c ", c);
}

int main(void)
{
	int i = 0;
	
	while (i < 20) {
		print_msg(STR[i]);
		++i;
	}
	printf("\n");

	return 0;
}

