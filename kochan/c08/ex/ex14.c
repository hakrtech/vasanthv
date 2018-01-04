/* Chapter 08 Exercise 14 Rewrite the last four exercises to use global variables
 * Vasanth 03 January 2018
 */

#include <stdio.h>

#include "libinteger.h"
#include "libarray.h"
#include "libmatrix.h"

int num;
_Bool isprime = 0;
int a[10];
int n;
int m[100][100] = { 
	{ 1,  2,  3,  4,  5},
	{ 6,  7,  8,  9, 10},
	{11, 12, 13, 14, 15},
	{16, 17, 18, 19, 20}
 };
int tpos_n[100][100];
int r, c;

void prime(void)
{
	isprime = numi_isprime(num);
	if(isprime) {
		printf("return 1 num %d is prime\n", num);
	} else {
		printf("return 0 num %d is composite\n", num);
	}
}

void arraysum(void)
{
	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");
	num = ari_sum(a, n);
	printf("sum of array %d\n", num);
}

void tposmatrix(void)
{
	printf("M[4*5] matrix>\n");
	mxi_print(m, r, c);
	printf("N[5*4] transposeMatrix>\n");
	mxi_transpose(m, r, c, tpos_n);
	mxi_print(tpos_n, c, r);
}

void sort(void)
{
	ari_range_set_square(a, n, 3, 6);
	printf("Choice:\n 1. ascending order\n 2. descending order\n 3. print array\t > ");
	scanf("%d", &num);
	printf("%d\n", num);

	switch (num) {
	case 1:
		printf("sorted ascending order\n");
		ari_sortup(a, n);
		ari_print(a, n, "a[asc]");
		break;
	case 2:
		printf("sorted descenting order\n");
		ari_sortdown(a, n);
		ari_print(a, n, "a[des]");
		break;
	case 3:
		printf("printed array\n");
		ari_print(a, n, "a[]");
		break;
	default:
		printf("choice incorrect!!!\n");
	}
}

int main(void)
{
	num = 2;
	n = 10;
	prime();
	arraysum();
	prime();
	r = 4;
	c = 5;
	tposmatrix();
	sort();

	return 0;
}

