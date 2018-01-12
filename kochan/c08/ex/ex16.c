/* chapter 08 exercise 16 convrt number to base values until exit value zero
 * vasanth 12 january 2018
 */

#include <stdio.h>

#include "libiochennai.h"
#include "libbase.h"

int main(void)
{
	int i;
	int start, stop;
	int base;
#define MAX 100
	int a[MAX];
	int nlem;
	char b[MAX];
	int n;
	int exitval;

	base = input_decimal_int_until_within_range(2, 36, "enter outbut base");
	exitval = input_decimal_int("enter exitval> ");

	// produce inputs array
	nlem = input_decimal_ints_until_exitval(a, MAX, exitval);
	printf("nlem %d\n", nlem);

	// consume inputs array
	// define loop 0 .. nlem-1
	start = 0;
	stop = nlem - 1;

	for (i = start; i <= stop; i++) {
		int num = a[i];
		n = baseconv_base10_to_basen(num, b, MAX, base);
		printf("base %d num %d", base, num);
		arc_base_print(b, n, "");
	}

	return 0;
}

