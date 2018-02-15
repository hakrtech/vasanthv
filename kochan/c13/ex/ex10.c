/* chapter 13 exercise 10 program to use printint and printx macros
 * vasanth 15 february 2018
 */

#include <stdio.h>

#define printint(n) printf("%i\n", x ## n)
#define printx(var) printf(#var " = %d\n", var)

int main(void)
{
	int i;

	for (i = 1; i < 100; ++i) {
		printx(i);
	}

	return 0;
}

