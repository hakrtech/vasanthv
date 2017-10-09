/* Chapter 8 Exercise 3 Program to passed epsilon value to an argument and compute Square Root value
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int main()
{
	void squareRoot(float n, float Ep);

	float  num;
	float epsilon;

	epsilon = 0.00001;

	printf("Compute Square Root? Give value:   ");
	scanf("%f", &num);

	squareRoot(num, epsilon);

	return 0;
}

void squareRoot(float n, float Ep)
{
	float guess;

	float absoluteValue(float x);

	guess = 1.0;

	while(absoluteValue(guess * guess - n) >= Ep)
	{
		guess = (n / guess + guess) / 2.0;
	}

	printf("The Square Root Value:   %f\n",guess);
}

float absoluteValue(float x)
{
	if(x < 0)
	{
		x = -x;
	}

	return x;
}

