/* chapter 09 example 06 program to illustrate arrays of structures
 * vasanth 16 february 2018
 */

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time time_update(struct time now)
{
	++now.seconds;
	if (now.seconds == 60) {
		now.seconds = 0;
		++now.minutes;

		if (now.minutes == 60) {
			now.minutes = 0;
			++now.hour;

			if (now.hour == 24) {
				now.hour = 0;
			}
		}
	}

	return now;
}

int main(void)
{
	struct time test_times[5] = { { 11, 59, 59 }, { 12, 00, 00 }, { 1, 29, 59 },
				    { 23, 59, 59 }, { 19, 12, 27 }
				  };
	int i;

	for (i = 0; i < 5; ++i) {
		printf("time is %.2i:%.2i:%.2i ", test_times[i].hour, test_times[i].minutes, test_times[i].seconds);

		test_times[i] = time_update(test_times[i]);
		printf("...one second %.2i:%.2i:%.2i\n", test_times[i].hour, test_times[i].minutes, test_times[i].seconds);
	}

	return 0;
}

