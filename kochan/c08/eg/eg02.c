/* Chapter 8 Examle 02 Calling functions
 * vasanth 01 October 2017
 */

#include <stdio.h>

void print_msg(void)
{
	printf("programming is fun\n");
}

int main(void)
{
	print_msg();
	print_msg();
	print_msg();

	return 0;
}

