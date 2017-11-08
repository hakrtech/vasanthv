/* Chapter 08 Example 07 Program to calculate absolute value
 * Vasanth 01 October 2017
 */

#include <stdio.h>

float fabsolute(float a)
{
	if (a < 0.0f) {
		a = -a;
	}

	return a;
}

int main(void)
{
	float x = -15.5f;
	float y = 20.0f;
	float z = -5.0f;
	int num = -221;
	float result;

	result = fabsolute(x);
	printf("result = %.2f\n", result);
	printf("x = %.2f\n", x);

	result = fabsolute(y) + fabsolute(z);
	printf("result = %.2f\n", result);

	result = fabsolute((float) num);
	printf("result = %.2f\n", result);

	result = fabsolute(num);
	printf("result = %.2f\n", result);
	printf("absolute division %2.f\n", fabsolute(-6.0f) / 4.0f);

	return 0;
}

