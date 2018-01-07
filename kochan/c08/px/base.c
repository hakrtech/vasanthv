/* base conversion library 
 * Vasanth 06-01-2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "base.h"
#include "libarray.h"

void ari_base_print(int a[], int n, char *s)
{
	register int i;
	int start;
	register int stop;

	assert(n > 0);
	assert(s != NULL);

	printf("%s\t= ", s);

	// define loop 0 .. n-1
	start = 0;
	stop = n-1;

	printf("[ ");
	for (i = start; i <= stop; i++) {
		printf("%3x ", a[i]);
	}
	printf(" ]\n");
}

// convert (number) in base 10 to (a[0..alen]) to base abase
// returns length of range a[0..whatever]
// e.g. convers number 12 to base 2
// a[] = [ 1, 1, 0, 0 ] returns 4 length of values in a[]
int baseconv_base10_to_basen(int number, int a[], int asize, int abase)
{
	register int i;
	int j;
	int left;
	int right;
	int start;
	register int stop;

	assert(number > 1);
	assert(asize > 1);
	assert((1 < abase) && (abase <= number));

	ari_setall(a, asize, -1);

	// define range
	left = 0;
	right = asize - 1;

	// define loop number .. 0
	start = number;
	stop = 0;

	for (i = start, j = left; i != stop; i = number, j++) {

		assert((left <= j) && (j <= right));
		a[j] = number % abase;
		number = number / abase;
	}

	asize = j;
	ari_reverse(a, asize);

	return asize;
}

// convert (a[0..alen]) in base abase to (return value) in base 10
// e.g. calling with ([1,1,0,0], 100, 4, 10) will return 12
int baseconv_basen_to_base10(int a[], int asize, int alen, int abase)
{
	return 0;
}
/*
int anybase_nten(int ab[], int nb, int base)
{
	int i;
	int left;
	int right;
	int start;
	int stop;
	int sum;

	assert(nb > 0);

	// define range
	left = 0;
	right = nb-1;

	// define loop
	start = right;
	stop = left;

}
*/

#ifdef TEST
int main(void)
{
	int i;
	int num;
	int base;
#define MAX 100
	int a[MAX];
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

	// output base 2 .. 16
	base = 2;
	for (i = base; i <= 16; i++) {
		printf("base %d", i);
		n = baseconv_base10_to_basen(num, a, MAX, i);
		ari_base_print(a, n, "");
	}

	n = baseconv_base10_to_basen(num, a, MAX, 14);
	ari_base_print(a, n, "base 14");
	ari_print(a, n, "base 14");

	return 0;
}
#endif //TEST

