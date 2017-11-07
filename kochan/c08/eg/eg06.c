/* Chapter 08 Example 06 Program to find the gratest common divisor of tow
 * non-negative integer values and to return the result
 * Vasanth 01 October 2017
 */

#include <stdio.h>
#include <assert.h>

int gcd(int x, int y)
{
	int temp;

	while (y != 0) {
		temp = x % y;
		x = y;
		y = temp;
	}

	return x;
}

int main(void)
{
	int result = 1;

	printf("enter two value and get greatest common divisor>\n");

	while (result != 0) {
		int a;
		int b;
		int s;

		s = scanf("%d\n%d", &a, &b);

		if(s != 2) {
			printf("error scanf %d\n", s);
			break;
		}

		printf(" %d and %d ", a, b);

		assert(a >= 0);
		assert(b >= 0);
		result = gcd(a,b);

		printf("gratest common divisor %d\n", result);
	}

	return 0;
}

