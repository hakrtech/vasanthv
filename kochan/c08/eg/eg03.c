/* Chapter 8 Example 03 more on calling functions
 * vasanth 01 October 2017
 */

#include <stdio.h>

#define CHR "programming is fun !"

void print_msg(char symbol)
{	
	printf("%c ", symbol);
}

int main(void)
{
	int count = 0;
	
	while(count < 20) {
		print_msg(CHR[count]);
		++count;
	}
	printf("\n");

	return 0;
}

