/* chapter 09 exercise 05 program to develop clockkeeper and update date and time structure
 * vasanth 18 february 2018
 */

#include <stdio.h>

struct date
{
	int dd;
	int mm;
	int yyyy;
};

struct time
{
	int hr;
	int min;
	int sec;
};

struct dt
{
	struct date sdate;
	struct time stime;
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

struct time time_update(struct time ut)
{
	if (ut.sec == 60) {
		ut.sec = 0;
		++ut.min;
	}
	if (ut.min == 60) {
		ut.min = 0;
		++ut.hr;
	}
	if (ut.hr == 24) {
		ut.hr = 0;
	}

	return ut;
}

struct dt clockkeeper(struct dt any_dt)
{
	struct time u_time;
	struct date u_date;

	u_time = time_update(any_dt.stime);

	if (!u_time.hr && !u_time.min && !u_time.sec) {
		u_date = date_update(any_dt.sdate);
	} else {
		u_date = any_dt.sdate;
	}

	any_dt = (struct dt) { u_date, u_time };

	return any_dt;
}

int main(void)
{
	struct dt u_dt;
	struct dt a_dt = { { 18, 02, 2018 }, { 23, 59, 60 } };

	printf("date (dd:mm:yyyy): %d/%d/%d\ntime (hh:mm:ss): %d:%d:%d\n", a_dt.sdate.dd, a_dt.sdate.mm, a_dt.sdate.yyyy,
									   a_dt.stime.hr, a_dt.stime.min, a_dt.stime.sec);
	u_dt = clockkeeper(a_dt);
	printf("updated date (dd:mm:yyyy): %d/%d/%d\ntime (hh:mm:ss): %d:%d:%d\n", u_dt.sdate.dd, u_dt.sdate.mm, u_dt.sdate.yyyy,
										   u_dt.stime.hr, u_dt.stime.min, u_dt.stime.sec);

	return 0;
}

