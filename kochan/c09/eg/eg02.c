/* chapter 09 example 02 program to determine tomorrow's date
 * vasanth 10 january 2018
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int dd;
		int mm;
		int yyyy;
	};

	struct date today, tomorrow;
	int d;
	const int dd_mm[12] = { 31, 28, 31, 30, 31, 30,
				31, 31, 30, 31, 30, 31
			      };

	printf("today date dd:mm:yyyy > ");
	d = scanf("%d%d%d", &today.dd, &today.mm, &today.yyyy);
	if (d != 3) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	printf("%d/%d/%d\n", today.dd, today.mm, today.yyyy);

	if (today.dd != dd_mm[today.mm-1]) {
		tomorrow.dd = today.dd + 1;
		tomorrow.mm = today.mm;
		tomorrow.yyyy = today.yyyy;
       } else if (today.mm == 12) {
	       tomorrow.dd = 1;
	       tomorrow.mm = 1;
	       tomorrow.yyyy = today.yyyy + 1;
        } else {
               tomorrow.dd = 1;
	       tomorrow.mm = today.mm + 1;
	       tomorrow.yyyy = today.yyyy;
        }

	printf("tomorrow date %d/%d/%d\n", tomorrow.dd, tomorrow.mm, tomorrow.yyyy);

	return 0;
}

