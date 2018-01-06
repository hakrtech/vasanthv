/* base conversion library 
 * Vasanth 06-01-2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "base.h"
#include "libarray.h"

int nbase(int num, int base, int a[])
{
	int i;
	int j;
	int start;
	int stop;

	assert(num > 1);
	assert((1 < base) && (base <= num));

	// define loop
	start = num;
	stop = 0;

	for (i = start, j = 0; i != stop; i = num, j++) {
		a[j] = num % base;
		num = num / base;
	}
	ari_reverse(a, j);

	return j;
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
	int n;
	int d;

	// input num
	printf("num > ");
	d = scanf("%d", &num);
	printf(" %d\n", num);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	ari_setall(a, MAX, -1);

	// output base 2 .. 10
	base = 2;
	for (i = base; i <= 10; i++) {
		printf("base %d", i);

		n = nbase(num, i, a);
		ari_print(a, n, "");
		ari_setall(a, n, -1);
		// ari_print(a, n, "a[rset]");
	}

	return 0;
}
#endif //TEST

