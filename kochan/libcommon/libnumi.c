
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "libnumi.h"

#if 0
int  numi_factorial(int n) // DOIT factor array algo
int  numi_factorial_rec(int n) // DOIT factor array algo
int  numi_gcd1(int a, int b) // DOIT factor array algo
int  numi_gcd5(int a, int b) // DOIT recursive algo
int  numi_pown_rec(int n, int pow) // DOIT
bool numi_iscomposite(int n) // DOIT
int  numi_trisum_rec(int n) // DOIT
#endif

bool numi_isprime(int n) // OK
{
	int i;
	bool isprime;

	assert(n >= 0);

	if (n <= 1) {
		isprime = false;
	} else if (n <= 3) {
		isprime = true;
	} else if (n % 2 == 0) {
		isprime = false;
	} else {
		isprime = true;
		for (i = 3; i < n; i += 2) {
			if (n % i == 0) {
				isprime = false;
				break;
			}
		}
	}

	return isprime;
}

int  numi_trisum(int n) // OK
{
	int sum = 0;
	int i = 1;

	assert(n >= 0);

       	while (i <= n) {
		sum += i;
		++i;
	}

	return sum;
}

int  numi_pown(int b, int n) // OK
{
	int i;
	int pown = 1;

	assert(n >= 0);

	for (i = 0; i < n; i++) {
		pown *= b;
	}

	return pown;
}

int  numi_gcd2(int a, int b) // DONE our - algo
{
	assert(a > 0);
	assert(b > 0);

	while (a != b) {
		int c;

		printf("cmp %d %d\n", a, b);
		if (a < b) {
			c = b;
			b = a;
			a = c;
		}

		c = a - b;
		if (b <= c) {
			a = c;
		}
		if (b > c) {
			a = b;
			b = c;
		}
	}
	
	return a;
}

int  numi_gcd3(int u, int v) // OK euler algo
{
	int temp;

	assert(u > 0);
	assert(v > 0);

	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int  numi_gcd4(int a, int b) // DONE while loop algo
{
	int c;

	assert(a > 0);
	assert(b > 0);
	
	if (a < b){
		c = b;
		b = a;
		a = c;
	}

	while (a > b) {
		
		if (a - b >= b) {
			a = a - b;
		} else if (a - b <= b) {
			b = a - b;
		}
	
		if (a == b) {
			break;
		}
	}

	return a;
}

