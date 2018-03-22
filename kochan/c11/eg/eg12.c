/* chapter 11 example 12 program to use pointers and summing the elements of an array
 * vasanth 22 march 2018
 */

#include <stdio.h>

int ptr_sum(int *ptr_a, const int n)
{
	int sum = 0;
	int * const n_elm = ptr_a + n;

	for (; ptr_a < n_elm; ++ptr_a) {
		sum += *ptr_a;
	}

	return sum;
}

int main(void)
{
	int result;
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

	printf("use pointer function and sum array elements>\n");
	result = ptr_sum(values, 10);
	printf("array sum %d\n", result);

	return 0;
}

