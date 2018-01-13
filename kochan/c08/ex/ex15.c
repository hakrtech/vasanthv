/* chapter 08 exercise 15 program to convert a number to any number base [base10 to basen]
 * if an invalid base to ask valid response base
 * vasanth 11 january 2018
 */

#include <stdio.h>

#include "libinput.h"
#include "libbase.h"
#include "libarray.h"

int main(void)
{
	int i;
	int start, stop;
	int base;
#define MAX 100
	int inputs[MAX];
	char a[MAX];
	int n;
	int ninput;
	int nelm;

	printf("convert base of value >\n");

	base = input_decimal_int_until_within_range(2, 36, "enter output base");
	ninput = input_decimal_int("enter no of inputs> ");

	// input array
	// produce the array
	nelm = input_decimal_ints(inputs, MAX, ninput);
	printf("nelm %d\n", nelm);

	// consume the array
	// define loop 0 .. nelm-1
	start = 0;
	stop = nelm - 1;

	for (i = start; i <= stop; i++) {
		int num = inputs[i];
		n = baseconv_base10_to_basen(num, a, MAX, base);
		printf("base %d num %d ", base, num);
		arc_print(a, n, "");
	}

	return 0;
}

