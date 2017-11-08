/* Chapter 08 Example 09 Program to finding maximum and minimum value in an array
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int aminimum(int a[], int n)
{
	int smallest;
	int i = 1;

	smallest = a[0];

	while (i < n) {
		if (a[i] < smallest) {
			smallest = a[i];
		}
		++i;
	}

	return smallest;
}

int amaximum(int a[], int n)
{
	int largest;
	int i = 1;

	largest = a[0];

	while (i < 10) {
		if (a[i] > largest) {
			largest = a[i];
		}
		++i;
	}

	return largest;
}

int main(void)
{
	int i = 0;
	int scores[10];
	int min;
	int max;

	printf("enter 10 score number\n");

	while (i < 10) {
		scanf("%i", &scores[i]);
		++i;
	}

	min = aminimum(scores, 10);
	max = amaximum(scores, 10);

	printf("smallest score %i\n", min);
	printf("largest score %i\n", max);

	return 0;
}

