/* Chapter 8 Exercise 6 Program to use double precision Value and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libreal.h"

int main()
{
	double num;
	double epsilon;

	printf("enter epsilon(0.000001 to double limit)> ");
	scanf("%lf", &epsilon);
	printf("epsilon %lf\n", epsilon);

	printf("compute square root? num> ");
	scanf("%lf", &num);
	printf("num %lf\n", num);

	assert(num > 0.0);
	printf("square root> %lf\n", numd_sqrtd(num, epsilon));

	return 0;
}

