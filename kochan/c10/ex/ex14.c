/* chapter 10 exercise 14 program to converts an integer value into a character string. also handle negative integers.
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int int_to_char(int x, int a[], int n)
{
	int i = 0;

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
	int x;
	int a[10];
	int na = 10;
	char b[] = "0123456789";
	int i, j, len;
	bool is_converted = false;

	i = 0;
	j = 0;
	if (d < 0) {
		d = -d;
		c[j] = '-';
		j = 1;
	}
	len = int_to_char(d, a, na);
	if (len) {
		i = len - 1;
		while (i >= 0) {
			x = a[i];
			assert((0 <= j) && (j < n));
			c[j] = b[x];
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
	int d;
	bool is_str = false;

	printf("convert integer into string with minus sign>\n");
	printf("enter integer: ");
	scanf("%d",&d);
	printf("integer %d\n", d);

	is_str = int_to_string(d, c, n);

	if (is_str) {
		printf(" string ok [ %s ]\n", c);
	} else {
		printf("not converted to string\n");
	}

	return 0;
}

