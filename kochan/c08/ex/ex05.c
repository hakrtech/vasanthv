/* Chapter 8 Exercise 5 Program to use new termination criteria and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int main()
{
	void squareRoot(float n);

	float  num;

	printf("\nCompute Square Root? Give value:   ");
	scanf("%f", &num);

	squareRoot(num);

	return 0;
}

void squareRoot(float n) // LIBIT
{
	float guess;
	float epsilon;

	float absoluteValue(float x);

	epsilon = 0.000001;
	guess = 1.0;

	while(absoluteValue(guess * guess - n) >= epsilon)
	{
		guess = (n / guess + guess) / 2.0;

	}

	printf("\nThe Square Root Value:   %f\n",guess);
}

float absoluteValue(float x) // LIBIT
{
	if(x < 0)
	{
		x = -x;
	}

	return x;
}

