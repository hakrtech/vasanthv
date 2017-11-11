/* Chapter 8 Exercise 11 Program to execute the arraySum function.
 * Vasanth 04 October 2017
 */

#include <stdio.h>

#include "libarray.h"

int arraysum(int arraynum[], int element) // LIBIT
{
	int i;
	int sum = 0;

	for(i = 0; i < element; ++i) {
		arraynum[i] = arraynum[i] + arraynum[i];
		sum += arraynum[i]; 
	       	printf("%d ", sum);	
	}

	return sum;
}

int main(void)
{
	int arrayvals[11] = { 1, 3, 5, 7, 9, 0, 9, 7, 5, 3, 1 };

	printf("given array ");
	ari_print(arrayvals, 11);
	printf("\nsum of array elements> %d\n", arraysum(arrayvals, 11));

	return 0;
}

