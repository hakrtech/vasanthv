/* Chapter 8 Exercise 6 Program to use double precision Value and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int main()
{
	float squareRoot(float epsilon, float n);

	float  num;
	float epsilonVal;

	printf("\nEnter the Epsilon Value(0.1 limit 0.000001):   ");
	scanf("%f", &epsilonVal);

	printf("\nCompute Square Root? Give value:   ");
	scanf("%f", &num);

	printf("\nThe Square Root Value:   %f\n", squareRoot( epsilonVal, num));

	return 0;
}

float squareRoot(float epsilon, float n) // LIBIT
{
	float guess;

	float absoluteValue(float x);

	guess = 1.0;

	printf("\nGivened Epsilon Value:   %f", epsilon);

	while(absoluteValue(guess * guess - n) >= epsilon)
	{
		guess = (n / guess + guess) / 2.0;

	}

	return guess;
}

float absoluteValue(float x) // LIBIT
{
	if(x < 0)
	{
		x = -x;
	}

	return x;
}

