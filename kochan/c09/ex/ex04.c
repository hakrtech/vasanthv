/* chapter 09 exercise 04 program to display the day of week(eg. wednesday) in a particular date falls
 * vasanth 18 february 2018
 */

#include <stdio.h>

#include "libinput.h"
#include "libarray.h"

struct date
{
	int dd;
	int mm;
	int yyyy;
};

int elapsed_val(struct date d)
{
	int result;
	int ef, eg;

	if (d.mm <= 2) {					/* formula conditions */
		ef = d.yyyy - 1;
		eg = d.mm + 13;
	} else {
		ef = d.yyyy;
		eg = d.mm + 1;
	}

	result = ((1461 * ef) / 4) + ((153 * eg) / 5) + d.dd;	/* elapsed day value finding formula */

	return result;
}

int week_of_day(struct date anyday)
{
	int ed_val, wd;

	ed_val = elapsed_val(anyday);
	wd = ed_val - 621049;					/* week of day calculation*/
	wd = wd % 7;

	return wd;
}

int main(void)
{
	struct week
	{
		char word[100];
		int number;
	};
	struct date input;
	int r, n;
	struct week day[] = { { {"sunday..."}, 0 }, { {"monday..."}, 1 },
			      { {"tuesday.."}, 2 }, { {"wednesday"}, 3 },
			      { {"thursday."}, 4 }, { {"friday..."}, 5 },
			      { {"saturday."}, 6 }
			    };

	printf("display the day of week in paritcular date falls>\n");
	printf("any date (dd:mm:yyyy)>\n");
	input.dd = input_decimal_int("dd: ");
	input.mm = input_decimal_int("mm: ");
	input.yyyy = input_decimal_int("yyyy: ");
	printf("date %d/%d/%d\n", input.dd, input.mm, input.yyyy);

	r = week_of_day(input);
	n = 9;
	printf("week of day: %d\n", day[r].number);
	arc_print(day[r].word, n, "day");

	return 0;
}

