/* chapter 09 example 01 program to illustrate a structure
 * vasanth 10 january 2018
 */

#include <stdio.h>

int main(void)
{
	struct date
	{
		int dd;
		int mm;
		int yyyy;
	};

	struct date today;

	today.dd = 17;
	today.mm = 2;
	today.yyyy = 2018 % 100;

	printf("today date %i/%i/%.2i.\n", today.dd, today.mm, today.yyyy);

	return 0;
}

