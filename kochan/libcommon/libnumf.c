
#include <assert.h>

#include "libnumf.h"

float numf_absf(float f) // OK
{
	if (f < 0.0f) {
		f = -f;
	}

	return f;
}

float numf_sqrtf(float f, float accuracy) // OKOK
{
	float guess;

	assert(f >= 0.0f);
	assert(accuracy > 0.0f);

	guess = 1.0f;
	while (numf_absf(guess * guess - f) >= accuracy) {
		guess = (f / guess + guess) / 2.0f;
	}

	return guess;
}

float numf_sqrtf1(float f) // OK
{
	float accuracy = 0.000001f;
	
	assert(f >= 0.0f);

	return numf_sqrtf(f, accuracy);
}

