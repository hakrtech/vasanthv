/* chapter 10 exercise 04 program to extract substring characters
 * vasanth 21 february 2018
 */

#include <stdio.h>
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

void sub_string(char s[], int pos, int len, char sub_snt[], int n)
{
	int i, j, s_len;

	assert(n > 0);
	s_len = string_length(s);
	assert((0 <= pos) && (pos < s_len));
	assert((0 < len) && (len <= s_len));

	// loop s[ pos .. s_len-1] to copy r[ 0 .. len-1]
	for (i = 0, j = pos; i <= len-1; ++i, ++j) {
		assert((0 <= j) && (j < s_len));
		assert((0 <= i) && (i < n));
		sub_snt[i] = s[j];
	}
	assert(i == len);

	assert(i <= n);
	sub_snt[i] = '\0';
}

int main(void)
{
	char source[] = "do for somthing!";
	char output[101];
	int n = 100;
	int pos, len;

	printf("extract a portion of a char string using substring>\n");
	printf("strings [ %s ]\n", source);

	pos = 0;
	len = 10;
	sub_string(source, pos, len, output, n);
	printf("position %d length %d\nsubstring [ %s ]\n", pos, len, output);

	return 0;
}

