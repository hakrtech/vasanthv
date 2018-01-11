/* chapter 08 exercise 15 program to convert a number to any number base [base10 to basen]
 * if an invalid base to ask valid response base
 * vasanth 11 january 2018
 */

#include <stdio.h>
#include <stdlib.h>

#include "libbase.h"

int input_decimal_int(void)
{
	int val;
	int d;

	d = scanf("%d", &val);
	printf(" %d\n", val);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	return val;
}

int input_decimal_int_until_within_range(int minrange, int maxrange, char *prompt)
{
	int val;

	printf("range %d to %d> %s", minrange, maxrange, prompt);

	val = input_decimal_int();
	while ((val < minrange) || (val > maxrange)) {
		printf("invalid val %d choice again!\n", val);
		val = input_decimal_int();
	}

	return val;
}

int main(void)
{
	int num;
	int base;
#define MAX 100
	char a[MAX];
	int n;

	printf("convert base of value >\n");
	printf("enter num: ");

	num = input_decimal_int();
	base = input_decimal_int_until_within_range(2, 36, "enter base: ");

	arc_setall(a, MAX, '-');
	n = baseconv_base10_to_basen(num, a, MAX, base);

	printf("num %d\n", num);
	printf("base %d\n", base);
	arc_base_print(a, n, "values");

	return 0;
}

