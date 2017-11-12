#include <stdbool.h>
#include <assert.h>

#include "libnumi.h"

#if 0
int  numi_factorial(int n) // DOIT factor array algo
int  numi_factorial_rec(int n) // DOIT factor array algo
int  numi_gcd1(int a, int b) // DOIT factor array algo
int  numi_gcd2(int a, int b) // DOIT our - algo
int  numi_gcd4(int a, int b) // DOIT while loop algo
int  numi_gcd5(int a, int b) // DOIT recursive algo
int  numi_pown_rec(int n, int pow) // DOIT
bool numi_iscomposite(int n) // DOIT
int  numi_trisum_rec(int n) // DOIT
#endif

bool numi_isprime(int n) // DONE
{
	int d;
	bool isPrime;

	assert(n > 2);

	isPrime = true;
	for (d = 2; d < n; ++d) {
		if (n % d == 0) {
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

int  numi_trisum(int n) //DONE
{
	int sum;
	int i;

	assert(n >= 0);

	sum = 0;
	i = 1;
       	while (i <= n) {
		sum += i;
		++i;
	}

	return sum;
}

int  numi_pown(int x, int n)	// DONE
{
	int i;
	int xnum = 1;

	assert(n >= 0);

	for(i = 0; i < n; i++) {
		xnum *= x;
	}

	return xnum;
}

int  numi_gcd3(int u, int v) // DONE euler algo
{
	int temp;

	assert(u > 0);
	assert(v > 0);

	while ( v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

