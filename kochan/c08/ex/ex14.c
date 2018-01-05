/* Chapter 08 Exercise 14 Rewrite the last four exercises to use global variables
 * Vasanth 03 January 2018
 */

#include <stdio.h>
#include <stdlib.h>

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
int d;

void ask_input(void)
{
	d = scanf("%d", &num);
	printf("%d\n", num);

	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}
}

void chk_prime(void)
{
	printf("num prime or not > ");
	ask_input();

	isprime = numi_isprime(num);
	if (isprime) {
		printf("return 1 num %d is prime\n", num);
	} else {
		printf("return 0 num %d is composite\n", num);
	}
}

void array_sum(void)
{
	ari_setall_linear(a, n);
	ari_print(a, n, "a[]");
	num = ari_sum(a, n);
	printf("sum of array %d\n", num);
}

void tpos_matrix(void)
{
	printf("M[4*5] matrix>\n");
	mxi_print(m, r, c);
	printf("N[5*4] transposeMatrix>\n");
	mxi_transpose(m, r, c, tpos_n);
	mxi_print(tpos_n, c, r);
}

void array_sort(void)
{
	printf("Choice:\n 0. print array\n 1. ascending order\n 2. descending order\n 3. exit\t > ");
	ask_input();

	switch (num) {
	case 0:
		printf("printed array\n");
		ari_print(a, n, "a[]");
		break;
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
		exit(1);
		break;
	default:
		printf("incorrect! choice again\n");
	}

	array_sort();
}

int main(void)
{
	chk_prime();
	n = 10;
	array_sum();
	r = 4;
	c = 5;
	tpos_matrix();
	ari_range_set_square(a, n, 3, 6);
	array_sort();

	return 0;
}

