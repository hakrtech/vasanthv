/* Chapter 08 Example 09 Program to finding minimum value in an array
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int minmum(int value[10])
{
	int smallest;
	int count = 1;

	smallest = value[0];

	while (count < 10) {
		if (value[count] < smallest) {
			smallest = value[count];
		}
		++count;
	}

	return smallest;
}

int maxmum(int num[10])
{
	int largest;
	int count = 1;

	largest = num[0];

	while (count < 10) {
		if (num[count] > largest) {
			largest = num[count];
		}
		++count;
	}

	return largest;
}

int main(void)
{
	int count = 0;
	int scores[10];
	int min;
	int max;

	printf("enter 10 score number\n");

	while (count < 10) {
		scanf("%i", &scores[count]);
		++count;
	}

	min = minmum(scores);
	max = maxmum(scores);

	printf("smallest score %i\n", min);
	printf("largest score %i\n", max);

	return 0;
}

