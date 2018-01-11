/* chapter 09 example 02 program to determine tomorrow's date
 * vasanth 10 january 2018
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today, tomorrow;
	int d;
	int m[12] = { 31, 28, 31, 30, 31, 30,
		      31, 31, 30, 31, 30, 31
		    };

	printf("today date mm:dd:yyyy > ");
	d = scanf("%d%d%d", &today.month, &today.day, &today.year);
	if (d != 3) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	printf("%d/%d/%d\n", today.month, today.day, today.year);

	if (today.day != m[today.month-1]) {
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

	printf("tomorrow date %d/%d/%d\n", tomorrow.month, tomorrow.day, tomorrow.year);
}

