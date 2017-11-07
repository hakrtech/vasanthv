/* Chapter 08 Example 12 Program to sort an array of integers into ascending order
 * Vasanth 02 October 2017
 */

#include <stdio.h>

void sort(int a[], int limit)
{
	int i;
	int j;
	int temp;

   	printf("\n");

	for (i = 0; i < limit-1; ++i) {
		for (j = (i + 1); j < limit; ++j) {
			printf("cmp %d %d\n", i, j);
			
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("cmp done\n");
	}
}

int main(void)
{
	int sortvalue[16] = { 34, 37, -9, 0, 24, 6, 49, -32, 34, 32, 89, 30, 5, 8, -3, -4 };
	int count = 0;

	printf("array befor sort> ");

	while (count < 16) {
		printf("%i ", sortvalue[count]);
		++count;
	}

	sort(sortvalue, 16);

	printf("array after sort> ");

	count = 0;
	while (count < 16) {
		printf("%i ", sortvalue[count]);
		++count;
	}
	printf("\n");

	return 0;
}

