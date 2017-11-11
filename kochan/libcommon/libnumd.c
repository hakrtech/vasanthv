
#include "libnumd.h"

double numd_absd(double d) // TODO
{
	if (d < 0.0) {
		d = -d;
	}

	return d;
}

double numd_sqrtd(double d, double accuracy) // TODO
{
	double guess;

	guess = 1.0;
	while(numd_absd(guess * guess - d) >= accuracy) {
		guess = (d / guess + guess) / 2.0;
	}

	return guess;
}

double numd_sqrtd1(double d)
{
	double accuracy = 0.000001;

	return numd_sqrtd(d, accuracy);
}

