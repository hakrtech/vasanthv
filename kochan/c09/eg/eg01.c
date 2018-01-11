/* chapter 09 example 01 program to illustrate a structure
 * vasanth 10 january 2018
 */

#include <stdio.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today;

	today.month = 1;
	today.day = 10;
	today.year = 2018 % 100;

	printf("today date %i/%i/%.2i.\n", today.month, today.day, today.year);

	return 0;
}

