/* base conversion library 
 * Vasanth 06-01-2018
 */

#include <stdio.h>
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

#ifdef TEST
int main(void)
{
	int num = 321;
	int base = 2;
#define MAX 100
	int a[MAX];
	int n;

	ari_setall(a, MAX, -1);

	n = nbase(num, base, a);
	ari_print(a, n, "a[nbs]");

	return 0;
}
#endif //TEST

