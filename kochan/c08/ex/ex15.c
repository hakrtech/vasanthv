/* chapter 08 exercise 15 program to convert a number to any number base [base10 to basen]
 * if an invalid base to ask valid response base
 * vasanth 11 january 2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "libbase.h"
#include "libarray.h"

int input_decimal_int(char *prompt)
{
	int val;
	int d;

	printf("%s", prompt);
	d = scanf("%d", &val);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	//printf(" %d\n", val);

	return val;
}

int input_decimal_int_until_within_range(int minrange, int maxrange, char *prompt)
{
	int val;

	do {
		printf("%s(%d..%d): ", prompt, minrange, maxrange);
		val = input_decimal_int("");
	} while ((val < minrange) || (val > maxrange));

	return val;
}

int input_decimal_ints(int a[], int asize, int ninputs)
{
	int i;
	int left, right;
	int start, stop;
	bool debug = false;

	assert(asize > 0);
	assert((0 < ninputs) && (ninputs <= asize));

	// define range
	left = 0;
	right = asize - 1;

	// define loop a[0 .. ninputs-1]
	start = 0;
	stop = ninputs - 1;

	for (i = start; i <= stop; i++) {
		assert((left <= i) && (i <= right));

		a[i] = input_decimal_int("enter input: ");
	}

	if (debug) {
		ari_print(a, asize, "chk");
		printf("%d\n", i);
	}

	return i;
}

// int input_decimal_ints_until_exitval(int a[], int asize);

int main(void)
{
	int num;
	int base;
#define MAX 100
	int inputs[MAX];
	char a[MAX];
	int n;

	printf("convert base of value >\n");

	num = input_decimal_int("enter num: ");
	base = input_decimal_int_until_within_range(2, 36, "enter base");

	arc_setall(a, MAX, '-');
	n = baseconv_base10_to_basen(num, a, MAX, base);

	printf("num %d\nbase %d\n", num, base);
	arc_base_print(a, n, "values");

	ari_setall(inputs, MAX, -1);
	n = input_decimal_ints(inputs, MAX, 5);
	ari_print(inputs, n, "inputs");

	return 0;
}

