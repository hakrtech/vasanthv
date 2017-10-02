/* Chapter 8 Example 8 Program to calculate Square Root of absolute value number
 * Vasanth 02 October 2017
 */

#include <stdio.h>

float absoluteValue(float x)
{
	if(x < 0)
	{
		x = -x;
	}

	return (x);
}

float squareRoot(float a)
{
	float guess = 1.0;
	float epsilon = 0.00001;

	while(absoluteValue((guess * guess) - a) >= epsilon)
	{
		guess = ((a / guess) + guess) / 2.0;
	}

	return guess;
}

int main(void)
{
	printf("Square Root of(2.0) = %f\n", squareRoot(2.0));
	printf("Square Root of(144.0) = %f\n", squareRoot(144.0));
	printf("Square Root of(869.0) = %f\n", squareRoot(869.0));

	return 0;
}
