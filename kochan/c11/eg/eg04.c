/* chapter 11 exapmle 04 program to illustrate  structure pointers
 * vasanth 20 march 2018
 */

#include <stdio.h>

int main(void)
{
	struct date
	{
		int day;
		int month;
		int year;
	};

	struct date today, *date_ptr;

	date_ptr = &today;
	date_ptr->day = 20;
	date_ptr->month = 03;
	date_ptr->year = 2018;

	printf("structure pointers>\n");
	printf("date %d/%d/%d\n", date_ptr->day, date_ptr->month, date_ptr->year);

	return 0;
}

