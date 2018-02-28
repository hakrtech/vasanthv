 /* chapter 10 exercise 06 program to remove a specified number of characters from a character string
  * vasanth 22 february 2018
  */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int string_length(const char s[])
{
	int i = 0;

	while (s[i] != '\0') {
		++i;
	}
	assert(s[i] == '\0');

	return i;
}

bool string_remove(char s[], int pos, int len)
{
	int i, j, s_len;
	bool is_removed = false;

	assert(pos >= 0);
	s_len = string_length(s);

	if (len <= 0) {
		return is_removed;
	}
	if (pos >= s_len) {
		return is_removed;
	}

	for (i = pos, j = pos+len; j <= s_len-1; ++i, ++j) {
		assert((0 <= i) && (i < s_len));
		s[i] = s[j];
	}

	if (j > s_len) {
		return is_removed;
	}

	assert(j == s_len);
	s[i] = '\0';
	is_removed = true;

	return is_removed;
}

int main(void)
{
	int pos, len;
	bool is_removed = false;
	char a[] = "the wrong data";

	printf("remove string>\n");
	printf("strings [ %s ]\n", a);

	pos = 10;
	len = 2;
	is_removed = string_remove(a, pos, len);

	if (is_removed) {
		printf("position %d length %d\nafter removing strings [ %s ]\n", pos, len, a);
	} else {
		printf("position %d length %d\nstrings [ %s ] not removed %d\n", pos, len, a, is_removed);
	}

	return 0;
}

