/* Chapter 08 Example 08 Program to calculate Square Root of absolute value number
 * Vasanth 02 October 2017
 */

#include <stdio.h>

float fabsolute(float x)
{
	if (x < 0.0f) {
		x = -x;
	}

	return x;
}

float sqrt_val(float num)
{
	float guess = 1.0f;
	float epsilon = 0.00001f;

	while (fabsolute((guess * guess) - num) >= epsilon) {
		guess = ((num / guess) + guess) / 2.0f;
	}

	return guess;
}

int main(void)
{
	printf("square root(2.0f) = %f\n", sqrt_val(2.0f));
	printf("square root(144.0f) = %f\n", sqrt_val(144.0f));
	printf("square root(869.0f) = %f\n", sqrt_val(869.0f));

	return 0;
}

