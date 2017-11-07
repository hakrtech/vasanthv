/* Chapter 08 Example 08 Program to calculate Square Root of absolute value number
 * Vasanth 02 October 2017
 */

#include <stdio.h>

float absolute_val(float x)
{
	if (x < 0) {
		x = -x;
	}

	return x;
}

float sqrt_val(float num)
{
	float guess = 1.0;
	float epsilon = 0.00001;

	while (absolute_val((guess * guess) - num) >= epsilon)
	{
		guess = ((num / guess) + guess) / 2.0;
	}

	return guess;
}

int main(void)
{
	printf("square root(2.0) = %f\n", sqrt_val(2.0));
	printf("square root(144.0) = %f\n", sqrt_val(144.0));
	printf("square root(869.0) = %f\n", sqrt_val(869.0));

	return 0;
}

