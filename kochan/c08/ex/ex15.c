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

	if (prompt != NULL) {
		printf("%s", prompt);
	}
	d = scanf("%d", &val);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}

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

int input_decimal_ints_until_exitval(int a[], int asize, int exitval, int *endedp)
{
	int i;
	int left, right;
	bool debug = false;
	int val;

	assert(asize > 0);

	// define range
	left = 0;
	right = asize - 1;

	// define loop a[0 .. exitval]
	i = 0;
	do {
		val = input_decimal_int(NULL);
		if (val == exitval)
			*endedp = 1;
		else
			// assert((left <= i) && (i <= right));
			a[i++] = val;
	} while ((val != exitval) && (i <= right));

	if (debug) {
		ari_print(a, asize, "chk");
		printf("%d\n", i);
	}

	return i;
}

int main(void)
{
	int i;
	int start, stop;
	int base;
#define MAX 100
	int inputs[MAX];
	char a[MAX];
	int n;
	//int ninput;
	int nelm;
	int exitval;

	printf("convert base of value >\n");

	base = input_decimal_int_until_within_range(2, 36, "enter output base");
	// ninput = input_decimal_int("enter no of inputs> ");

	// input array
	// ari_setall(inputs, MAX, -1);
	// nelm = input_decimal_ints(inputs, MAX, ninput);

	// input array until exitval
	int ended = 0;
	exitval = input_decimal_int("enter exitval: ");

	while (!ended) {
		// produce the array
		nelm = input_decimal_ints_until_exitval(inputs, MAX, exitval, &ended);
		printf("nelm %d\n", nelm);

		// consume the array
		// define loop 0 .. nelm
		start = 0;
		stop = nelm - 1;

		for (i = start; i <= stop; i++) {
			int num = inputs[i];
			n = baseconv_base10_to_basen(num, a, MAX, base);
			printf("base %d num %d ", base, num);
			arc_base_print(a, n, "");
		}
	}

	return 0;
}

