/* hakrlib - 
 * vasanth 08 november 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libari.h"

void ari_setall(int a[], int n, int val) // OKR
{
	assert(n > 0);

	ari_range_set(a, n, 0, n-1, val);
}

void ari_setone(int a[], int n, int pos, int val) // OKR
{
	assert(n > 0);
	assert((0 <= pos) && (pos < n));

	a[pos] = val;
}

// a[rstart..rend] = val 
void ari_range_set(int a[], int n, int rstart, int rend, int val) // OKR
{
	int i;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		ari_setone(a, n, i, val);
	}
}

void ari_print(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_print(a, n, 0, n-1);
}

// print a[rstart..rend]
void ari_range_print(int a[], int n, int rstart, int rend) // OKR
{
	int i;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

// a[] += k 
void ari_addk(int a[], int n, int k) // OKR
{
	assert(n > 0);

	ari_range_addk(a, n, 0, n-1, k);
}

// a[] -= k 
void ari_subk(int a[], int n, int k) // OKR
{
	assert(n > 0);

	ari_range_subk(a, n, 0, n-1, k);
}

// a[] *= k 
void ari_mulk(int a[], int n, int k) // OKR
{
	assert(n > 0);

	ari_range_mulk(a, n, 0, n-1, k);
}

// a[] /= k for k != 0
void ari_divk(int a[], int n, int k) // OKR
{
	assert(n > 0);
	assert(k != 0);

	ari_range_divk(a, n, 0, n-1, k);
}

// similarly for range
void ari_range_addk(int a[], int n, int rstart, int rend, int k) // OKR
{
	int i;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		a[i] = a[i] + k;
	}
}

void ari_range_subk(int a[], int n, int rstart, int rend, int k) // OKR
{
	int i;
	
	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		a[i] = a[i] - k;
	}
}

void ari_range_mulk(int a[], int n, int rstart, int rend, int k) // OKR
{
	int i;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		a[i] = a[i] * k;
	}
}

void ari_range_divk(int a[], int n, int rstart, int rend, int k) // OKR
{
	int i;

	assert(n > 0);
	assert(k != 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		a[i] = a[i] / k;
	}
}

int ari_sum(int a[], int n) // OKR
{
	int sum = 0;

	assert(n > 0);

	sum = ari_range_sum(a, n, 0, n-1);

	return sum;
}

int  ari_range_sum(int a[], int n, int rstart, int rend) // OKR
{
	int i;
	int sum = 0;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		sum += a[i];
	}

	return sum;
}

// return maximum of a[]
int  ari_getmax(int a[], int n) // OKR
{
	int i;
	int maxval;

	assert(n > 0);

	maxval = ari_get(a, n, 0);
	for (i = 1; i < n; ++i) {
		if (a[i] > maxval) {
			maxval = a[i];
		}
	}

	return maxval;
}

// return first leftmost pos of maximum
// return -1 if not found
int  ari_getmaxpos(int a[], int n) // OKR
{
	int maxval;
	int pos;

	assert(n > 0);

	maxval = ari_getmax(a, n);
	pos = ari_getpos(a, n, maxval);

	assert((0 <= pos) && (pos < n));

	return pos;
}

// similarly for minimum
int  ari_getmin(int a[], int n) // OKR
{
	int i;
	int minval;

	assert(n > 0);

	minval = ari_get(a, n, 0);
	for (i = 1; i < n; ++i) {
		if (a[i] < minval) {
			minval = a[i];
		}
	}

	return minval;
}

int  ari_getminpos(int a[], int n) // OKR
{
	int minval;
	int pos;

	assert(n > 0);

	minval = ari_getmin(a, n);
	pos = ari_getpos(a, n, minval);

	assert((0 <= pos) && (pos < n));

	return pos;
}

// left shift by 1 and let last value remain
void ari_lshift1(int a[], int n) // OKR
{
	int i;
	int lhrange;

	assert(n > 0);

	lhrange = n - 1;
	for (i = 0; i < lhrange; ++i) {
		a[i] = a[i+1];
	}
}

// right shift by 1 and let first value remain
void ari_rshift1(int a[], int n) // OKR
{
	int i;
	int rhrange;

	assert(n > 0);

	rhrange = n - 1;
	for (i = rhrange; i > 0; --i) {
		a[i] = a[i-1];
	}
}

// true if all values are equal across a[] and b[]
bool ari_isequal(int a[], int na, int b[], int nb) // OKR BUT IMPROVE
{
	int i;
	int found = 0;

	assert((na > 0) && (nb > 0));
	assert(na == nb); //?


	for (i = 0; i < na; ++i) {
		if (a[i] == b[i]) {
			found += 1;
		} // else ?
	}
	if (found == na) {
		return true;
	}

	return false;
}

bool ari_range_isequal(int a[], int na, int rstarta, int renda, 
		       int b[], int nb, int rstartb, int rendb)
{
	assert((na > 0) && (nb > 0));
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < na));
	assert((0 <= rstartb) && (rstartb <= rendb) && (rendb < nb));
	// do somthing

	return false;
}

// copy a into c, append b to c
void ari_concat(int a[], int na, int b[], int nb, int c[], int nc);

// b = a 
int  ari_copy(int a[], int na, 
	      int b[], int nb);
// b[range] = a[range]
int  ari_range_copy(int a[], int an, int rstarta, int rend, 
                    int b[], int bn, int rstartb);

// left shift by jump and let last jump values remain


bool ari_isvalpresent(int a[], int n, int val) // OKR
{
	int i;

	assert(n > 0);

	for (i = 0; i < n; ++i) {
		if (a[i] == val) {
			return true;
		}
	}

	return false;
}

int ari_get(int a[], int n, int pos) // OKR
{
	int val;

	assert(n > 0);
	assert((0 <= pos) && (pos < n));

	val = a[pos];

	return val;
}

int ari_getpos(int a[], int n, int val) // OKR
{
	int i;
	int pos = -1;

	assert(n > 0);

	for (i = 0; i < n; ++i) {
		if (a[i] == val) {
			pos = i;
			break;
		}
	}

	assert((pos == -1) || ((0 <= pos) && (pos < n)));

	return pos;
}

void ari_swap_elem(int a[], int n, int i, int j) // OKR
{
	int temp;

	assert(n > 0);
	assert((0 <= i) && (i < n));
	assert((0 <= j) && (j < n));

	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void ari_sortup(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_sortup(a, n, 0, n-1);
}

void ari_range_sortup(int a[], int n, int rstart, int rend) // OKR
{
	int i;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i < rend; ++i) {
		int j;

		for (j = i+1; j <= rend; ++j) {
			if (a[i] > a[j]) {
				ari_swap_elem(a, n, i, j);
			}
		}
	}
}

void ari_sortdown(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_sortdown(a, n, 0, n-1);
}

// sort a[rstart..rend]
void ari_range_sortdown(int a[], int n, int rstart, int rend) // OKR
{
	int i;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i < rend; ++i) {
		int j;

		for (j = i+1; j <= rend; ++j) {
			if (a[i] < a[j]) {
				ari_swap_elem(a, n, i, j);
			}
		}
	}
}

int ari_factor(int a[], int n)
{
	int divisor = n;
	int count = 0;

	assert(n > 0);

	while (divisor > 0) {
		int remainder;

		remainder = n % divisor;
		if (remainder == 0) {
			ari_setone(a, n, count, divisor);
			++count;
		}
		--divisor;
	}

	return count;
}

int ari_copy(int a[], int na,
	     int b[], int nb)
{
	int start;
	int end;

	assert(na > 0);
	assert(nb > 0);
	assert(na <= nb);

	end = na - 1;
	for (start = 0; start <= end; ++start) {
		b[start] = a[start];
	}

	return 0;
}

