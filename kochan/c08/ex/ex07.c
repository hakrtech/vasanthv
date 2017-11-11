/* Chapter 08 Exercise 07 Program to calculate x^n and get postive result
 * Vasanth 03 October 2017
 */
#include <stdio.h>

#include "libinteger.h"

int main(void)
{
	int num;
	int pow;
	int result;

	printf("enter Number of X:  ");
	scanf("%d", &num);
	printf("\nPower of n:  ");
	scanf("%d", &pow);

	result = numi_pown(num, pow);

	printf("\nThe X power n(X^n) result:  %d\n", result);

	return 0;
}

