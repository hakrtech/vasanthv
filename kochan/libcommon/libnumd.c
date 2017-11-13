
#include <assert.h>

#include "libnumd.h"

double numd_absd(double d) // OK
{
	if (d < 0.0) {
		d = -d;
	}

	return d;
}

double numd_sqrtd(double d, double accuracy) // OKOK
{
	double guess;

	assert(d >= 0.0);
	assert(accuracy > 0.0);

	guess = 1.0;
	while (numd_absd(guess * guess - d) >= accuracy) {
		guess = (d / guess + guess) / 2.0;
	}

#if 0
	g = 1
	gsq = g*g
	dif = gsq - d
	adif = abs(dif)
	while adif is outside range
		compute better estimate g
		if gsq > d
			reduce g by what
		else 
			increase g by what
		end
		recompute gsq
		recompute diff
		recompute adif
	end
#endif

	return guess;
}

double numd_sqrtd1(double d) // DONE
{
	double accuracy = 0.000001;

	assert(d >= 0.0);

	return numd_sqrtd(d, accuracy);
}

