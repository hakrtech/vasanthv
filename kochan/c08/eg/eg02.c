/* Chapter 8 Examle2 Calling function
 * vasanth 01 October 2017
 */

#include <stdio.h>

void printMessage(void)
{
	printf("Programming is fun.\n");
}

int main(void)
{
	printMessage();
	printMessage();
	printMessage();

	return 0;
}
