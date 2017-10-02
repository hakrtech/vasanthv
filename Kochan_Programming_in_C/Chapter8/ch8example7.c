/* Chapter 8 Example 7 Program to calculate absolute value
 * Vasanth 01 October 2017
 */

#include <stdio.h>

int main(void)
{
	float absoluteValue(float a);

	float f1 = -15.5;
	float f2 = 20;
	float f3 = -5;
	int l = -221;
	float result;

	result = absoluteValue(f1);

	printf("result = %.2f\n", result);
	printf("f1 = %.2f\n", f1);

	result = absoluteValue(f2) + absoluteValue(f3);

	printf("result = %.2f\n", result);

	result = absoluteValue((float) l);

	printf("result = %.2f\n", result);

	result = absoluteValue(l);

	printf("result = %.2f\n", result);
	printf("%2.f\n", absoluteValue(-6.0) / 4);

	return 0;
}

float absoluteValue(float a)
{
	if(a < 0)
	{
		a = -a;
	}

	return a;
}
