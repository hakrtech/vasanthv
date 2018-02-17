/* chapter 09 example 03 revising the program to determine tomorrow's date
 * vasanth 16 february 2018
 */

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int dd;
	int mm;
	int yyyy;
};

bool isleap_year(struct date d)
{
	bool is_leap_yr;

	if ((d.yyyy % 4 == 0 && d.yyyy % 100 != 0) || d.yyyy % 400 == 0) {
		is_leap_yr = true;
	} else {
		is_leap_yr = false;
	}

	return is_leap_yr;
}

int num_days(struct date d)
{
	int days;
	const int dd_mm[12] =		{ 31, 28, 31, 30, 31, 30,
					  31, 31, 30, 31, 30, 31
					};
	const int leap_yr_dd_mm[12] =	{ 31, 29, 31, 30, 31, 30,
					  31, 31, 30, 31, 30, 31
					};


	if (isleap_year(d) == true && d.mm == 2) {
		days = leap_yr_dd_mm[d.mm - 1];
	} else {
		days = dd_mm[d.mm - 1];
	}

	return days;
}

int main(void)
{
	struct date today, tomorrow;

	printf("enter today's date (dd mm yyyy): ");
	scanf("%i%i%i", &today.dd, &today.mm, &today.yyyy);

	if (today.dd != num_days(today)) {
		tomorrow.dd = today.dd + 1;
		tomorrow.mm = today.mm;
		tomorrow.yyyy = today.yyyy;
	} else if (today.mm == 12) { 		/* end of year */
		tomorrow.dd = 1;
		tomorrow.mm = 1;
		tomorrow.yyyy = today.yyyy + 1;
	} else {					/* end of month */
		tomorrow.dd = 1;
		tomorrow.mm = today.mm + 1;
		tomorrow.yyyy = today.yyyy;
	}

	printf("tomorrow's date is %i/%i/%i\n", tomorrow.dd, tomorrow.mm, tomorrow.yyyy);

	return 0;
}

