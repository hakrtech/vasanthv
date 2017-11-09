/* Chapter 08 Exercise 04 Program to print guess values and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libnumf.h"

int main()
{

	float  num;
	float epsilon;
	float result;

	epsilon = 0.00001f;

	printf("compute square root? Give value> ");
	scanf("%f", &num);
	printf("num %f ", num);

	assert(num > 0.0f);
	result = numf_sqrtf(num, epsilon);
	printf("square root %f\n", result);

	return 0;
}

