/* hakrlib - 
 * vasanth 08 november 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libari.h"

void ari_setall(int a[], int n, int val) // OKR
{
	int i;

	assert(n > 0);

	for (i = 0; i < n; i++) {
		a[i] = val;
	}

	return;
}

void ari_setone(int a[], int n, int pos, int val) // OKR
{
	assert(n > 0);
	assert((0 <= pos) && (pos < n));

	a[pos] = val;

	return;
}

// a[rstart..rend] = val 
void ari_range_set(int a[], int n, int rstart, int rend, int val)
{
	int i;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	for (i = rstart; i <= rend; ++i) {
		a[i] = val;
	}

	return;
}

void ari_print(int a[], int n) // OKR
{
	int i;

	assert(n > 0);
	
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return;
}

void ari_plusk(int a[], int n, int k) // OKR
{
	int i = 0;

	assert(n > 0);

	while (i < n) {
		a[i] = a[i] + k;
		++i;
	}
}

int ari_sum(int a[], int n) // OKR
{
	int i;
	int sum = 0;

	assert(n > 0);

	for (i = 0; i < n; ++i) {
		sum += a[i];
	}

	return sum;
}


#if 0

// a[0..n-1] = random number from randbot to randtop both included
void ari_setall_random(int a[], int n, int randbot, int randtop);
// a[rstart..rend] = random number from randbot to randtop both included
void ari_range_set_random(int a[], int n, int rstart, int rend, int randbot, int randtop);

// print a[rstart..rend]
void ari_range_print(int a[], int n, int rstart, int rend);
// (5,3,4,9) leading=(, trailing=), separator=,
// (5 3 4 9) leading=(, trailing=), separator=' '
// [5 3 4 9] leading=[, trailing=], separator=' '
void ari_print_format(int a[], int n, char leading, char trailing, char separator);
// print a[rstart..rend] with format characters
void ari_range_print_format(int a[], int n, int rstart, int rend, char leading, char trailing, char separator);

// sum = sum of a[rstart..rend]
int  ari_range_sum(int a[], int n, int rstart, int rend);
#endif


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

void ari_swap_elem(int a[], int n, int i, int j) // OK
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

void ari_sortdown(int a[], int n) // OKR
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

