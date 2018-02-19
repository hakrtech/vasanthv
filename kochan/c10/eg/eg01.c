/* Chapter-10 Example-10.1 Program to Concatenate two Character arrays
 *   vasanth [21 september 2017]
 */

#include <stdio.h>
#include <assert.h>

void concat(char r[], int n, const char a[], int na, const char b[], int nb)
{
	int i, j, k;

	//copy a[0 .. na-1] to r[0 .. na-1]
	for (i = 0; i <= na-1; ++i) {

		assert((0 <= i) && (i < n));
		r[i] = a[i];
	}

	//copy b[0 .. nb-1] to r[na .. n-1]
	for (j = 0, k = na; j <= nb-1; ++j, ++k) {

		assert((na <= k) && (k < n));
		r[k] = b[j];
	}
}

int main(void)
{
	const char a[5] = {'T', 'e', 's', 't', ' '};
	const char b[6] = {'W', 'o', 'r', 'k', 's', '.'};
	char r[100];
	int n = 5 + 6;
	int i;

	concat(r, n, a, 5, b, 6);
	for (i = 0; i <= n-1; ++i) {
		printf("%c", r[i]);
	}
	printf("\n");

	return 0;
}

