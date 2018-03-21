/* chapter 11 example 11 working with pointers to arrays
 * vasanth 21 march 2018
 */

#include <stdio.h>

int ari_sum(int a[], const int n)
{
	int sum, *ptr;
	int * const ari_end = a + n;

	sum = 0;
	for (ptr = a; ptr < ari_end; ++ptr) {
		sum += *ptr;
	}

	return sum;
}

int main(void)
{
	int result;
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

	printf("use pointers and sum array of elements>\n");

	result = ari_sum(values, 10);
	printf("array sum %d\n", result);

	return 0;
}

