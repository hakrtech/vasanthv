/* chapter 10 exercise 12 program to convert a string to  floating poit value
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define NUM(x) ((x >= '0') && (x <= '9'))
#define DOT(y) (y == '.')

float string_to_float(char s[])
{
	int i;
	float val, r, f;
	bool is_dot = false;

	i = 0;
	if (s[i] == '-') {
		i = 1;
	}

	r = 0.0f;
	f = 1.0f;
	while (NUM(s[i]) || DOT(s[i])) {
		if (DOT(s[i])) {
			++i;
			is_dot = true;
		}

		if (is_dot) {
			val = s[i] - '0';
			f = f * 10.0f;
			r = r + (val / f);
		} else {
			val = s[i] - '0';
			r = r * 10.0f + val;
		}

		++i;
	}
	assert(!NUM(s[i]) && !DOT(s[i]));

	if (s[0] == '-') {
		r = -r;
	}

	return r;
}

int main(void)
{
	char c[100];
	float d;

	printf("convert a string to float>\n");
	printf("enter a string: ");
	scanf("%s", c);
	printf(" [ %s ]\n", c);

	d = string_to_float(c);
	printf("string [ %s ] float %f\n", c, d);

	return 0;
}

