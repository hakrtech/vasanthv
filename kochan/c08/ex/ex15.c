/* chapter 08 exercise 15 program to convert a number to any number base [base10 to basen]
 * if an invalid base to ask valid response base
 * vasanth 11 january 2018
 */

#include <stdio.h>
#include <stdlib.h>

#include "libbase.h"

int main(void)
{
	int num;
	int base;
	int d;
#define MAX 100
	char a[MAX];
	int n;

	printf("convert base of value >\nnum and base: ");
	d = scanf("%d%d", &num, &base);
	printf("num %d\nbase %d\n", num, base);

	if (d != 2) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	for ( ; (base < 2) || (base > 36 ); ) {
		printf("choice again! %d invalid base\n", base);

		d = scanf("%d", &base);
		if (d != 1) {
			printf("scanf error %d\n", d);
			exit(1);
		}
		printf("base %d\n", base);
	}

	arc_setall(a, MAX, '-');
	n = baseconv_base10_to_basen(num, a, MAX, base);
	arc_base_print(a, n, "values");

	return 0;
}

