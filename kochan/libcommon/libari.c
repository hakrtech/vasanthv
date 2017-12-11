/* hakrlib - 
 * vasanth 08 november 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libari.h"

#define within_lele(a, x, b) assert( ((a) <= (x)) && ((x) <= (b)) )

#if 0
void arT_setall(TYPE a[], int n, TYPE val);
void ard_setall(double a[], int n, double val);
void arl_setall(long a[], int n, long val);
void ari_setall(int a[], int n, int val);
void arc_setall(char a[], int n, char val);
#endif

// #define TYPE char
// #define TYPE long
// #define TYPE double

#define TYPE int
#define LOOPER register int
#define SIZE int
#define POS int

void ari_setall(TYPE a[], int n, TYPE val) // OKR
{
	assert(n > 0);

	ari_range_set(a, n, 0, n-1, val);
}

void ari_setone(TYPE a[], int n, int pos, TYPE val) // OKR
{
	assert(n > 0);
	assert((0 <= pos) && (pos < n));

	a[pos] = val;
}

// a[rstart..rend] = val 
void ari_range_set(int a[], int n, int rstart, int rend, int val)
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
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
void ari_range_set_linear(int a[], int n, int rstart, int rend)
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

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
void ari_range_set_square(int a[], int n, int rstart, int rend)
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
		ari_setone(a, n, i, i*i);
	}
}

// a[i] = 0,2,4,6
void ari_setall_even(int a[], int n) // OKR
{
	assert(n > 0);
	ari_range_set_even(a, n, 0, n-1);
}

// a[rstart..rend] = same
void ari_range_set_even(int a[], int n, int rstart, int rend) // OKR
{
	register int i;
	int start;
	register int end;
	register int even;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	even = 0;
	for (i = start; i <= end; ++i) {
		ari_setone(a, n, i, even);
		even += 2;
	}
}

// a[i] = 1,3,5,7 ...
void ari_setall_odd(int a[], int n) // OKR
{
	assert(n > 0);
	ari_range_set_odd(a, n, 0, n-1);
}

// a[rstart..rend] = same
void ari_range_set_odd(int a[], int n, int rstart, int rend) // OKR
{
	register int i;
	int start;
	register int end;
	register int odd;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

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
void ari_range_print(int a[], int n, int rstart, int rend) // OKR
{
	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	ari_range_print_format(a, n, rstart, rend, '[', ']', ' ');
}

void ari_print_format(int a[], int n, char leading, char trailing, char separator) // OKR
{
	assert(n > 0);

	ari_range_print_format(a, n, 0, n-1, leading, trailing, separator);
}

// print a[rstart..rend] with format characters
void ari_range_print_format(int a[], int n, int rstart, int rend, char leading, char trailing, char separator) // OKR
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	printf("%c ", leading);
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
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
		a[i] = a[i] + k;
	}
}

void ari_range_subk(int a[], int n, int rstart, int rend, int k) // OKR
{
	register int i;
	int start;
	register int end;
	
	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
		a[i] = a[i] - k;
	}
}

void ari_range_mulk(int a[], int n, int rstart, int rend, int k) // OKR
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
		a[i] = a[i] * k;
	}
}

void ari_range_divk(int a[], int n, int rstart, int rend, int k) // OKR
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert(k != 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
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

int  ari_range_sum(int a[], int n, int rstart, int rend)
{
	register int i;
	int start;
	register int end;
	register int sum = 0;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
		register int val = a[i]; // IMP

		sum += val;
	}

	return sum;
}

// return maximum of a[]
int  ari_getmax(int a[], int n) // OKR
{
	int maxval;

	assert(n > 0);

	maxval = ari_range_getmax(a, n, 0, n-1);

	return maxval;
}

int ari_range_getmax(TYPE a[], SIZE na, POS rstart, POS rend) // OKR
{
	TYPE maxval;
	LOOPER i;
	POS start;
	POS end;

	assert(na > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < na));

	maxval = ari_get(a, na, rstart);

	// define loop start .. end
	start = rstart + 1;
	end = rend;

	for (i = start; i <= end; ++i) {
		if (a[i] > maxval) {
			maxval = a[i];
		}
	}

	return maxval;
}

// similarly for minimum
int  ari_getmin(int a[], int n) // OKR
{
	int minval;

	assert(n > 0);

	minval = ari_range_getmin(a, n, 0, n-1);

	return minval;
}

int ari_range_getmin(int a[], int na, int rstart, int rend) // OKR
{
	register int i;
	register int minval;
	int start;
	register int end;

	assert(na > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < na));

	minval = ari_get(a, na, rstart);

	// define loop start .. end
	start = rstart + 1;
	end = rend;

	for (i = rstart; i <= rend; ++i) {
		if (a[i] < minval) {
			minval = a[i];
		}
	}

	return minval;
}

int ari_range_getpos(int a[], int na, int rstart, int rend, int val)
{
	register int i;
	int start;
	register int end;
	int pos = -1;

	assert(na > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < na));

	start = rstart;
	end = rend;

	for (i = start; i <= end; ++i) {
		register int v = a[i]; // IMP

		if (v == val) {
			pos = i;
			break;
		}
	}

	assert((pos == -1) || ((rstart <= pos) && (pos <= rend)));

	return pos;
}

// return first leftmost pos of maximum
// return -1 if not found
int  ari_getmaxpos(int a[], int n) // OKR
{
	int pos;

	assert(n > 0);

	pos = ari_range_getmaxpos(a, n, 0, n-1);

	return pos;
}

int ari_range_getmaxpos(int a[], int na, int rstart, int rend) // OKR
{
	int maxval;
	int pos;

	assert(na > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < na));

	maxval = ari_range_getmax(a, na, rstart, rend);
	pos = ari_range_getpos(a, na, rstart, rend, maxval);

	assert((rstart <= pos) && (pos <= rend));

	return pos;
}

int ari_getminpos(int a[], int n) // OKR
{
	int pos;

	assert(n > 0);

	pos = ari_range_getminpos(a, n, 0, n-1);

	return pos;
}

int ari_range_getminpos(int a[], int na, int rstart, int rend) // OKR
{
	int minval;
	int pos;

	assert(na > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < na));

	minval = ari_range_getmin(a, na, rstart, rend);
	pos = ari_range_getpos(a, na, rstart, rend, minval);

	assert((rstart <= pos) && (pos <= rend));

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
	assert(n > 0);
	assert((0 < jump) && (jump < n));

	ari_range_lshiftn(a, n, 0, n-1, jump);
}

// range related shifts
void ari_range_lshift1(int a[], int n, int rstart, int rend) // OKR
{
	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	ari_range_lshiftn(a, n, rstart, rend, 1);
}

// jump values will be <= size of array
void ari_range_lshiftn(int a[], int n, int rstart, int rend, int jump) // OKR
{
	register int i;
	int rlen;
	int start;
	register int stop;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	rlen = (rend - rstart) + 1; /* length of array ra[] */
	assert((0 < jump) && (jump < rlen));

	start = rstart;
	stop = rend - jump;

	for (i = start; i <= stop; ++i) {
		register int j = i + jump; 

		//range check of array index i and j
		assert((rstart <= i) && (i <= rend));
		assert((rstart <= j) && (j <= rend));

		a[i] = a[j];
	}
}

// right shift by 1 and let first value remain
void ari_rshift1(int a[], int n) // OKR
{
	assert(n > 0);

	ari_rshiftn(a, n, 1);
}

// right shift by jump and let left values remain
void  ari_rshiftn(int a[], int n, int jump) // OKR
{
	assert(n > 0);
	assert((0 < jump) && (jump < n));

	ari_range_rshiftn(a, n, 0, n-1, jump);
}

void ari_range_rshift1(int a[], int n, int rstart, int rend) // OKR
{
	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	ari_range_rshiftn(a, n, rstart, rend, 1);
}

void ari_range_rshiftn(int a[], int n, int rstart, int rend, int jump) // OKR
{
	register int i;
	int rlen;
	int left;
	int right;
	int start;
	register int stop;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	rlen = (rend - rstart) + 1; /* length of array ra[] */
	assert((0 < jump) && (jump < rlen));

	// define range limits
	left = rstart;
	right = rend;

	//define start .. stop of loop index
	start = right;
	stop = left + jump;

	for (i = start; i >= stop; --i) {
		register int j = i - jump;

		// range check of array index i and j
		assert((left <= i) && (i <= right));
		assert((left <= j) && (j <= right));

		a[i] = a[j];
	}
}

// true if all values are equal across a[] and b[]
bool ari_isequal(int a[], int na, int b[], int nb) // OKR
{
	bool isequal = false;

	assert((na > 0) && (nb > 0));

	isequal = ari_range_isequal(a, na, 0, na-1, b, nb, 0, nb-1);

	return isequal;
}

bool ari_range_isequal(int a[], int na, int rstarta, int renda, 
		       int b[], int nb, int rstartb, int rendb)
{
	register int i;
	register int j;
	int rlena;
	int rlenb;
	int starta;
	int startb;
	register int enda;
	int endb;
	bool isequal = true;

	assert((na > 0) && (nb > 0));
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < na));
	assert((0 <= rstartb) && (rstartb <= rendb) && (rendb < nb));

	rlena = (renda - rstarta) + 1; /* length of array ra[] */
	rlenb = (rendb - rstartb) + 1; /* length of array rb[] */

	if (rlena != rlenb) { /* check length of array equal or not */ // IMP
		return false;
	}

	starta = rstarta;
	enda = renda;
	startb = rstartb;
	endb = rendb;

	for (i = starta, j = startb; i <= enda; ++i, ++j) {
		if (a[i] != b[i]) {
			isequal = false;
			break;
		}
	}

	return isequal;
}

bool ari_isvalpresent(int a[], int n, int val)
{
	register int i;

	assert(n > 0);

	for (i = 0; i < n; ++i) {
		register int v = a[i]; // IMP

		if (v == val) {
			return true;
		}
	}

	return false;
}

int ari_get(int a[], int n, int pos)
{
	int val;

	assert(n > 0);

	val = ari_range_get(a, n, 0, n-1, pos);

	return val;
}

int ari_range_get(int a[], int n, int rstart, int rend, int rpos) 
{
	int val;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));
	assert((rstart <= rpos) && (rpos <= rend));

	val = a[rpos]; // FIX 

	return val;
}

int ari_getpos(int a[], int n, int val)
{
	int pos;

	assert(n > 0);

	pos = ari_range_getpos(a, n, 0, n-1, val);

	return pos;
}

void ari_swap_elem(int a[], int n, int i, int j)
{
	assert(n > 0);

	ari_range_swap_elem(a, n, 0, n-1, i, j);
}
void ari_range_swap_elem(int a[], int n, int rstart, int rend, int relposi, int relposj)
{
	int val;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));
	assert((rstart <= relposi) && (relposi <= rend));
	assert((rstart <= relposj) && (relposj <= rend));

	val = a[relposi]; // FIX ...
	a[relposi] = a[relposj];
	a[relposj] = val;
}

void ari_sortup(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_sortup(a, n, 0, n-1);
}

void ari_range_sortup(int a[], int n, int rstart, int rend) // OKR
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i < end; ++i) {
		register int j;

		for (j = i+1; j <= end; ++j) {
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
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start; i < end; ++i) {
		register int j;

		for (j = i+1; j <= end; ++j) {
			if (a[i] < a[j]) {
				ari_swap_elem(a, n, i, j);
			}
		}
	}
}

int ari_factor(int a[], int n, int num) // FIX + IMP in reverse order
{
	register int divisor = num;
	register int count = 0;

	assert(n > 0);
	assert(num > 0);

	while (divisor > 0) {
		register int remainder;

		remainder = num % divisor;
		if (remainder == 0) {
			ari_setone(a, n, count, divisor);
			++count;
		}
		--divisor;
	}

	return count;
}

// b = a 
void ari_copy(int a[], int na, int b[], int nb)
{
	assert(na > 0);
	assert(nb > 0);

	ari_range_copy(a, na, 0, na-1, b, nb, 0);
}

// b[range] = a[range]
void ari_range_copy(int a[], int an, int rstarta, int renda, // FIX FIX
                    int b[], int bn, int rstartb)// int rendb)
{
	register int i;
	register int j;
	int starta;
	register int enda;
	int startb;
	int endb;
	int rlena;
	int rlenb;

	assert(an > 0);
	assert(bn > 0);
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < an));
	assert((0 <= rstartb) && (rstartb < bn));

	starta = rstarta;
	enda = renda;
	startb = rstartb;
	endb = bn - 1;

	rlena = (renda - rstarta) + 1; /* length of array ra[] */ // FIX
	rlenb = (endb - rstartb) + 1; /* length of array rb[] */ // FIX

	assert(rlena <= rlenb);
	for (i = starta, j = startb; i <= enda; ++i, ++j) {
		b[j] = a[i];
	}
	assert(i == enda+1);
}

// copy a into c, append b to c
void ari_concat(int a[], int na, int b[], int nb, int c[], int nc)
{
	register int i;
	register int j;
	register int k;
	int starta;
	int startb;
	int startc;
	register int enda;
	register int endb;
	int endc;

	assert(na > 0);
	assert(nb > 0);
	assert(nc > 0);
	assert((na+nb) <= nc);

	starta = 0;
	enda = na - 1;
	startc = 0;
	endc = nc - 1;

// FIX ari range copy
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

void ari_range_concat(int a[], int na, int rstarta, int renda, 
		      int b[], int nb, int rstartb, int rendb,
		      int c[], int nc, int rstartc)
{
	register int i;
	register int j;
	register int k;
	int starta;
	int startb;
	int startc;
	register int enda;
	register int endb;
	int endc;
	int rendc;
	int rlena;
	int rlenb;
	int rlenc;

	assert(na > 0);
	assert(nb > 0);
	assert(nc > 0);
	assert((na+nb) <= nc);
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < na));
	assert((0 <= rstartb) && (rstartb <= rendb) && (rendb < nb));
	assert((0 <= rstartc) && (rstartc < na));

	rlena = (renda - rstarta) + 1; /* length of array ra[] */ // FIX
	rlenb = (rendb - rstarta) + 1; /* length of array rb[] */
	rendc = nc - 1;
	rlenc = (rendc - rstartc) + 1; /* length of array rc[] */
	assert((rlena + rlenb) <= rlenc);

// FIX range copy
	starta = rstarta;
	enda = renda;
	startc = rstartc;
	endc = rendc;

	for (i = starta, k = rstartc; i <= enda; ++i, ++k) {
		c[k] = a[i];
	}

	startb = rstartb;
	endb = rendb;
	startc = enda + 1;
	endc = rendc;

	for (j = startb, k = startc; j <= endb; ++j, ++k) {
		c[k] = b[j];
	}
}

// circular rotate
void ari_lrotat1(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_lrotat1(a, n, 0, n-1);
}

void ari_rrotat1(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_rrotat1(a, n, 0, n-1);
}

// jump values will be <= size of array
// if jump is more than array length we cycle back, 
// so we can spin the array contents
void ari_lrotatn(int a[], int n, int jump) // OKR
{
	assert(n > 0);
	assert((0 < jump) && (jump < n));

	ari_range_lrotatn(a, n, 0, n-1, jump);
}

void ari_rrotatn(int a[], int n, int jump) // OKR
{
	assert(n > 0);
	assert((0 < jump) && (jump < n));

	ari_range_rrotatn(a, n, 0, n-1, jump);
} 

// range related rotate
void ari_range_lrotat1(int a[], int n, int rstart, int rend) // OKR
{
	int val;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	val = a[rstart];
	ari_range_lshift1(a, n, rstart, rend);
	a[rend] = val;
}

void ari_range_rrotat1(int a[], int n, int rstart, int rend) // OKR
{
	int val;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	val = a[rend];
	ari_range_rshift1(a, n, rstart, rend);
	a[rstart] = val;
}

void ari_range_lrotatn_using_copybuf(int a[], int n, int lefta, int righta, int jump) // FIX
{
#define MAX 100
	int b[MAX];
	int nb = MAX;
	register int i;
	register int j;
	int leftb;
	int rightb;
	int starta;
	int startb;
	register int stopa;
	register int stopb;
	int rlen;
	bool debug = false;

	assert(n > 0);
	assert(nb > 0);
	assert((0 <= lefta) && (lefta <= righta) && (righta < n));

	rlen = (righta - lefta) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));
	assert(rlen <= nb);

	ari_setall(b, nb, -1);

	leftb = 0;
	rightb = nb - 1;

	if (debug) {
		printf("DEBUG: ari_range_lrotatn_using_copybuf: before copy1\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

// FIX range2_copy
	// define start .. stop loop
	// copy range a[b..b+j-1] to b[e-j+1..e]
	starta = lefta;
	stopa = lefta + (jump - 1);
	startb = (righta - jump) + 1;
	stopb = righta;
	for (i = starta, j = startb; i <= stopa; ++i, ++j) {
		within_lele(lefta, i, righta);
		within_lele(lefta, i, stopa);
		within_lele(leftb, j, rightb);
		within_lele(lefta, j, stopb);

		b[j] = a[i];
	}

	if (debug) {
		printf("DEBUG: ari_range_lrotatn_using_copybuf: after copy1\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	//define start .. stop loop
	// copy range a[b+j..e] to b[b..e-j]
	starta = lefta + jump;
	stopa = righta;
	startb = lefta;
	stopb = righta - jump;
	for (i = starta, j = startb; i <= stopa; ++i, ++j) {
		within_lele(lefta, i, righta);
		within_lele(lefta, i, stopa);
		within_lele(leftb, j, rightb);
		within_lele(lefta, j, stopb);

		b[j] = a[i];
	}

	if (debug) {
		printf("DEBUG: ari_range_lrotatn_using_copybuf: after copy2\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	// define start .. stop loop
	// copy b[b..e] to a[b..e]
	startb = lefta;
	stopb = righta;
	for (j = startb; j <= stopb; ++j) {
		within_lele(leftb, j, rightb);
		within_lele(lefta, j, righta);

		a[j] = b[j];
	}

	if (debug) {
		printf("DEBUG: ari_range_lrotatn_using_copybuf: after copy3\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}
}

void ari_lrotatn_using_copybuf(int a[], int n, int jump) // OKR
{
	assert(n > 0);

	ari_range_lrotatn_using_copybuf(a, n, 0, n-1, jump);
}

void ari_range_lrotatn_using_reverse(int a[], int n, int rstart, int rend, int jump)
{
	int start;
	int end;
	int rlen;
	bool debug = false;


	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	rlen = (rend - rstart) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));

	// define range
	start = rstart;
	end = rend;

	ari_range_reverse(a, n, start, end);
	if (debug) {
		printf("DEBUG: ari_lrotatn_using_reverse: before copy1\n");
		ari_range_print(a, n, start, end);
	}

	ari_range_reverse(a, n, start, end-jump);
	if (debug) {
		printf("DEBUG: ari_lrotatn_using_reverse: after copy1\n");
		ari_range_print(a, n, start, end);
	}

	ari_range_reverse(a, n, (end-jump)+1, end);
	if (debug) {
		printf("DEBUG: ari_lrotatn_using_reverse: after copy2\n");
		ari_range_print(a, n, start, end);
	}
}

void ari_lrotatn_using_reverse(int a[], int n, int jump)
{
	assert(n > 0);

	ari_range_lrotatn_using_reverse(a, n, 0, n-1, jump);
}

void ari_range_lrotatn_inplace(int a[], int n, int rstart, int rend, int jump); // TODO
void ari_range_lrotatn_repeat_rotat1(int a[], int n, int rstart, int rend, int jump); // DONE
void ari_range_lrotatn(int a[], int n, int rstart, int rend, int jump) // OKR
{
	int i;
	int rlen;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	rlen = (rend - rstart) + 1; /* length of array ra[] */
	assert((0 < jump) && (jump < rlen));

	start = 1;
	end = jump;
	for (i = start; i <= end; ++i) {
		ari_range_lrotat1(a, n, rstart, rend);
	}
}

void ari_range_rrotatn_using_copybuf(int a[], int n, int lefta, int righta, int jump) // NEW
{
#define MAX 100
	int b[MAX];
	int nb = MAX;
	register int i;
	register int j;
	int leftb;
	int rightb;
	int starta;
	int startb;
	register int stopa;
	register int stopb;
	int rlen;
	bool debug = false;

	assert(n > 0);
	assert(nb > 0);
	assert((0 <= lefta) && (lefta <= righta) && (righta < n));

	rlen = (righta - lefta) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));
	assert(rlen <= nb);

	ari_setall(b, nb, -1);
	// define range of array
	leftb = 0;
	rightb = n - 1;

	if (debug) {
		printf("DEBUG: ari_rrotatn_using_copybuf: before copy1\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	// define start .. stop loop index i and j
	// copy range a[begin..end-jump] to b[begin+jump..end]
	// copy range a[b..e-j] to b[b+j..e]
	starta = lefta;
	stopa = righta - jump;
	startb = lefta + jump;
	stopb = righta;

	/* copy range a[lefta      .. righta-jump]
	   to   range b[lefta+jump .. righta]
	 */

	for (i = starta, j = startb; i <= stopa; ++i, ++j) {
		within_lele(lefta, i, righta);
		within_lele(lefta, i, stopa);
		within_lele(leftb, j, rightb);
		within_lele(lefta, j, stopb);

		b[j] = a[i];
	}

	if (debug) {
		printf("DEBUG: ari_rrotatn_using_copybuf: after copy1\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	// define start .. stop loop index i and j
	// copy range a[e-j+1..e] to b[b..b+j-1]
	starta = (righta - jump) + 1;
	stopa = righta;
	startb = lefta;
	stopb = lefta + (jump - 1);
	for (i = starta, j = startb; i <= stopa; ++i, ++j) {
		within_lele(lefta, i, righta);
		within_lele(lefta, i, stopa);
		within_lele(leftb, j, rightb);
		within_lele(lefta, j, stopb);

		b[j] = a[i];
	}

	if (debug) {
		printf("DEBUG: ari_rrotatn_using_copybuf: after copy2\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	//define start .. stop loop
	//copy range b[b..e] to a[b..e]
	startb = lefta;
	stopb = righta;
	for (j = startb; j <= stopb; ++j) {
		within_lele(leftb, j, rightb);
		within_lele(lefta, j, righta);

		a[j] = b[j];
	}

	if (debug) {
		printf("DEBUG: ari_rrotatn_using_copybuf: after copy3\n");
		ari_print(a, n, "a[]");
		ari_print(b, rlen, "b[]");
	}
}

void ari_rrotatn_using_copybuf(int a[], int n, int jump) // NEW
{
	assert(n > 0);
	ari_range_rrotatn_using_copybuf(a, n, 0, n-1, jump);
}

void ari_rrotatn_using_reverse(int a[], int n, int jump) // OKR
{
	int start;
	int end;
	bool debug = false;

	assert(n > 0);
	assert((0 < jump) && (jump < n));

	// define range
	start = 0;
	end = n - 1;

	ari_reverse(a, n);
	if (debug) {
		printf("DEBUG: ari_rrotatn_using_reverse: before copy1\n");
		ari_print(a, n, "[]");
	}

	ari_range_reverse(a, n, start, start+(jump-1));
	if (debug) {
		printf("DEBUG: ari_rrotatn_using_reverse: after copy1\n");
		ari_print(a, n, "[]");
	}

	ari_range_reverse(a, n, start+jump, end);
	if (debug) {
		printf("DEBUG: ari_rrotatn_using_reverse: after copy2\n");
		ari_print(a, n, "[]");
	}
}
void ari_range_rrotatn_inplace(int a[], int n, int rstart, int rend, int jump) // NEW
{
}

void ari_range_rrotatn(int a[], int n, int rstart, int rend, int jump) // OKR
{
	int i;
	int rlen;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	rlen = (rend - rstart) + 1; /* length of array ra[] */
	assert((0 < jump) && (jump < rlen));

	start = 1;
	end = jump;
	for (i = start; i <= end; ++i) {
		ari_range_rrotat1(a, n, rstart, rend);
	}
}

void ari_reverse(int a[], int n) // OKR
{
	assert(n > 0);

	ari_range_reverse(a, n, 0, n-1);
}

void ari_range_reverse(int a[], int n, int rstart, int rend) // OKR
{
	int i;
	int j;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;
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

static void test_end(char *s)
{
	assert(s != NULL);
	printf("testing %s ... OK\n", s);
}

// all print test
void test_print(void)
{
	int a[10], b[10], c[10], d[10];
	int n = 10;

	ari_setall_linear(a, n);
	ari_setall_square(b, n);
	ari_setall_even(c, n);
	ari_setall_odd(d, n);

	ari_print(a, n, "a[]");
	ari_range_print(b, n, 0, n-1);
	ari_print_format(c, n, '{', '}', ',');
	ari_range_print_format(d, n, 0, n-1, '[', ']', ',');
}

// all array get test
void test_get(void)
{
	int a[10] = { 5, -9, 4, 6, 7, -6, 24, 8, 12, 10 };
	int n = 10;
	int val;
	int pos;
	int maxval;
	int minval;
	int maxpos;
	int minpos;

	ari_print(a, n, "a[]");
	pos = ari_getpos(a, n, 10);
	printf("array value 10 possession-> %d\n", pos);
	val = ari_get(a, n, 2);
	printf("array possession 2 value-> %d\n", val);

	maxval = ari_getmax(a, n);
	minval = ari_getmin(a, n);
	maxpos = ari_getmaxpos(a, n);
	minpos = ari_getminpos(a, n);
	printf("array ->\n maxval = %d\n minval = %d\n maxpos = %d\n minpos = %d\n", maxval, minval, maxpos, minpos);
}

// test factor array
void test_factor(void)
{
#define MAX 100
	int a[MAX];
	int n = MAX;
	int val = 33;
	int nfactor;

	ari_setall(a, n, -1);
	nfactor = ari_factor(a, n, val);
	ari_print(a, nfactor, "a[factor]");
}

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

// right shift test function
void test_rshift(void)
{
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
}

// left rotatn using_copybuf test funtion
void test_lrotatncopybuf(void)
{
	int a[10], b[10], c[10];
	int n = 10;

	ari_setall_linear(a, n);
	ari_setall_even(b, n);
	ari_setall_odd(c, n);

	ari_print(a, n, "a[]");
	ari_lrotatn_using_copybuf(a, n, 1);
	ari_print(a, n, "a[lr1]");

	ari_print(b, n, "b[]");
	ari_lrotatn_using_copybuf(b, n, 3);
	ari_print(b, n, "b[lr3]");

	ari_print(c, n, "c[range 5-8 lr]");
	ari_range_lrotatn_using_copybuf(c, n, 5, 8, 2);
	ari_print(c, n, "c[5-8lr2]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[range 0-6 lr]");
	ari_range_lrotatn_using_copybuf(a, n, 0, 6, 5);
	ari_print(a, n, "a[0-6lr5]");

}

// right rotatn using_copybuf test funtion
void test_rrotatncopybuf(void)
{
	int a[10], b[10], c[10];
	int n = 10;

	ari_setall_linear(a, n);
	ari_setall_even(b, n);
	ari_setall_odd(c, n);
	ari_print(a, n, "a[]");
	ari_rrotatn_using_copybuf(a, n, 1);
	ari_print(a, n, "a[rr1]");

	ari_print(b, n, "b[]");
	ari_rrotatn_using_copybuf(b, n, 3);
	ari_print(b, n, "b[rr2]");

	ari_print(c, n, "c[range 1-4 rr]");
	ari_range_rrotatn_using_copybuf(c, n, 1, 4, 2);
	ari_print(c, n, "c[1-4rr2]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[range 0-6 rr]");
	ari_range_rrotatn_using_copybuf(a, n, 0, 6, 5);
	ari_print(a, n, "a[0-6rr5]");
}

// left rotatn using_reverse test funtion
void test_lrotatn_reverse(void)
{
	int a[10], b[10], c[10];
	int n = 10;

	ari_setall_linear(a, n);
	ari_setall_even(b, n);
	ari_setall_odd(c, n);

	ari_print(a, n, "a[]");
	ari_lrotatn_using_reverse(a, n, 1);
	ari_print(a, n, "a[lr1]");

	ari_print(b, n, "b[]");
	ari_lrotatn_using_reverse(b, n, 5);
	ari_print(b, n, "b[lr5]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[range 2-8 lr]");
	ari_range_lrotatn_using_reverse(a, n, 2, 8, 3);
	ari_print(a, n, "a[2-8lr3]");

	ari_print(c, n, "c[range 0-5 lr]");
	ari_range_lrotatn_using_reverse(c, n, 0, 5, 2);
	ari_print(c, n, "c[0-5 lr2]");
}

// right rotatn using_reverse test funtion
void test_rrotatn_reverse(void)
{
	int a[10], b[10], c[10];
	int n = 10;

	ari_setall_linear(a, n);
	ari_setall_even(b, n);
	ari_setall_odd(c, n);

	ari_print(a, n, "a[]");
	ari_rrotatn_using_reverse(a, n, 1);
	ari_print(a, n, "a[rr1]");

	ari_print(b, n, "b[]");
	ari_rrotatn_using_reverse(b, n, 5);
	ari_print(b, n, "b[rr5]");

	ari_print(c, n, "c[]");
	ari_rrotatn_using_reverse(c, n, 9);
	ari_print(c, n, "c[rr9]");
}

static void test_ari_general(bool noisy)
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

	fname = "ari_get";
	test_start(fname);
	test_get();
	test_end(fname);

	fname = "ari_factor";
	test_start(fname);
	test_factor();
	test_end(fname);

	fname = "ari_lrotatn_using_copybuf";
	test_start(fname);
	test_lrotatncopybuf();
	test_end(fname);

	fname = "ari_rrotatn_using_copybuf";
	test_start(fname);
	test_rrotatncopybuf();
	test_end(fname);

	fname = "ari_lrotatn_using_reverse";
	test_start(fname);
	test_lrotatn_reverse();
	test_end(fname);

	fname = "ari_rrotatn_using_reverse";
	test_start(fname);
	test_rrotatn_reverse();
	test_end(fname);

	fname = "ari_rotatn";
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

	fname = "ari_print";
	test_start(fname);
	test_print();
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

int main(void)
{
	bool verbose = true;
	test_ari_general(verbose);

	return 0;
}
#endif

