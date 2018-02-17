/* chapter 09 example 04 version 02 revising the program to determine tomorrow's date
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
	bool isleap_yr;

	if ((d.yyyy % 4 == 0 && d.yyyy % 100 != 0) || d.yyyy % 400 == 0) {
		isleap_yr = true;
	} else {
		isleap_yr = false;
	}

	return isleap_yr;
}

int num_days(struct date d)
{
	int days;
	const int dd_mm[12] =		{ 31, 28, 31, 30, 31, 30,
					  31, 31, 30, 31, 30, 31
					};
	const int leap_yyyy_dd_mm[12] =	{ 31, 29, 31, 30, 31, 30,
					  31, 31, 30, 31, 30, 31
					};

	if (isleap_year(d) && d.mm == 2) {
		days = leap_yyyy_dd_mm[d.mm - 1];
	} else {
		days = dd_mm[d.mm - 1];
	}

	return days;
}

struct date date_update(struct date today)	/* function to calculate tomorrow's date */
{
	struct date tomorrow;

	if (today.dd != num_days(today)) {
		tomorrow = (struct date) { today.dd + 1, today.mm, today.yyyy };
	} else if (today.mm == 12) {
		tomorrow = (struct date) { 1, 1, today.yyyy + 1 };
	} else {
		tomorrow = (struct date) { 1, today.mm + 1, today.yyyy };
	}

	return tomorrow;
}

int main(void)
{
	struct date this_day, next_day;

	printf("enter today's date (dd mm yyyy): ");
	scanf("%i%i%i", &this_day.dd, &this_day.mm, &this_day.yyyy);

	next_day = date_update(this_day);
	printf("tomorrow's date is %i/%i/%i\n", next_day.dd, next_day.mm, next_day.yyyy);

	return 0;
}

