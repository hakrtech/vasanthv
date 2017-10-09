/* Chapter 8 Example3 More on calling function
 * vasanth 01 October 2017
 */

#include <stdio.h>

void printMessage(void)
{
	printf("Programming is fun.\n");
}

int main(void)
{
	int i;

	for(i=0; i<10; ++i)
	{
		printMessage();
	}

	return 0;
}
