/* Chapter 08 Exercise 05 Program to use new termination criteria and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libreal.h"

#define EPSILON 0.1f

int main()
{
	float  num;
	
	printf("compute square root? value> ");
	scanf("%f", &num);
	assert(num >= 0.0f);
	printf("num %f sqrt %f\n", num, numf_sqrtf(num, EPSILON));

	return 0;
}

