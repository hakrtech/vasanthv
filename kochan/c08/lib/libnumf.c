
#include "libnumf.h"

float numf_absf(float f) // DONE
{
	if (f < 0.0f) {
		f = -f;
	}

	return f;
}

float numf_sqrtf(float f, float accuracy) // DONE
{
	float guess;

	guess = 1.0f;
	while(numf_absf(guess * guess - f) >= accuracy) {
		guess = (f / guess + guess) / 2.0f;
	}

	return guess;
}

float numf_sqrtf1(float f)
{
	float accuracy = 0.000001f;

	return numf_sqrtf(f, accuracy);
}

