/* base conversion library 
 * Vasanth 06-01-2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "libbase.h"
#include "libarray.h"

static char num_to_char(int num)
{
	char a[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		     'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		     'u', 'v', 'w', 'x', 'y', 'z'
		   };

	assert((0 <= num) && (num < 36));

	return a[num];
}

// convert (number) in base 10 to (a[0..alen]) to base abase
// returns length of range a[0..whatever]
// e.g. convers number 12 to base 2
// a[] = [ 1, 1, 0, 0 ] returns 4 length of values in a[]
int baseconv_base10_to_basen(int num, char a[], int asize, int abase)
{
	register int i, j;
	int left, right;

	assert(num > -1);
	assert(asize > 1);
	assert((1 < abase) && (abase <= 36));

	// define range
	left = 0;
	right = asize - 1;

	for (i = num, j = left; i > 0; i /= abase, j++) {
		int remainder = i % abase;

		assert((left <= j) && (j <= right));

		a[j] = num_to_char(remainder);
	}

	if (num == 0) {
		a[0] = '0';
		asize = 1;
	} else {
		asize = j;
		arc_reverse(a, asize);
	}

	return asize;
}

// convert (a[0..alen]) in base abase to (return value) in base 10
// e.g. calling with ([1,1,0,0], 100, 4, 10) will return 12
int baseconv_basen_to_base10(int a[], int asize, int alen, int abase)
{
	int i, j;
	int left, right;
	int start, stop;
	int sum = 0;
	bool debug = false;

	assert(asize > 0);
	assert((0 < alen) && (alen <= asize));
	assert(abase > 1);

	// define range
	left = 0;
	right = asize - 1;

	// define loop a[alen-1 .. 0]
	start = alen - 1;
	stop = left;

	for (i = start, j = 1; i >= stop; i--, j *= abase) {
		int val;

	       val = a[i] * j;
	       sum += val;

	       if (debug) {
		       printf("val %d sum %d power %d\n", val, sum, j);
	       }
	}

	return sum;
}

#ifdef TEST
// test basen to base10 function
void test_basen_to_base10(void)
{
/* base conversion base n to base 10 */
#define MAX 100
	int b[MAX] = { 1, 1, 1, 2 };
	int n = 4;
	int base = 3;
	int val;

	val = baseconv_basen_to_base10(b, MAX, n, base);
	ari_print(b, n, "base 3");
	printf("num %d\n", val);

	int a[MAX] = { 1, 0, 1, 0, 0, 1 };
	n = 6;
	base = 2;
	val = baseconv_basen_to_base10(a, MAX, n, base);
	ari_print(a, n, "base 2");
	printf("num %d\n", val);

	int c[MAX] = { 2, 13 };
	n = 2;
	base = 14;
	val = baseconv_basen_to_base10(c, MAX, n, base);
	ari_print(c, n, "base 14");
	printf("num %d\n", val);
}

int main(void)
{
	int i;
	int num;
	int base;
#define MAX 100
	char a[MAX];
	int n = -1;
	int d;

	// input num
	printf("num > ");
	d = scanf("%d", &num);
	printf(" %d\n", num);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	arc_setall(a, MAX, '-');

	// output base 2 .. 36
	base = 2;
	for (i = base; i <= 36; i++) {
		printf("%d base %d", num, i);
		n = baseconv_base10_to_basen(num, a, MAX, i);
		arc_print(a, n, "");
	}

	char *s = "baseconv_basen_to_base10";

	printf("%s\n", s);
	test_basen_to_base10();
	printf("%s..ok\n", s);

	return 0;
}
#endif //TEST

