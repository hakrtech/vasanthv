/* Chapter 08 Exercise 03 Program to passed epsilon value to an argument and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#include "libnumf.h"

#define EPSILON 0.0001f

int main(void)
{
	printf("compute square root>\n");
	
	while (true) {
		float num;
		float result;
		int d;

		d = scanf("%f", &num);
		if (d != 1) {
			printf("scanf error %d\n", d);
			break;
		}	

		assert(num >= 0.0f);
		result = numf_sqrtf(num, EPSILON);
		printf("num %f square root %f\n", num, result);
	}

	return 0;
}

