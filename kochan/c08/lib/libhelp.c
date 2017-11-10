/* hakrlib - 
 * vasanth 08 november 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libhelp.h"

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

void ari_plusk(int a[], int n, int k)
{
	return;
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

