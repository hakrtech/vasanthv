/* Chapter 8 Exercise 6 Program to use double precision Value and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libnumd.h"

int main()
{
	double num;
	double epsilon;

	printf("enter epsilon(0.1 to double limit)> ");
	scanf("%lf", &epsilon);

	printf("compute square root? value> ");
	scanf("%lf", &num);

	assert(num > 0.0);
	printf("\nsquare root> %lf\n", numd_sqrtd(num, epsilon));

	return 0;
}

