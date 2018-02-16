/* chapter 09 example 03 revising the program to determine tomorrow's date
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

	if (isleap_year(d) == true && d.month == 2) {
		days = 29;
	} else {
		days = days_month[d.month - 1];
	}

	return days;
}

int main(void)
{
	struct date today, tomorrow;

	printf("enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);

	if (today.day != num_days(today)) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if (today.month == 12) { 		/* end of year */
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	} else {					/* end of month */
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	printf("tomorrow's date is %i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);

	return 0;
}

