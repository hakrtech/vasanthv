/* hakrlib - 
 * vasanth 08 november 2017
 */

#include <stdio.h>
#include <assert.h>

#include "libari.h"
#include "libinteger.h"

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
	int j;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	start = rstart;
	end = rend;

	for (i = start, j = 0; i <= end; ++i, ++j) {
		ari_setone(a, n, i, j);
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

// a[i] = fibonacci(i) 0,1,1,2,3,5,8 ...
void ari_setall_fibonacci(int a[], int n)
{
	register int i;
	int start;
	register int end;

	assert(n > 0);

	// initial fibonacci values
	a[0] = 0;
	if (n > 1) {
		a[1] = 1;
	}

	// define loop start .. end
	start = 2;
	end = n - 1;

	for (i = start; i <= end; i++) {
		a[i] = a[i-2] + a[i-1]; /* fibonacci[i] = fibonacci[i-2] + fibonacci[i-1] */
	}
}

// a[rstart..rend] = fibonacci(i)
void ari_range_set_fibonacci(int a[], int n, int rstart, int rend)
{
	register int i;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	// initial fibonacci values
	a[rstart] = 0;
	if (rstart != rend) {
		a[rstart+1] = 1;
	}

	// define loop start .. end
	start = rstart + 2;
	end = rend;

	for (i = start; i <= end; i++) {
		a[i] = a[i-2] + a[i-1]; /* fibonacci[i] = fibonacci[i-2] + fibonacci[i-1] */
	}
}

// a[i] = factorial(i)
void ari_setall_factorial(int a[], int n)
{
	register int i;
	int start;
	register int end;

	assert(n > 0);

	// initial factorial value
	a[0] = 1;

	// define loop start .. end
	start = 1;
	end = n - 1;

	for (i = start; i <= end; i++) {
		a[i] = i * a[i-1]; /* factorial[i] = i * factorial[i-1] */
	}
}

// a[rstart..rend] = factorial(i)
void ari_range_set_factorial(int a[], int n, int rstart, int rend)
{
	register int i;
	int j;
	int start;
	int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	// initial factorial value
	a[rstart] = 1;

	// define loop start .. end
	start = rstart + 1;
	end =  rend;

	for (i = start, j = 1; i <= end; i++, j++) {
		a[i] = j * a[i-1]; /* factorial[i] = j * factorial[i-1] */
	}
}

// a[i] = prime(i) i'th prime prime(0)=2,prime(1)=3,prime(2)=5,7,11 ...
void ari_setall_prime(int a[], int n)
{
	register int i;
	int j;
	int start;
	register int end;

	assert(n > 0);

	// initial prime value
	a[0] = 2;

	// define loop start .. end
	start = 1;
	end = n - 1;

	bool isprime = true;
	for (i = start, j = 3; i <= end; j+=2) { /* two only prime and other even numbers are not prime depend upon proof. so eliminate even numbers */
		isprime = numi_isprime(j);
		if (isprime) {
			a[i] = j;
			i++;
		}
	}
}

// a[rstart..rend] = prime(i)
void ari_range_set_prime(int a[], int n, int rstart, int rend)
{
	register int i;
	int j;
	int start;
	register int end;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	// initial prime value
	a[rstart] = 2;

	// define loop start .. end
	start = rstart + 1;
	end = rend;

	bool isprime = true;
	for (i = start, j = 3; i <= end; j+=2) { /* two only prime and other even numbers are not prime depend upon proof. so eliminate even numbers */
		isprime = numi_isprime(j);
		if (isprime) {
			a[i] = j;
			i++;
		}
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
		sum += a[i];
	}

	return sum;
}

// calculate average
double ari_stat_mean(int a[], int n)
{
	int sum = -1;
	double avg = -0.1;

	assert(n > 0);

	sum = ari_sum(a, n);
	avg = sum / n;

	return avg;
}

// calculate median
int ari_stat_median(int a[], int n, int median[2])
{
	int middle = -1;
#define MAX 100
	int b[MAX];
	int mn;

	assert(n > 0);

	ari_copy(a, n, b, n);
	ari_sortup(b, n);
	if (n % 2 == 0) {
		middle = n / 2;
		median[0] = b[middle - 1];
		median[1] = b[middle];
		mn = 2;
	} else {
		middle = (n - 1) / 2;
		median[0] = b[middle];
		mn = 1;
	}

	return mn;
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

int ari_range_getmin(int a[], int na, int rstart, int rend)
{
	register int i;
	int minval;
	int start;
	register int end;

	assert(na > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < na));

	minval = ari_get(a, na, rstart);

	// define loop start .. end
	start = rstart + 1;
	end = rend;

	for (i = start; i <= end; ++i) {
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
		if (a[i] == val) {
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

	rlen = (rend - rstart) + 1; /* length of range */
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

	rlen = (rend - rstart) + 1; /* length of range */
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
	// int endb; // NOTUSED
	bool isequal = true;

	assert((na > 0) && (nb > 0));
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < na));
	assert((0 <= rstartb) && (rstartb <= rendb) && (rendb < nb));

	rlena = (renda - rstarta) + 1; /* length of range */
	rlenb = (rendb - rstartb) + 1; /* length of range */

	if (rlena != rlenb) { /* length of range equal or not */
		return false;
	}

	starta = rstarta;
	enda = renda;
	startb = rstartb;
	// endb = rendb; // NOTUSED

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
		if (a[i] == val) {
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

int ari_factor(int a[], int n, int num)
{
	register int i;
	int start;
	register int stop;
	int count = 0;

	assert(n > 0);
	assert(num > 0);

	// define loop start .. stop
	start = 1;
	stop = num;

	for (i = start; i <= stop; ++i) {
		register int remainder;

		remainder = num % i;
		if (remainder == 0) {
			ari_setone(a, n, count, i);
			++count;
		}
	}

	return count;
}

// b = a 
void ari_copy(int a[], int na, int b[], int nb)
{
	assert(na > 0);
	assert(nb > 0);

	ari_range_copy(a, na, 0, na-1, b, nb, 0, nb-1);
}

// b[range] = a[range]
void ari_range_copy(int a[], int an, int rstarta, int renda,
                    int b[], int bn, int rstartb, int rendb)
{
	register int i;
	register int j;
	int starta;
	register int enda;
	int startb;
	// int endb; // NOTUSED
	int rlena;
	int rlenb;

	assert(an > 0);
	assert(bn > 0);
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < an));
	assert((0 <= rstartb) && (rstartb <= rendb) && (rendb < bn));

	starta = rstarta;
	enda = renda;
	startb = rstartb;
	// endb = rendb; // NOTUSED

	rlena = (renda - rstarta) + 1; /* length of range */
	rlenb = (rendb - rstartb) + 1; /* length of range */

	assert(rlena <= rlenb);
	for (i = starta, j = startb; i <= enda; ++i, ++j) {
		b[j] = a[i];
	}
	assert(i == enda+1);
}

// copy a into c, append b to c
void ari_concat(int a[], int na, int b[], int nb, int c[], int nc)
{
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

	// define range a[0 .. na-1] to c[0 .. nc-1]
	starta = 0;
	enda = na - 1;
	startc = 0;
	endc = nc - 1;
	ari_range_copy(a, na, starta, enda, c, nc, startc, endc);

	// define range b[0 .. nb-1] to c[na .. nc-1]
	startb = 0;
	endb = nb - 1;
	startc = enda + 1;
	endc = nc - 1;
	ari_range_copy(b, nb, startb, endb, c, nc, startc, endc);
}

void ari_range_concat(int a[], int na, int rstarta, int renda, 
		      int b[], int nb, int rstartb, int rendb,
		      int c[], int nc, int rstartc)
{
	int starta;
	int startb;
	int startc;
	int enda;
	int endb;
	int endc;
	int rendc;
	int rlena;
	int rlenb;
	int rlenc;

	assert(na > 0);
	assert(nb > 0);
	assert(nc > 0);
	assert((0 <= rstarta) && (rstarta <= renda) && (renda < na));
	assert((0 <= rstartb) && (rstartb <= rendb) && (rendb < nb));
	assert((0 <= rstartc) && (rstartc < nc));

	rlena = (renda - rstarta) + 1; /* length of range */
	rlenb = (rendb - rstarta) + 1; /* length of range */
	rendc = nc - 1;
	rlenc = (rendc - rstartc) + 1; /* length of range */
	assert((rlena + rlenb) <= rlenc);

	// define range a[rstarta .. renda] to c[rstartc .. rendc]
	starta = rstarta;
	enda = renda;
	startc = rstartc;
	endc = rendc;
	ari_range_copy(a, na, starta, enda, c, nc, startc, endc);

	// define range b[rstartb .. rendb] to c[rlena .. rendc]
	startb = rstartb;
	endb = rendb;
	startc = rlena;
	endc = rendc;
	ari_range_copy(b, nb, startb, endb, c, nc, startc, endc);
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

void ari_range_lrotatn_using_copybuf(int a[], int n, int lefta, int righta, int jump)
{
#define MAX 100
	int b[MAX];
	int nb = MAX;
	// int leftb;
	// int rightb;
	int starta;
	int startb;
	int stopa;
	int stopb;
	int rlen;
	bool debug = false;

	assert(n > 0);
	assert(nb > 0);
	assert((0 <= lefta) && (lefta <= righta) && (righta < n));

	rlen = (righta - lefta) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));
	assert(rlen <= nb);

	ari_setall(b, nb, -1);

	// define range
	// leftb = 0;
	// rightb = nb - 1;

	if (debug) {
		printf("DEBUG: ari_range_lrotatn_using_copybuf: before copy1\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	// copy range a[b..b+j-1] to b[e-j+1..e]
	starta = lefta;
	stopa = lefta + (jump - 1);
	startb = (righta - jump) + 1;
	stopb = righta;
	ari_range_copy(a, n, starta, stopa, b, nb, startb, stopb);

	if (debug) {
		printf("DEBUG: ari_range_lrotatn_using_copybuf: after copy1\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	// copy range a[b+j..e] to b[b..e-j]
	starta = lefta + jump;
	stopa = righta;
	startb = lefta;
	stopb = righta - jump;
	ari_range_copy(a, n, starta, stopa, b, nb, startb, stopb);

	if (debug) {
		printf("DEBUG: ari_range_lrotatn_using_copybuf: after copy2\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	// copy b[b..e] to a[b..e]
	startb = lefta;
	stopb = righta;
	ari_range_copy(b, nb, startb, stopb, a, n, startb, stopb);

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

void ari_lrotatn_chain(int a[], int n, int jump, int cstart)
{
	register int i = -1;
	int left = -1;
	int right = -1;
	int start = -1;
	register int stop = -1;
	int current = -1;

	assert(n > 0);
	assert((0 <= cstart) && (cstart < n));
	assert((0 < jump) && (jump < n));

	// define range
	left = 0;
	right = n - 1;

	// define loop start .. stop
	start = cstart;
	stop = start;

	current = a[start];
	bool first = true;
	for (i = start; first || (i != stop); i=i) {
		int next = -1;

		if (first) {
			first = false;
		}

		i = i - jump;
		if (i < left) {
			i = right + i + 1;
		}

		assert((left <= i) && (i <= right));

		next = a[i];
		a[i] = current;
		current = next;
	}
}

void ari_range_lrotatn_chain(int a[], int n, int jump, int rstart, int rend, int cstart)
{
	register int i;
	int left;
	int right;
	int start;
	register int stop;
	int current;
	int rlen;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));
	assert((rstart <= cstart) && (cstart <= rend));

	rlen = (rend - rstart) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));

	// define range
	left = rstart;
	right = rend;

	// define loop start .. stop
	start = cstart;
	stop = start;

	current = a[start];
	bool first = true;
	for (i = start; first || (i != stop); i=i) {
		int next;

		if (first) {
			first = false;
		}

		i = i - jump;
		if (i < left) {
			i = i - left;
			i = right + i + 1;
		}

		assert((left <= i) && (i <= right));

		next = a[i];
		a[i] = current;
		current = next;
	}
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

	rlen = (rend - rstart) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));

	start = 1;
	end = jump;
	for (i = start; i <= end; ++i) {
		ari_range_lrotat1(a, n, rstart, rend);
	}
}

void ari_range_rrotatn_using_copybuf(int a[], int n, int lefta, int righta, int jump)
{
#define MAX 100
	int b[MAX];
	int nb = MAX;
	// int leftb;
	// int rightb;
	int starta;
	int startb;
	int stopa;
	int stopb;
	int rlen;
	bool debug = false;

	assert(n > 0);
	assert(nb > 0);
	assert((0 <= lefta) && (lefta <= righta) && (righta < n));

	rlen = (righta - lefta) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));
	assert(rlen <= nb);

	ari_setall(b, nb, -1);

	// define range
	// leftb = 0;
	// rightb = n - 1;

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
	ari_range_copy(a, n, starta, stopa, b, nb, startb, stopb);

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
	ari_range_copy(a, n, starta, stopa, b, nb, startb, stopb);

	if (debug) {
		printf("DEBUG: ari_rrotatn_using_copybuf: after copy2\n");
		ari_print(a, n, "a[]");
		ari_range_print(b, n, lefta, righta);
	}

	//define start .. stop loop
	//copy range b[b..e] to a[b..e]
	startb = lefta;
	stopb = righta;
	ari_range_copy(b, nb, startb, stopb, a, n, startb, stopb);

	if (debug) {
		printf("DEBUG: ari_rrotatn_using_copybuf: after copy3\n");
		ari_print(a, n, "a[]");
		ari_print(b, rlen, "b[]");
	}
}

void ari_rrotatn_using_copybuf(int a[], int n, int jump)
{
	assert(n > 0);
	ari_range_rrotatn_using_copybuf(a, n, 0, n-1, jump);
}

void ari_range_rrotatn_using_reverse(int a[], int n, int rstart, int rend, int jump)
{
	int start;
	int end;
	int rlen;
	bool debug = false;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));

	rlen = (rend - rstart) + 1;
	assert((0 < jump) && (jump < rlen));

	// define range
	start = rstart;
	end = rend;

	ari_range_reverse(a, n, start, end);
	if (debug) {
		printf("DEBUG: ari_rrotatn_using_reverse: before copy1\n");
		ari_range_print(a, n, start, end);
	}

	ari_range_reverse(a, n, start, start+(jump-1));
	if (debug) {
		printf("DEBUG: ari_rrotatn_using_reverse: after copy1\n");
		ari_range_print(a, n, start, end);
	}

	ari_range_reverse(a, n, start+jump, end);
	if (debug) {
		printf("DEBUG: ari_rrotatn_using_reverse: after copy2\n");
		ari_range_print(a, n, start, end);
	}
}

void ari_rrotatn_using_reverse(int a[], int n, int jump)
{
	assert(n > 0);

	ari_range_rrotatn_using_reverse(a, n, 0, n-1, jump);
}

void ari_rchain1(int a[], int n, int cstart)
{
	assert(n > 0);
	assert((0 <= cstart) && (cstart < n));

	ari_rrotat1(a, n);
}

void ari_rrotatn_chain(int a[], int n, int jump, int cstart)
{
	register int i = -1;
	int left = -1;
	int right = -1;
	int start = -1;
	register int stop = -1;
	int current = -1;

	assert(n > 0);
	assert((0 < jump) && (jump < n));
	assert((0 <= cstart) && (cstart < n));

	// define range
	left = 0;
	right = n - 1;

	// define loop start .. stop
	start = cstart;
	stop = start;

	current = a[start];
	bool first = true;
	for (i = start; first || (i != stop); ) {
		int next;

		if (first) {
			first = false;
		}

		i = (i + jump) % n;

		assert((left <= i) && (i <= right));

		next = a[i];
		a[i] = current;
		current = next;
	}
}

void ari_range_rrotatn_chain(int a[], int n, int jump, int rstart, int rend, int startat)
{
	register int i = -1;
	int left = -1;
	int right = -1;
	int start = -1;
	register int stop = -1;
	int current = -1;
	int rlen = -1;

	assert(n > 0);
	assert((0 <= rstart) && (rstart <= rend) && (rend < n));
	assert((rstart <= startat) && (startat <= rend));

	rlen = (rend - rstart) + 1; /* length of range */
	assert((0 < jump) && (jump < rlen));

	// range
	left = rstart;
	right = rend;

	// define loop
	start = startat;
	stop = start;

	current = a[start];
	bool first = true;
	for (i = start; first || (i != stop); ) {
		int next = -1;

		if (first) {
			first = false;
		}

		i = i + jump;
		if (i > right) {
			i = i - right;
			i = left + i - 1;
		}

		assert((left <= i) && (i <= right));

		next = a[i];
		a[i] = current;
		current = next;
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

	rlen = (rend - rstart) + 1; /* length of range */
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

void ari_reverse_copy(int a[], int na, int b[], int nb)
{
	register int i;
	int j;
	int lefta;
	int righta;
	int leftb;
	int rightb;
	int starta;
	register int stopa;
	int startb;
	// int stopb;

	assert(na > 0);
	assert(nb > 0);
	assert(na <= nb);

	ari_setall(b, nb, -1);

	// define range
	lefta = 0;
	righta = na - 1;
	leftb = 0;
	rightb = nb - 1;

	// define loop a[0 .. na-1] to b[na-1 .. 0]
	starta = lefta;
	stopa = righta;
	startb = righta;
	// stopb = lefta;

	for (i = starta, j = startb; i <= stopa; i++, j--) {
		assert((lefta <= i) && (i <= righta));
		assert((leftb <= j) && (j <= rightb));

		b[j] = a[i];
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

// array setall fibonacci test
void test_setall_fibo(void)
{
	int a[10];
	int n = 10;

	ari_setall_fibonacci(a, n);
	ari_print(a, n, "a[fibo]");

	ari_setall(a, n, -1);
	ari_print(a, n, "a[]");
	ari_range_set_fibonacci(a, n, 3, 7);
	ari_print(a, n, "a[3fb7]");
	ari_range_print(a, n, 3, 7);

	ari_setall(a, n, -1);
	ari_print(a, n, "a[]");
	ari_range_set_fibonacci(a, n, 3, 3);
	ari_print(a, n, "a[3fb3]");
	ari_range_print(a, n, 3, 3);

	ari_setall_square(a, n);
	ari_print(a, n, "a[sqr]");
	ari_range_set_fibonacci(a, n, 5, 8);
	ari_print(a, n, "a[5fb8]");
	ari_range_print(a, n, 5, 8);
}

// array setall factorial test
void test_setall_fact(void)
{
	int a[10];
	int n = 10;

	ari_setall_factorial(a, n);
	ari_print(a, n, "a[fact]");

	ari_setall(a, n, -1);
	ari_print(a, n, "a[]");
	ari_range_set_factorial(a, n, 2, 5);
	ari_print(a, n, "a[2ft5]");
	ari_range_print(a, n, 2, 5);

	ari_setall(a, n, -1);
	ari_print(a, n, "a[]");
	ari_range_set_factorial(a, n, 5, 5);
	ari_print(a, n, "a[5ft5]");
	ari_range_print(a, n, 5, 5);

	ari_setall_linear(a, n);
	ari_print(a, n, "a[lin]");
	ari_range_set_factorial(a, n, 4, 9);
	ari_print(a, n, "a[4ft9]");
	ari_range_print(a, n, 4, 9);
}

// array setall prime test
void test_setall_prime(void)
{
	int a[10];
	int n = 10;

	ari_setall(a, n, -1);
	ari_setall_prime(a, n);
	ari_print(a, n, "a[prim]");

	ari_setall(a, n, -1);
	ari_print(a, n, "a[]");
	ari_range_set_prime(a, n, 3, 7);
	ari_print(a, n, "a[3pm7]");
	ari_range_print(a, n, 3, 7);

	ari_setall(a, n, -1);
	ari_print(a, n, "a[]");
	ari_range_set_prime(a, n, 9, 9);
	ari_print(a, n, "a[9pm9]");
	ari_range_print(a, n, 9, 9);

	ari_setall(a, n, -1);
	ari_print(a, n, "a[lin]");
	ari_range_set_prime(a, n, 0, 8);
	ari_print(a, n, "a[0pm8]");
	ari_range_print(a, n, 0, 8);
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

	ari_setall(a, n, -1);
	nfactor = ari_factor(a, n, 1008);
	ari_print(a, nfactor, "a[factor]");
}

// array copy test
void test_copy(void)
{
	int a[10], b[10], c[10], d[10];
	int n = 10;

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");
	ari_setall(b, n, -1);
	ari_copy(a, n, b, n);
	ari_print(b, n, "b[]");

	ari_setall_even(c, n);
	ari_print(c, n, "c[]");
	ari_setall(d, n, -1);
	ari_range_copy(c, n, 0, 3, d, n, 6, 9);
	ari_range_print_format(d, n, 6, 9, '[', ']', ',');

	ari_print(a, n, "a[]");
	ari_setall(b, n, -1);
	ari_range_copy(a, n, 5, 9, b, n, 0, 4);
	ari_range_print(b, n, 0, 4);
}

// array concatenate test function
void test_concat(void)
{
	int a[10], b[10];
	int n = 10;
#define MAX 100
	int c[MAX];
	int nc = MAX;

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");
	ari_setall_square(b, n);
	ari_print(b, n, "b[]");

	nc = n+n;
	ari_setall(c, nc, -1);
	ari_print(c, nc, "c[]");

	ari_concat(a, n, b, n, c, nc);
	ari_print(c, nc, "concat>");

	ari_print(a, n, "a[]");
	ari_print(b, n, "b[]");

	nc = n+n;
	ari_setall(c, nc, -1);
	ari_print(c, nc, "c[]");
	ari_range_concat(a, n, 5, n-1, b, n, 5, n-1, c, nc, 0);
	ari_print(c, nc, "rcncat>");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	nc = n;
	ari_setall(c, nc, -1);
	ari_print(c, nc, "c[]");
	ari_range_concat(a, n, 5, n-1, a, n, 0, 4, c, nc, 0);
	ari_print(c, nc, "rcncat>");
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
	ari_print(b, n, "b[rr3]");

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

	ari_setall_linear(a, n);
	ari_print(a, n, "a[range 2-5 rr]");
	ari_range_rrotatn_using_reverse(a, n, 2, 5, 2);
	ari_print(a, n, "a[2-5 rr2]");

	ari_print(c, n, "c[range 5-9 rr]");
	ari_range_rrotatn_using_reverse(c, n, 5, 9, 3);
	ari_print(c, n, "c[5-9 rr3]");
}

// right rotat1 chain test
void test_rchain(void)
{
	int a[10], b[10], c[10];
	int n = 10;

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rchain1(a, n, 0);
	ari_print(a, n, "a[cs0]");

	ari_setall_even(b, n);
	ari_print(b, n, "b[]");

	ari_rchain1(b, n, 1);
	ari_print(b, n, "b[cs1]");

	ari_setall_odd(c, n);
	ari_print(c, n, "c[]");

	ari_rchain1(c, n, 9);
	ari_print(c, n, "c[cs9]");
}

// right rotat n chain test
void test_rrotatn_chain(void)
{
	int a[10];
	int n = 10;

	// n = 9;
	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 1, 0);
	ari_print(a, n, "a[1cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 2, 0);
	ari_print(a, n, "a[2cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 3, 0);
	ari_print(a, n, "a[3cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 4, 0);
	ari_print(a, n, "a[4cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 5, 0);
	ari_print(a, n, "a[5cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 6, 0);
	ari_print(a, n, "a[6cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 7, 0);
	ari_print(a, n, "a[7cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 8, 0);
	ari_print(a, n, "a[8cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_rrotatn_chain(a, n, 9, 0);
	ari_print(a, n, "a[9cs0]");
}

// range right rotat n chain test
void test_range_rrotatn_chain(void)
{
	int a[100];
	int n = 20;
	int rstart = 5;
	int rstop = 14;
	int chain = 5;

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j1c5]");

	ari_range_rrotatn_chain(a, n, 1, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j2c5]");

	ari_range_rrotatn_chain(a, n, 2, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j3c5]");

	ari_range_rrotatn_chain(a, n, 3, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j4c5]");

	ari_range_rrotatn_chain(a, n, 4, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j5c5]");

	ari_range_rrotatn_chain(a, n, 5, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j6c5]");

	ari_range_rrotatn_chain(a, n, 6, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j7c5]");

	ari_range_rrotatn_chain(a, n, 7, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j8c5]");

	ari_range_rrotatn_chain(a, n, 8, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j9c5]");

	ari_range_rrotatn_chain(a, n, 9, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);
}

// left rotat n chain test
void test_lrotatn_chain(void)
{
	int a[10];
	int n = 10;

	// n = 9;
	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 1, 0);
	ari_print(a, n, "a[1cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 2, 0);
	ari_print(a, n, "a[2cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 3, 0);
	ari_print(a, n, "a[3cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 4, 0);
	ari_print(a, n, "a[4cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 5, 0);
	ari_print(a, n, "a[5cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 6, 0);
	ari_print(a, n, "a[6cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 7, 0);
	ari_print(a, n, "a[7cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 8, 0);
	ari_print(a, n, "a[8cs0]");

	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");

	ari_lrotatn_chain(a, n, 9, 0);
	ari_print(a, n, "a[9cs0]");
}

// range left rotat n chain test
void test_range_lrotatn_chain(void)
{
	int a[100];
	int n = 15;
	int rstart = 3;
	int rstop = 12;
	int chain = 3;

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j1c3]");

	ari_range_lrotatn_chain(a, n, 1, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j2c3]");

	ari_range_lrotatn_chain(a, n, 2, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j3c3]");

	ari_range_lrotatn_chain(a, n, 3, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j4c3]");

	ari_range_lrotatn_chain(a, n, 4, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j5c3]");

	ari_range_lrotatn_chain(a, n, 5, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j6c3]");

	ari_range_lrotatn_chain(a, n, 6, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j7c3]");

	ari_range_lrotatn_chain(a, n, 7, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j8c3]");

	ari_range_lrotatn_chain(a, n, 8, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);

	ari_setall(a, n, -1);
	ari_range_set_linear(a, n, rstart, rstop);
	ari_print(a, n, "a[j9c3]");

	ari_range_lrotatn_chain(a, n, 9, rstart, rstop, chain);
	ari_range_print(a, n, rstart, rstop);
}

// test array calculation
void test_ari_calculation(void)
{
	int a[10];
	int n = 10;
	int sum = -1;
	double mean = -0.01;

	ari_setall_odd(a, n);
	ari_print(a, n, "a[]");

	sum = ari_sum(a, n);
	printf("sum of array %d\n", sum);

	mean = ari_stat_mean(a, n);
	printf("mean of array %lf\n", mean);

	int b[10] = { 23, 4, 35, 56, 90, 2, -12, 7, 93, 32 };
	int med[2];
	int mn = 2;

	n = 10;
	ari_print(b, n, "b[]");

	ari_setall(med, mn, -1);
	ari_print(med, mn, "med[]");

	mn = ari_stat_median(b, n, med);
	ari_print(med, mn, "med[]");
}

// teat array reverse copy
void test_reverse_copy(void) {
	int a[10];
	int b[10];
	int n = 10;

	ari_setall_square(a, n);
	ari_print(a, n, "a[sqr]");

	ari_setall(b, n, -1);
	ari_reverse_copy(a, n, b, n);
	ari_print(b, n, "b[revs]");
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

	fname = "ari_setall_fibonacci";
	test_start(fname);
	test_setall_fibo();
	test_end(fname);

	fname = "ari_setall_factorial";
	test_start(fname);
	test_setall_fact();
	test_end(fname);

	fname = "ari_setall_prime";
	test_start(fname);
	test_setall_prime();
	test_end(fname);

	fname = "ari_get";
	test_start(fname);
	test_get();
	test_end(fname);

	fname = "ari_factor";
	test_start(fname);
	test_factor();
	test_end(fname);

	fname = "ari_copy";
	test_start(fname);
	test_copy();
	test_end(fname);

	fname = "ari_concat";
	test_start(fname);
	test_concat();
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

	fname = "ari_rchain";
	test_start(fname);
	test_rchain();
	test_end(fname);

	fname = "ari_rrotatn_chain";
	test_start(fname);
	test_rrotatn_chain();
	test_end(fname);

	fname = "ari_range_rrotatn_chain";
	test_start(fname);
	test_range_rrotatn_chain();
	test_end(fname);

	fname = "ari_lrotatn_chain";
	test_start(fname);
	test_lrotatn_chain();
	test_end(fname);

	fname = "ari_range_lrotatn_chain";
	test_start(fname);
	test_range_lrotatn_chain();
	test_end(fname);

	fname = "ari_calculation";
	test_start(fname);
	test_ari_calculation();
	test_end(fname);

	fname = "ari_reverse_copy";
	test_start(fname);
	test_reverse_copy();
	test_end(fname);
}

int main(void)
{
	bool verbose = true;
	test_ari_general(verbose);

	return 0;
}
#endif

