/* chapter 09 exercise 03 program to find elapsed time between two times structure
 * vasanth 18 february 2018
 */

#include <stdio.h>

struct time
{
	int hh;
	int mm;
	int ss;
};

struct time elapsed_time(struct time fst_time, struct time snd_time)
{
	int hr, min, sec;
	struct time et; 

	hr = snd_time.hh - fst_time.hh;
	min = snd_time.mm - fst_time.mm;
	sec = snd_time.ss - fst_time.ss;

	if (sec < 0) {
		et.ss = sec + 60;
		min = min - 1;
	} else {
		et.ss = sec;
	}
	if (min < 0) {
		et.mm = min + 60;
		hr = hr - 1;
	} else {
		et.mm = min;
	}
	et.hh = hr;

	return et;
}

int main(void)
{
	struct time t1, t2, rt;

	printf("elapsed time between two times>\n");

	t1 = (struct time) { 3, 45, 15 };
	t2 = (struct time) { 9, 44, 03 };
	printf("times (hh:mm:ss) %d:%d:%d and %d:%d:%d \n", t1.hh, t1.mm, t1.ss, t2.hh, t2.mm, t2.ss);

	rt = elapsed_time(t1, t2);
	printf("elapsed time: %d hours %d minutes %d seconds\n", rt.hh, rt.mm, rt.ss);

	return 0;
}

