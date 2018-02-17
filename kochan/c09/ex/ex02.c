/* chapter 09 exercise 02 program to calculate the number of elapsed days between two dates
 * vasanth 17 february 2018
 */

#include <stdio.h>

#include "libinput.h"

struct date
{
	int dd;
	int mm;
	int yyyy;
};

int ef(int year, int month)
{
	int yr;

	if (month <= 2) {
		yr = year - 1;
	} else {
		yr = year;
	}

	return yr;
}

int eg(int month)
{
	int m;

	if (month <= 2) {
		m = month + 13;
	} else {
		m = month + 1;
	}

	return m;
}

int elapsed_val(struct date d)
{
	int result;
	int f, g;

	f = ef(d.yyyy, d.mm);
	g = eg(d.mm);
	result = ((1461 * f) / 4) + ((153 * g) / 5) + d.dd;	/* elapsed day value finding formula */ 

#define DEBUG 0
	if (DEBUG) {
		printf("chk_result %d\n", result);
	}

	return result;
}

void io_process(void)
{
	struct date fst, snd;
	int first_val, second_val, e_days;

	printf("first date (dd mm yyyy)>\n");
	fst.dd = input_decimal_int("dd: ");
	fst.mm = input_decimal_int("mm: ");
	fst.yyyy = input_decimal_int("yyyy: ");

	printf("second date (dd mm yyyy)>\n");
	snd.dd = input_decimal_int("dd: ");
	snd.mm = input_decimal_int("mm: ");
	snd.yyyy = input_decimal_int("yyyy: ");
	printf("two dates %d/%d/%d - %d/%d/%d\n", fst.dd, fst.mm, fst.yyyy, snd.dd, snd.mm, snd.yyyy);

	first_val = elapsed_val(fst);
	second_val = elapsed_val(snd);
	e_days = second_val - first_val;
	printf("number of elapsed days %d\n", e_days);
}

int main(void)
{
	printf("elapsed days between two dates>\n");
	io_process();

	return 0;
}

