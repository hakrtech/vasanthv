/* chapter 10 exercise 14 program to converts an integer value into a character string. also handle negative integers.
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <assert.h>

#include "libinput.h"

/* integer stored reverse order in an integer array eg. integer 234 to a[ 4 3 2 ] */
int int_reverse_ari(int val, int a[], int n)
{
	int i = 0;

	assert(n > 0);
	assert(val >= 0);

	if (val == 0) {
		a[i] = val;
		++i;
	}
	while (val) {
		assert((0 <= i) && (i < n));
		a[i] = val % 10;
		val = val / 10;
		++i;
	}
	assert(i > 0);

	return i;
}

void int_to_string(int d, char c[], int n)
{
	int a[10];
	int na = 10;
	char s[] = "0123456789";
	int i, j, k, len;

	assert(n > 0);

	j = 0;
	if (d < 0) {
		d = -d;
		c[j] = '-';
		++j;
	}

	len = 0;
	len = int_reverse_ari(d, a, na);
	assert(len > 0);

	i = len - 1;
	k = 0;
	while (i >= 0) {
		k = a[i];
		assert((0 <= j) && (j < n));
		c[j] = s[k];		/* int k = a[ len-1 .. 0 ] value used to get pos of character in s[ k ], a character is stored into c[ 0 .. n-1 ] */
		--i;
		++j;
	}
	assert(i < 0);
	c[j] = '\0';
}

int main(void)
{
	char c[11];
	int n = 10;
	int d;

	printf("convert integer into string with minus sign>\n");
	d = input_decimal_int("enter integer: ");
	printf("integer %d\n", d);

	int_to_string(d, c, n);
	printf("string [ %s ]\n", c);

	return 0;
}

