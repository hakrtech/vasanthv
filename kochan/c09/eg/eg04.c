/* chapter 09 example 04 version 02 revising the program to determine tomorrow's date
 * vasanth 16 february 2018
 */

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

bool isleap_year(struct date d)
{
	bool leap_yr;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
		leap_yr = true;
	} else {
		leap_yr = false;
	}

	return leap_yr;
}

int num_days(struct date d)
{
	int days;
	const int days_month[12] = { 31, 28, 31, 30, 31, 30,
				     31, 31, 30, 31, 30, 31
				   };

	if (isleap_year(d) && d.month == 2) {
		days = 29;
	} else {
		days = days_month[d.month - 1];
	}

	return days;
}

struct date date_update(struct date today)	/* function to calculate tomorrow's date */
{
	struct date tomorrow;

	if (today.day != num_days(today)) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if (today.month == 12) {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	} else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	return tomorrow;
}

int main(void)
{
	struct date this_day, next_day;

	printf("enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &this_day.month, &this_day.day, &this_day.year);

	next_day = date_update(this_day);
	printf("tomorrow's date is %i/%i/%i\n", next_day.month, next_day.day, next_day.year);

	return 0;
}

