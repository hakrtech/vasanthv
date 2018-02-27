/* chapter 10 exercise 07 program to insert one character string into another string
 * vasanth 27 february 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int string_length(char s[])
{
	int i = 0;

	while (s[i] != '\0') {
		++i;
	}
	assert(s[i] == '\0');

	return i;
}

bool string_shift(char s[], int len, int pos, int jump)
{
	int i, j;
	bool is_shifted = false;

	assert(len > 0);
	assert((0 <= pos) && (pos < len));
	assert(jump > 0);

	// loop s[pos .. len-1] to shifted s[pos+jump .. len+jump-1]
	i = len - 1;
	j = (len + jump) - 1;
	while (i >= pos) {
		s[j] = s[i];
		--i;
		--j;
	}
	if (i < pos) {
		s[len+jump] = '\0';
		is_shifted = true;
	}

	return is_shifted;
}

void string_insert(char s[], int pos, char as[])
{
	int i, j, s_len, as_len;
	bool is_shifted = false;

	assert(pos >= 0);
	s_len = string_length(s);
	assert(pos < s_len);

	as_len = string_length(as);
	is_shifted = string_shift(s, s_len, pos, as_len);
	if (is_shifted) {
		for (i = pos, j = 0; j <= as_len-1; ++i, ++j) {

			assert((0 <= i) && (i < s_len));
			s[i] = as[j];
		}
		assert(j == as_len);
	} else {
		printf("insert string error\n");
	}
}

int main(void)
{
	char a[] = "the wrong person";
	char b[] = "good or ";
	int pos;

	printf("insert string into another string>\n");
	printf("strings a [ %s ]\n", a);
	printf("strings b [ %s ]\n", b);

	pos = 4;
	string_insert(a, pos, b);
	printf("position %d\ninserted strings [ %s ]\n", pos, a);

	return 0;
}

