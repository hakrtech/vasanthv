/* Chapter 08 Exercise 14 Rewrite the last four exercises to use global variables
 * Vasanth 03 January 2018
 */

#include <stdio.h>

#include "libinteger.h"
#include "libarray.h"

int num;
_Bool isprime = 0;
int a[10];
int n;

void prime(void)
{
	isprime = numi_isprime(num);
	if(isprime) {
		printf("return 1 num %d is prime\n", num);
	} else {
		printf("return 0 num %d is composite\n", num);
	}
}

void arraysum(void)
{
	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");
	num = ari_sum(a, n);
	printf("sum of array %d\n", num);
}

int main(void)
{
	num = 2;
	n = 10;

	prime();
	arraysum();
	prime();

	return 0;
}

