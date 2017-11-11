/* Chapter 8 Exercise 11 Program to execute the arraySum function.
 * Vasanth 04 October 2017
 */

#include <stdio.h>

#include "libarray.h"

int main(void)
{
	int arrayvals[11] = { 1, 3, 5, 7, 9, 0, 9, 7, 5, 3, 1 };

	printf("given array\n");
	ari_print(arrayvals, 11);
	printf("sum of array elements>\n");
       	ari_sum(arrayvals, 11);
	ari_print(arrayvals, 11);

	return 0;
}

