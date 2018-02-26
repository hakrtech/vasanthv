 /* chapter 10 exercise 06 program to remove a specified number of characters from a character string
  * vasanth 22 february 2018
  */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int string_length(const char s[])
{
	int i, n = -1;

	i = 0;
	while (s[i] != '\0') {
		++i;
	}
	assert(s[i] == '\0');
	n = i;

	return n;
}

bool string_remove(char s[], int pos, int count)
{
	int i, j, sn;
	bool is_removed = false;

	assert(pos >= 0);
	sn = string_length(s);

	if (count <= 0) {
		return is_removed;
	}
	if (pos > sn) {
	       return is_removed;
	}

	for (i = pos, j = pos+count; j < sn; ++i, ++j) {
		assert((0 <= i) && (i < sn));
		s[i] = s[j];
	}
	assert(j == sn);
	s[i] = '\0';
	is_removed = true;

	return is_removed;
}

int main(void)
{
	int pos, count;
	bool is_removed = false;
	char a[] = "the wrong data";

	printf("remove string>\n");
	printf("strings [ %s ]\n", a);

	pos = 1;
	count = 5;
	is_removed = string_remove(a, pos, count);

	if (is_removed) {
		printf("position %d count %d\nafter removing strings [ %s ]\n", pos, count, a);
	} else {
		printf("position %d count %d\nstrings [ %s ] not removed %d\n", pos, count, a, is_removed);
	}

	return 0;
}

