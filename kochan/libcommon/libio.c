
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

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

int input_decimal_ints_until_exitval(int a[], int asize, int exitval)
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

		assert((left <= i) && (i <= right));
		if (val != exitval)
			a[i++] = val;
	} while (val != exitval);

	if (debug) {
		ari_print(a, asize, "chk");
		printf("%d\n", i);
	}

	return i;
}

#ifdef TEST
// test input_decimal_ints_until_exitval function
void test_input_exitval(void)
{
#define MAX 100
	int b[MAX];
	int exitval;
	int nelm;

	exitval = input_decimal_int_until_within_range(-1, 1, "enter exit val");

	// produce the array
	nelm = input_decimal_ints_until_exitval(b, MAX, exitval);
	printf("nelm %d\n", nelm);

	// consume the array
	// define loop 0 .. nelm-1
	ari_print(b, nelm, "inputs");
}

int main(void)
{
#define MAX 100
	int a[MAX];
	int ninput;
	int nelm;

	ninput = input_decimal_int("enter no of inputs> ");

	// input array
	// produce the array
	// ari_setall(inputs, MAX, -1);
	nelm = input_decimal_ints(a, MAX, ninput);
	printf("nelm %d\n", nelm);

	// consume the array
	// define loop 0 .. nelm-1
	ari_print(a, nelm, "inputs");

	char *s = "input_decimal_ints_until_exitval()";

	printf("%s ..\n", s);
	test_input_exitval();
	printf("%s ...ok\n", s);

	return 0;
}
#endif /* TEST END */

