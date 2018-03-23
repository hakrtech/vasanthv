/* chapter 11 example 01 program to illustrate pointer
 * vasanth 19 march 2018
 */

#include <stdio.h>

int main(void)
{
	int digit, num = 10;
	int *ptr;

	ptr = &num;
	digit = *ptr;

	printf("pointer to an interger>\n");
	printf("num = %d pointer digit = %d\n", num, digit);

	return 0;
}

