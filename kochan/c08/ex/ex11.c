/* Chapter 8 Exercise 11 Program to execute the arraySum function.
 * Vasanth 04 October 2017
 */

#include <stdio.h>

int main(void)
{
	int arraySum(int arraynum[], int element);

	int arrayvals[11] = { 1, 3, 5, 7, 9, 0, 9, 7, 5, 3, 1 };

	printf("The give Array Elements: 1, 3, 5, 7, 9, 0, 9, 7, 5, 3, 1\n");
	printf("The Sum of Array Elements: %i\n", arraySum(arrayvals, 11));

	return 0;
}

int arraySum(int arraynum[], int element)
{
	int i;
	int sum;

	sum = 0;

	for(i = 0; i < element; ++i)
	{
		sum += arraynum[i];
	}

	return sum;
}
