/* program for factor table
 * vasanth 07 november 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "libhelp.h"

void factor(int n)
{	
	int divisor;
	int a[n];
	int i = 0;

	divisor = n;
	while (divisor > 0) {
		int remainder;

		remainder = n % divisor;
		if (remainder == 0) {
		//	a[i] = divisor;
			ari_setone(a, n, i, divisor);
			++i;
		}
		--divisor;
	}
	
	ari_print(a, i);
}

int main(void)
{
	int num;
	int d;

	d = scanf("%d",&num);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}
	printf("num %d factor> ", num);

	assert(num > 0);
	factor(num);
	
	return 0;
}

