/* Chapter 8 Example 12 Program to sort an array of integers into ascending order
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int main(void)
{
	int sortvalue[16] = { 34, 37, -9, 0, 24, 6, 49, -32, 34, 32, 89, 30, 5, 8, -3, -4 };
	int i;

	void sort(int a[], int n);

	printf("The array befor the sort:\n");

	for(i = 0; i < 16; ++i)
	{
		printf("%i   ", sortvalue[i]);
	}

	sort(sortvalue, 16);

	printf("\n\nThe array after the sort:\n");

	for(i = 0; i < 16; ++i)
	{
		printf("%i   ", sortvalue[i]);
	}

	printf("\n");

	return 0;
}

void sort(int a[], int n)
{
	int i;
	int j;
	int temp;

	for(i = 0; i < n-1; ++i)
	{
		for(j = (i + 1); j < n; ++j)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

}
