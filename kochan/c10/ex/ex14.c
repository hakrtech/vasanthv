/* chapter 10 exercise 14 program to converts an integer value into a character string. also handle negative integers.
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <assert.h>

#include "libinput.h"

/* positive integer stored reverse order in an integer array eg. num 234 to a[] = { 4, 3, 2 } */
int int_reverse_ari(int num, int a[], int n)
{
	int i = 0;

	assert(n > 0);
	assert(num >= 0);

	if (num == 0) {
		a[i] = num;
		++i;
	}
	while (num > 0) {
		assert((0 <= i) && (i < n));
		a[i] = num % 10;
		num = num / 10;
		++i;
	}
	assert(num == 0);

	return i;
}

void int_to_string(int num, char output[], int n)
{
	int a[10];
	int na = 10;
	char char_digit[] = "0123456789";
	int i, j, digit, len;

	assert(n > 0);

	j = 0;
	if (num < 0) {
		num = -num;
		output[j] = '-';
		++j;
	}

	len = 0;
	len = int_reverse_ari(num, a, na);
	assert(len > 0);

	i = len - 1;
	while (i >= 0) {
		digit = a[i];
		assert((0 <= j) && (j < n));
		output[j] = char_digit[digit];		/* int digit = a[ len-1 .. 0 ] value used to get pos of character in
							   char_digit[ digit ], a character is stored into output[ 0 .. n-1 ] */
		--i;
		++j;
	}
	assert(i < 0);
	output[j] = '\0';
}

int main(void)
{
	char output[11];
	int n = 10;
	int number;

	printf("convert integer into string with minus sign>\n");
	number = input_decimal_int("enter integer: ");
	printf("integer %d\n", number);

	int_to_string(number, output, n);
	printf("string [ %s ]\n", output);

	return 0;
}

