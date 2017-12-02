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

// a[i] = i
void ari_setall_linear(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_set_linear(a, n, 0, n-1);
}

// a[rstart..rend] = i
void ari_range_set_linear(int a[], int n, int rstart, int rend) // OKR
{
	int i;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	start = rstart;
	end = rend;
	for (i = start; i <= end; ++i) {
		ari_setone(a, n, i, i);
	}
}

//a[i] = i*i
void ari_setall_square(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_set_square(a, n, 0, n-1);
}

// a[rstart..rend] = i*i
void ari_range_set_square(int a[], int n, int rstart, int rend) // OKR
{
	int i;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	start = rstart;
	end = rend;
	for (i = start; i <= end; ++i) {
		ari_setone(a, n, i, i*i);
	}
}

// a[i] = 0,2,4,6
void ari_setall_even(int a[], int n)
{
	assert(n > 0);
	ari_range_set_even(a, n, 0, n-1);
}

// a[rstart..rend] = same
void ari_range_set_even(int a[], int n, int rstart, int rend)
{
	int i;
	int start;
	int end;
	int even;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	start = rstart;
	end = rend;
	even = 0;
	for (i = start; i <= end; ++i) {
		ari_setone(a, n, i, even);
		even += 2;
	}
}

// a[i] = 1,3,5,7 ...
void ari_setall_odd(int a[], int n)
{
	assert(n > 0);
	ari_range_set_odd(a, n, 0, n-1);
}

// a[rstart..rend] = same
void ari_range_set_odd(int a[], int n, int rstart, int rend)
{
	int i;
	int start;
	int end;
	int odd;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	start = rstart;
	end = rend;
	odd = 1;
	for (i = start; i <= end; ++i) {
		ari_setone(a, n, i, odd);
		odd += 2;
	}
}

void ari_print(int a[], int n, char *s) // OKR
{
	assert(n > 0);
	assert(s != NULL);

	printf("%s\t= ", s);

	ari_range_print(a, n, 0, n-1);
}

// print a[rstart..rend]
void ari_range_print(int a[], int n, int rstart, int rend)
{
	int i;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend));
	assert(rend < n);

	start = rstart;
	end = rend;
	for (i = start; i <= end; ++i) {
		printf("%3d ", a[i]);
	}
	printf("\n");
}

void ari_print_format(int a[], int n, char leading, char trailing, char separator) // OKR
{
	int i;
	int start;
	int end;

	assert(n > 0);

	printf("%c", leading);
	start = 0;
	end = n - 1;
	for (i = start; i <= end; ++i) {
		printf("%3d%c", a[i], separator);
	}
	printf(" %c\n", trailing);
}

// print a[rstart..rend] with format characters
void ari_range_print_format(int a[], int n, int rstart, int rend, char leading, char trailing, char separator)
{
	int i;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	printf("%c", leading);
	start = rstart;
	end = rend;
	for (i = start; i <= end; ++i) {
		printf("%3d%c", a[i], separator);
	}
	printf(" %c\n", trailing);
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

int ari_getminpos(int a[], int n) // OKR
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
	assert(n > 0);

	ari_lshiftn(a, n, 1);
}

// left shift by jump and let right values remain
void ari_lshiftn(int a[], int n, int jump) // OKR
{
	int i;
	int left;
	int right;
	int start;
	int stop;

	assert(n > 0);
	assert((0 < jump) && (jump < n));

	// define range limits
	left = 0;
	right = n - 1;

	// define start .. stop of loop index
	start = left;
	stop = right - jump;

	for (i = start; i <= stop; ++i) {
		int j = i + jump;

		// simple range check of array index i and j
		assert((left <= i) && (i <= right));
		assert((left <= j) && (j <= right));

		a[i] = a[j];
	}
}

#ifdef LIBTEST
// left shift test function
void test_lshift(void)
{
	int a[10], b[10], c[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int n = 10;

	ari_setall_square(a, n);
	ari_print(a, n, "a[]");
	ari_setall_square(b, n);
	ari_print(b, n, "b[]");
	ari_print(c, n, "c[]");

	ari_lshift1(a, n);
	ari_print(a, n, "a[lsh1]");
	ari_lshiftn(b, n, 2);
	ari_print(b, n, "b[lsh2]");
	ari_lshiftn(c, n, 3);
	ari_print(c, n, "c[lsh3]");
	ari_setall_square(a, n);
	ari_lshiftn(a, n, 7);
	ari_print(a, n, "a[lsh7]");
}
#endif

// right shift by 1 and let first value remain
void ari_rshift1(int a[], int n) // OKR
{
	assert(n > 0);

	ari_rshiftn(a, n, 1);
}

// right shift by jump and let left values remain
void  ari_rshiftn(int a[], int n, int jump) // OKR
{
	int i;
	int left;
	int right;
	int start;
	int stop;

	assert(n > 0);
	assert((0 < jump) && (jump < n));

	// define range limits
	left = 0;	// usually start, but we are ending here, so call it left
	right = n - 1; // usually end, but we are starting here, so call it right

	// define start .. stop of loop index
	start = right;
	stop = left + jump;

	for (i = start; i >= stop; --i) {
		int j = i - jump;

		assert((left <= i) && (i <= right));
		assert((left <= j) && (j <= right));

		a[i] = a[j];
	}
}

#ifdef LIBTEST
// right shift test function
void test_rshift(void)
{
	int i;
	int a[10], b[10], c[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int n = 10;

	ari_setall_square(a, n);
	ari_print(a, n, "a[]");
	ari_setall_linear(b, n);
	ari_print(b, n, "b[]");
	ari_print(c, n, "c[]");

	ari_rshift1(a, n);
	ari_print(a, n, "a[rsh1]");
	ari_rshiftn(b, n, 2);
	ari_print(b, n, "b[rsh2]");
	ari_rshiftn(c, n, 4);
	ari_print(c, n, "c[rsh4]");
	ari_setall_linear(b, n);
	ari_rshiftn(b, n, 9);
	ari_print(b, n, "b[rsh9]");

	printf("array b[] right shift 1 to 9>");
	ari_setall_linear(b, n);
	ari_print_format(b, n, '[', ']', ',');
	for(i = 1; i < n; ++i) {
		assert((0 < i) && (i < n));
		ari_rshift1(b, n);
		printf("b[rsh%d] = ", i);
		ari_print_format(b, n, '[', ']', ',');
	}
}
#endif

// true if all values are equal across a[] and b[]
bool ari_isequal(int a[], int na, int b[], int nb)
{
	bool isequal = false;

	assert((na > 0) && (nb > 0));

	if (na == nb) {
		isequal = ari_range_isequal(a, na, 0, na-1, b, nb, 0, nb-1);
	}

	return isequal;
}

bool ari_range_isequal(int a[], int na, int rstarta, int renda, 
		       int b[], int nb, int rstartb, int rendb)
{
	int i;
	int j;
	int starta;
	int startb;
	int enda;
	int endb;
	bool isequal = true;

	assert((na > 0) && (nb > 0));
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < na));
	assert((0 <= rstartb) && (rstartb <= rendb) && (rendb < nb));

	starta = rstarta;
	enda = renda;
	startb = rstartb;
	endb = rendb;
	for (i = starta, j = startb; i <= enda; ++i, ++j) {
		if (a[i] != b[j]) {
			isequal = false;
			break;
		}
	}

	return isequal;
}

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

// b = a 
void ari_copy(int a[], int na, int b[], int nb) // OKR
{
	int i;
	int j;
	int starta;
	int enda;
	int startb;
	// DT int endb;

	assert(na > 0);
	assert(nb > 0);
	assert(na <= nb);

	starta = 0; 
	enda = na - 1;
	startb = 0;
	// DT endb = nb - 1;
	for (i = starta, j = startb; i <= enda; ++i, ++j) {
		// range check for i and j
		b[j] = a[i];
	}
	// verify post condition
	assert(i == enda+1);
}

// b[range] = a[range]
void ari_range_copy(int a[], int an, int rstarta, int rend, 
                    int b[], int bn, int rstartb);

// copy a into c, append b to c
void ari_concat(int a[], int na, int b[], int nb, int c[], int nc) // OKR
{
	int i;
	int j;
	int k;
	int starta;
	int startb;
	int startc;
	int enda;
	int endb;
	int endc;

	assert(na > 0);
	assert(nb > 0);
	assert(nc > 0);
	assert((na+nb) <= nc);

	starta = 0;
	enda = na - 1;
	startc = 0;
	endc = nc - 1;
	for (i = starta, k = startc; i <= enda; ++i, ++k) {
		c[k] = a[i];
	}

	startb = 0;
	endb = nb - 1;
	startc = enda + 1;
	endc = nc - 1;
	for (j = startb, k = startc; j <= endb; ++j, ++k) {
		c[k] = b[j];
	}
}

// circular rotate
void ari_lrotat1(int a[], int n) // OKR
{
	int val;
	int first;
	int last;

	assert(n > 0);

	first = 0; // rstart
	last = n - 1; // rend

	val = a[first];
	ari_lshift1(a, n);
	a[last] = val;
}

void ari_rrotat1(int a[], int n) // OKR
{
	int val;
	int first;
	int last;

	assert(n > 0);

	first = 0;
	last =  n - 1;

	val = a[last];
	ari_rshift1(a, n);
	a[first] = val;
}

// jump values will be <= size of array
// if jump is more than array length we cycle back, 
// so we can spin the array contents
void ari_lrotatn(int a[], int n, int jump) // OKR
{
	int i;
	int start;
	int end;
	int j;

	assert(n > 0);
	assert(0 < jump);

	j = jump;
	if (j >= n) {
		j = jump % n;
	}

	assert(j < n);

	start = 1;
	end = j;
	for (i = start; i <= end; ++i) {
		ari_lrotat1(a, n);
	}
}

void ari_rrotatn(int a[], int n, int jump) // OKR
{
	int i;
	int start;
	int end;

	assert(n > 0);
	assert((0 < jump) && (jump < n));

	start = 1;
	end = jump;
	for (i = start; i <= end; ++i) {
		ari_rrotat1(a, n);
	}
} 

void ari_reverse(int a[], int n) // OKR
{
	int i;
	int j;
	int start;
	int end;

	assert(n > 0);

	start = 0;
	end = n - 1;
	for (i = start, j = end; i < j; ++i, --j) {
		assert((start <= i) && (i <= end));
		assert((start <= j) && (j <= end));

		ari_swap_elem(a, n, i, j);
	}
}


#ifdef LIBTEST
static void test_start(char *s)
{
	assert(s != NULL);
	printf("testing %s ...\n", s);
}
#endif

#ifdef LIBTEST
static void test_end(char *s)
{
	assert(s != NULL);
	printf("testing %s ... OK\n", s);
}
#endif

#ifdef LIBTEST
static void test_ari_reverse(bool noisy)
{
#define dbg if (noisy)
	// size 10, size 3, size 2, mentally size 1
	// test first for good case
	// test next  for bounday case
	// test expect to pass and it passes that mean ok
	// test expect to fail and it fails  that mean ok
	
	char *fname = "ari_rotatn";
	// int a[10], b[10], c[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	// int n = 10;
	int a[2], b[2], c[2] = { 1, 0 };
	int n = 2;

	test_start(fname);

	ari_setall_linear(a, n);
	dbg ari_print(a, n, "a");
	ari_setall_square(b, n);
	dbg ari_print(b, n, "b");
	dbg ari_print(c, n, "c");

	ari_lrotatn(a, n, 1);
	ari_print(a, n, "a");

	ari_rrotatn(b, n, 1);
	ari_print(b, n, "b");

	ari_reverse(c, n);
	ari_lrotat1(a, n);
	dbg ari_print(a, n, "a");

	assert(ari_isequal(a, n, c, n));
	test_end(fname);

	fname = "ari_lshift";
	test_start(fname);
	test_lshift();
	test_end(fname);

	fname = "ari_rshift";
	test_start(fname);
	test_rshift();
	test_end(fname);
}
#endif

#ifdef LIBTEST
int main(void)
{
	bool verbose = true;
	// bool silent = false;
	test_ari_reverse(verbose);
	// test_ari_reverse(silent);

	return 0;
}
#endif

