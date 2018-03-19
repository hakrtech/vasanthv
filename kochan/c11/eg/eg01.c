/* chapter 11 example 01 program to illustrate pointer
 * vasanth 19 march 2018
 */

#include <stdio.h>

int main(void)
{
	int digit, count = 10;
	int *val;

	val = &count;
	digit = *val;

	printf("count = %d digit = %d\n", count, digit);

	return 0;
}

