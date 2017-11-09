/* Chapter 8 Exercise 10 Program to check Prime number and using Prime function
 * Vasanth 04 October 2017
 */

#include <stdio.h>

#include "libnumi.h"

int main(void)
{
	int num;
	int sol;

	printf("Do You wand Check the Number Prime or Not? Please Enter any number: ");
	scanf("%i", &num);
	sol = numi_isprime(num);

	if (sol == 1) {
		printf("Return: %i YES!!! It is Prime Number\n", sol);
	} else {
		printf("Return: %i NO!!! It is Not Prime Number\n", sol);
	}
	return 0;
}
