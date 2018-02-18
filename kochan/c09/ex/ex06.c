/* chapter 09 exercise 06 program to find tomorrow date using own algorithm
 * vasanth 18 february 2018
 */

#include <stdio.h>

#include "libinput.h"

struct date
{
	int dd;
	int mm;
	int yyyy;
};

struct date date_update(struct date d)
{
	int dd_mm[12] =		{ 31, 28, 31, 30, 31, 30,
				  31, 31, 30, 31, 30, 31
				};

	if (d.dd == dd_mm[d.mm - 1]) {
		d.dd = 1;
		if (d.mm == 12) {
			d.mm = 1;
			++d.yyyy;
		} else {
			++d.mm;
		}
	} else {
		++d.dd;
	}

	return d;
}

int main(void)
{
	struct date input, r;

	printf("determine tomorrow's date>\n");
	printf("today date (dd:mm:yyyy)>\n");
	input.dd = input_decimal_int("dd: ");
	input.mm = input_decimal_int("mm: ");
	input.yyyy = input_decimal_int("yyyy: ");
	printf("today date %d/%d/%d\n", input.dd, input.mm, input.yyyy);

	r = date_update(input);
	printf("tomorrow date %d/%d/%d\n", r.dd, r.mm, r.yyyy);

	return 0;
}

