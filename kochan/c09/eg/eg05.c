/* chapter 09 example 05 program to update the time by one second
 * vasanth 16 february 2018
 */

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time time_update(struct time now)	/* function to update the time by one second */
{
	++now.seconds;
	if (now.seconds == 60) {		/* next minute */
		now.seconds = 0;
		++now.minutes;

		if (now.minutes == 60) {	/* next hour */
			now.minutes = 0;
			++now.hour;

			if (now.hour == 24) {	/* midnight */
				now.hour = 0;
			}
		}
	}

	return now;
}

int main(void)
{
	struct time crnt_time, next_time;

	printf("enter the time (hh:mm:ss): ");
	scanf("%i%i%i", &crnt_time.hour, &crnt_time.minutes, &crnt_time.seconds);

	next_time = time_update(crnt_time);
	printf("update time is %.2i:%.2i:%.2i\n", next_time.hour, next_time.minutes, next_time.seconds);

	return 0;
}

