/* chapter 15 example 03 header file for working with date
 * vasanth 19 january 2018
 */

#include <stdbool.h>

// enumerated type
enum kMonth { January = 1, February, March, April, May, June,
	      July, August, September, October, Nomvenber, December
	    };
enum kDay { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday };

struct date
{
	enum kMonth month;
	enum kDay   day;
	int	    year;
};

// date type
typedef struct date Date;

// function that work with dates
Date date_update(Date today);
int no_of_days(Date d);
bool isleap_year(Date d);

// macro to set a date in a structure
#define set_date(s, mm, dd, yy) s = (Date) {mm, dd, yy}

// external variable reference
extern Date todays_date;

