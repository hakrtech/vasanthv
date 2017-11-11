/* hakrlib - 
 * vasanth 08 november 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libhelp.h"
#include "libari.h"

void ari_setall(int a[], int n, int val)
{
	int i;

	assert(n >= 0);

	for (i = 0; i < n; i++) {
		a[i] = val;
	}

	return;
}

void ari_setone(int a[], int n, int pos, int val)
{
	assert(n >= 0);
	assert(pos >= 0);
	assert(pos < n);

	a[pos] = val;

	return;
}

void ari_print(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return;
}

void ari_plusk(int a[], int n, int k)
{
	int i = 0;

	while (i < n) {
		k += a[i];
		++i;
	}
}

void ari_sum(int a[], int n)
{
	int i;

	for(i = 0; i < n; ++i) {
		a[i] = a[i] + a[i];
	}
}

/*
int arraysum(int arraynum[], int element) // LIBIT
{
	int i;
	int sum = 0;

	for(i = 0; i < element; ++i) {
		arraynum[i] = arraynum[i] + arraynum[i];
		sum += arraynum[i]; 
	       	printf("%d ", sum);	
	}

	return sum;
}
*/

#if 0
int ari_isvalpresent(int a[], int n, int val)
{
	return 1;
}

int ari_getposbyval(int a[], int n, int pos)
{
	return 1;
}

int ari_get(int a[], int n, int i)
{
	return 1;
}

int ari_getmaxval(int a[], int n)
{
	return 1;
}

int ari_getmaxpos(int a[], int n, int pos)
{
	return 1;
}

int ari_getminval(int a[], int n)
{
	return 1;
}

int ari_getminpos(int a[], int n, int pos)
{
	return 1;
}
void ari_subk(int a[], int n, int k)
{
	return;
}

void ari_mulk(int a[], int n, int k)
{
	return;
}

void ari_divk(int a[], int n, int k)
{
	return;
}

void ari_bsortup(int a[], int n)
{
	return;
}

void ari_bsortdown(int a[], int n)
{
	return;
}
#endif

void ari_swap_elem(int a[], int n, int i, int j)
{
	int temp;

	assert(n > 0);
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void ari_sortup(int a[], int n)
{
	int i;

	assert(n > 0);
	for (i = 0; i < n-1; ++i) {
		int j;

		for (j = i+1; j < n; ++j) {
			if (a[i] > a[j]) {
				ari_swap_elem(a, n, i, j);
			}
		}
	}
}

void ari_sortdown(int a[], int n)
{
	int i;

	assert(n > 0);
	for (i = 0; i < n-1; ++i) {
		int j;

		for (j = i+1; j < n; ++j) {
			if (a[i] < a[j]) {
				ari_swap_elem(a, n, i, j);
			}
		}
	}
}

