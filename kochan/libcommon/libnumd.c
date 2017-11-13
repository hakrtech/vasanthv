
#include <assert.h>

#include "libnumd.h"

double numd_absd(double d) // DONE
{
	if (d < 0.0) {
		d = -d;
	}

	return d;
}

double numd_sqrtd(double d, double accuracy) // DONE
{
	double guess;

	assert(d >= 0.0);
	assert(accuracy > 0.0);

	guess = 1.0;
	while (numd_absd(guess * guess - d) >= accuracy) {
		guess = (d / guess + guess) / 2.0;
	}

	return guess;
}

double numd_sqrtd1(double d) // DONE
{
	double accuracy = 0.000001;

	assert(d >= 0.0);

	return numd_sqrtd(d, accuracy);
}

