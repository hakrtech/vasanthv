/* chapter 10 exercise 11 programt to convert string to integer and also includes minus sign, to get negative numbers.
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <assert.h>

int string_to_integer(char s[])
{
	int i, val, r;

	i = 0;
	if (s[i] == '-') {
		i = 1;
	}

	r = 0;
	while ((s[i] >= '0') && (s[i] <= '9')) {
		val = s[i] - '0';
		r = r * 10 + val;
		++i;
	}
	assert((s[i] < '0') || (s[i] > '9'));

	if (s[0] == '-') {
		r = -r;
	}

	return r;
}

int main(void)
{
	char c[100];
	int d;

	printf("convert minus sign and string to an integer>\n");
	printf("enter a string: ");
	scanf("%s", c);
	d = string_to_integer(c);
	printf("string [ %s ] integer %d\n", c, d);

	return 0;
}

