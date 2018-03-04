/* chapter 10 exercise 14 program to converts an integer value into a character string. also handle negative integers.
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

int int_to_char(int x, int a[], int n)
{
	int i = 0;

	assert(n > 0);

	if (!x) {
		a[i] = x;
		++i;
	}
	while (x) {
		assert((0 <= i) && (i < n));
		a[i] = x % 10;
		x = x / 10;
		++i;
	}

	return i;
}

bool int_to_string(int d, char c[], int n)
{
	int a[10];
	int na = 10;
	char s[] = "0123456789";
	int i, j, k, len;
	bool is_converted = false;

	assert(n > 0);

	i = 0;
	j = 0;
	if (d < 0) {
		d = -d;
		c[j] = '-';
		++j;
	}

	len = 0;
	len = int_to_char(d, a, na);
	if (len) {
		k = 0;
		i = len - 1;
		while (i >= 0) {
			k = a[i];
			assert((0 <= j) && (j < n));
			c[j] = s[k];
			--i;
			++j;
		}
		assert(i < 0);
		c[j] = '\0';
		is_converted = true;
	}

	return is_converted;
}

int main(void)
{
	char c[11];
	int n = 10;
	int d, e;
	bool is_str = false;

	printf("convert integer into string with minus sign>\n");
	printf("enter integer: ");
	e = scanf("%d",&d);
	if (e != 1) {
		printf("scanf error %d\n", e);
		exit(1);
	}
	printf("integer %d\n", d);

	is_str = int_to_string(d, c, n);
	if (is_str) {
		printf("string [ %s ]\n", c);
	} else {
		printf("not converted to string\n");
	}

	return 0;
}

