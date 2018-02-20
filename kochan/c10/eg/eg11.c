/* chapter 10 example 11 program to convert a string to an integer
 * vasanth 20 february 2018
 */

#include <stdio.h>

int str_to_int(const char s[])
{
	int i, val, r = 0;

	for (i = 0; (s[i] >= '0') && (s[i] <= '9'); ++i) {
		val = s[i] - '0';
		r = r * 10 + val;
#define DEBUG 0
		if (DEBUG) {
			printf("s %c i %d val %d r %d\n", s[i], i, val, r);
		}
	}

	return r;
}

int main(void)
{
	int r;

	const char a[] = "245";
	const char b[] = "13x5";
	const char c[] = "987654321";

	printf("convert a string to an integer>\n");

	r = str_to_int(a);
	printf("string [ %s ] integer %d\n", a, r);
	r = str_to_int(b);
	printf("string [ %s ] integer %d\n", b, r);
	r = str_to_int(c);
	printf("string [ %s ] integer %d\n", c, r);
	r = str_to_int("5to5ab");
	printf("string [ 5to5ab ] integer %d\n", r);

	return 0;
}

