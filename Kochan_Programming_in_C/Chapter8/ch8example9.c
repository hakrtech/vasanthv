/* Chapter 8 Example 9 Program to finding minimum value in an array
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int scores[10];
	int minival;

	int minimum(int value[10]);

	printf("Enter the 10 Score Number:\n");

	for(i =0; i<10; ++i)
	{
		scanf("%i", &scores[i]);
	}

	minival = minimum(scores);

	printf("\nminimum score is %i\n", minival);

	return 0;
}

int minimum(int value[10])
{
	int small;
	int i;

	small = value[0];

	for(i = 1; i < 10; ++i)
	{
		if (value[i] < small)
		{
			small = value[i];
		}
	}

	return small;
}
