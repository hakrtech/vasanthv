/* Chapter 8 Exercise 3 Program to passed epsilon value to an argument and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define EPSILON 0.0001

float absolute_val(float num)
{
	if (num < 0) {
		num = -num;
	}

	return num;
}

float squareRoot(float val, float epsilon)
{
	float guess;

	guess = 1.0;

	while(absolute_val(guess * guess - val) >= epsilon) {
		guess = (val / guess + guess) / 2.0;
	}

	return guess;
}

int main()
{
	printf("compute square root>\n");
	
	while (true) {
		float num;
		float result;
		int s;
	
		s = scanf("%f", &num);

		if (s != 1) {
			printf("scanf error %d\n", s);
			break;
		}	

		assert(num >= 0);
		result = squareRoot(num, EPSILON);
	
		printf("num %f square root %f\n", num, result);
	}

	return 0;
}

