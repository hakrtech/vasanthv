/* Chapter 08 Example 07 Program to calculate absolute value
 * Vasanth 01 October 2017
 */

#include <stdio.h>

float absolute_val(float a)
{
	if (a < 0) {
		a = -a;
	}

	return a;
}

int main(void)
{
	float x = -15.5;
	float y = 20;
	float z = -5;
	int num = -221;
	float result;

	result = absolute_val(x);

	printf("result = %.2f\n", result);
	printf("x = %.2f\n", x);

	result = absolute_val(y) + absolute_val(z);

	printf("result = %.2f\n", result);

	result = absolute_val((float) num);

	printf("result = %.2f\n", result);

	result = absolute_val(num);

	printf("result = %.2f\n", result);
	printf("absolute value %2.f\n", absolute_val(-6.0) / 4.0);

	return 0;
}

