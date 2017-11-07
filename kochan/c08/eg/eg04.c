/* Chapter 08 Example 04 Calculating the nth triangular number
 * Vasanth 01 October 2017
 */

#include <stdio.h>

#define NUM 1000

void triangular_num(int n)
{
	int count = 1;
	int sum = 0;

	while (count <= n) {
		sum += count;
		++count;
	}
	printf("%i triangular %i\n", n, sum);
}

int main(void)
{
	triangular_num(10);
	triangular_num(99);
	triangular_num(NUM);

	return 0;
}

