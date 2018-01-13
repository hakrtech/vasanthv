/* base conversion library 
 * Vasanth 13-01-2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "libarc.h"

void arc_print(char a[], int n, char *s)
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

	printf("[");
	for (i = start; i <= stop; i++) {
		printf("%3c ", a[i]);
	}
	printf(" ]\n");
}

void arc_setall(char a[], int n, char c)
{
	int i;
	int start;
	int stop;

	assert(n > 0);

	// define loop
	start = 0;
	stop = n - 1;

	for (i = start; i <= stop; i++) {
		a[i] = c;
	}
}

void arc_swap(char a[], int n, int i, int j)
{
	char c;

	assert(n > 0);
	assert((0 <= i) && (i < n));
	assert((0 <= j) && (j < n));

	c = a[i];
	a[i] = a[j];
	a[j] = c;
}

void arc_reverse(char a[], int n)
{
	register int i;
	register int j;
	int start;
	int stop;

	assert(n > 0);

	// define loop
	start = 0;
	stop = n - 1;

	for (i = start, j = stop; i < j; i++, j--) {
		assert((start <= i) && (i <= stop));
		assert((start <= j) && (j <= stop));

		arc_swap(a, n, i, j);
	}
}

