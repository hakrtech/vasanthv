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

bool string_remove(char s[], int pos, int new_len)
{
	int i, j, len;
	bool is_removed = false;

	assert(pos >= 0);
	len = string_length(s);

	if (new_len <= 0) {
		return is_removed;
	}
	if (pos >= len) {
		return is_removed;
	}
	if (new_len > len) {
		return is_removed;
	}

	for (i = pos, j = pos+new_len; j <= len; ++i, ++j) {
		assert((0 <= i) && (i < len));
		s[i] = s[j];
	}
	assert(j > len);
	s[i] = '\0';
	is_removed = true;

	return is_removed;
}

int main(void)
{
	int pos, new_len;
	bool is_removed = false;
	char a[] = "the wrong data";

	printf("remove string>\n");
	printf("strings [ %s ]\n", a);

	pos = 4;
	new_len = 6;
	is_removed = string_remove(a, pos, new_len);

	if (is_removed) {
		printf("position %d length %d\nafter removing strings [ %s ]\n", pos, new_len, a);
	} else {
		printf("position %d length %d\nstrings [ %s ] not removed %d\n", pos, new_len, a, is_removed);
	}

	return 0;
}

