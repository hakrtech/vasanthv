
#include "libnumf.h"

float numf_absf(float n) // DONE
{
	if (n < 0) {
		n = -n;
	}

	return n;
}

#if 0
float absolute_val(float num) // LIBIT
{
	if (num < 0) {
		num = -num;
	}

	return num;
}
#endif

float numf_sqrtf(float n, float accuracy) // DONE
{
	float guess;

	guess = 1.0;
	while(numf_absf(guess * guess - n) >= accuracy) {
		guess = (n / guess + guess) / 2.0;
	}

	return guess;
}

#if 0
float squareRoot(float val, float epsilon) // LIBIT
{
	float guess;

	guess = 1.0;

	while(numf_absf(guess * guess - val) >= epsilon) {
		guess = (val / guess + guess) / 2.0;
	}

	return guess;
}
#endif

