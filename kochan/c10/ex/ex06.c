 /* chapter 10 exercise 06 program to remove a specified number of characters from a character string
  * vasanth 22 february 2018
  */

#include <stdio.h>
#include <assert.h>

int count_of_str(const char s[])
{
	int i, n;

	i = 0;
	n = 0;
	while (s[i] != '\0') {
		++i;
	}
	if (s[i] == '\0') {
		n = i;
	}

	return n;
}

void remove_str(char s[], int pos, int count)
{
	int i, j, sn;

	assert(pos >= 0);
	sn = count_of_str(s);

	if ((count > 0) && (pos < sn)) {
		// loop s[pos .. !'\0'] to move s[ pos+count .. !'\0']
		for (i = pos, j = pos+count; (s[i] != '\0') && (j < sn); ++i, ++j) {
#define DEBUG 0
			if (DEBUG) {
				printf("check i %d j %d sn %d\n", i, j, sn);
			}
			assert((0 <= i) && (i < sn));

			s[i] = s[j];
		}
		s[i] = '\0';
	}
}

int main(void)
{
	int pos, count;
	char a[] = "the wrong data";

	printf("remove string>\n");
	printf("strings [ %s ]\n", a);

	pos = 4;
	count = 6;
	remove_str(a, pos, count);
	printf("after removing strings [ %s ], position %d, count %d\n", a, pos, count);

	return 0;
}

