/* chapter 08 exercise 15 program to convert a number to any number base [base10 to basen]
 * if an invalid base to ask valid response base
 * vasanth 11 january 2018
 */

#include <stdio.h>
#include <stdlib.h>

#include "libbase.h"

int input_decimal_int(char *prompt)
{
	int val;
	int d;

	printf("%s: ", prompt);

	d = scanf("%d", &val);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	printf(" %d\n", val);

	return val;
}

int input_decimal_int_until_within_range(int minrange, int maxrange, char *prompt)
{
	int val;

	do {
		printf("%s(%d..%d)", prompt, minrange, maxrange);
		val = input_decimal_int("");
	} while ((val < minrange) || (val > maxrange));

	return val;
}

// int input_decimal_ints(int a[], int asize, int ninputs);
// int input_decimal_ints_until_exitval(int a[], int asize);

int main(void)
{
	int num;
	int base;
#define MAX 100
	char a[MAX];
	int n;

	printf("convert base of value >\n");

	num = input_decimal_int("enter num");
	base = input_decimal_int_until_within_range(2, 36, "enter base");

	arc_setall(a, MAX, '-');
	n = baseconv_base10_to_basen(num, a, MAX, base);

	printf("num %d\n", num);
	printf("base %d\n", base);
	arc_base_print(a, n, "values");

	return 0;
}

