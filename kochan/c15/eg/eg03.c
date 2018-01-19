/* chapter 15 example 03 calculate tomorrow's date
 * vasanth 19 january 2018
 */

#include <stdio.h>

#include "date.h"

Date date_update(Date today)
{
	Date tomorrow;

	if (today.day != no_of_days(today))
		set_date (tomorrow, today.month, today.day + 1, today.year);
	else if (today.month == December) // end of year
		set_date(tomorrow, January, 1, today.year + 1); // end of month
	else
		set_date(tomorrow, today.month + 1, 1, today.year);

	return tomorrow;
}

int no_of_days(Date d)
{
	int days;
	const int a[12] = { 31, 28, 31, 30, 31, 30, 
			    31, 31, 30, 31, 30, 31
			  };

	if (isleap_year(d) == true && d.month == 2)
		days = 29;
	else
		days = a[d.month - 1];

	return days;
}

bool isleap_year(Date d)
{
	bool leap_yrflag;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		leap_yrflag = true; // it's a leap year
	else
		leap_yrflag = false; // not a leap year

	return leap_yrflag;
}

int main(void)
{
	return 0;
}

