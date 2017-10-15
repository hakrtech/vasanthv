/* Chapter 06 Example 05 Program to determines if a year is a leap year
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	int year;
	int rem_four;
	int rem_hundred;
	int rem_fourhundred;

	printf("enter the year to be tested> ");
	scanf("%i", &year);
	printf("entered year is %i\n", year);

	rem_four = year % 4;		/* remainder of the year four */
	rem_hundred = year % 100;	/* remainder of the year hundred */
	rem_fourhundred = year % 400;	/* remainder of the year fourhundred */

	if ((rem_four == 0 && rem_hundred != 0) || rem_fourhundred == 0) {
		printf("it's a leap year\n");
	} else {
		printf("nope, it's not a leap year\n");
	}

	return 0;
}
