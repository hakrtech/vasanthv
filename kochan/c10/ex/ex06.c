 /* chapter 10 exercise 06 program to remove a specified number of characters from a character string
  * vasanth 22 february 2018
  */

#include <stdio.h>
#include <assert.h>

int count_of_str(const char s[])
{
	int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0') {
		++i;
	}
	if (s[i] == '\0') {
		count = i;
	}

	return count;
}

void remove_str(char s[], int pos, int count)
{
	int i, j, s_count;

	assert(pos >= 0);
	s_count = count_of_str(s);

	if ((count > 0) && (pos < s_count)) {
		// loop s[pos .. !'\0'] to move s[ pos+count .. !'\0']
		for (i = pos, j = pos+count; s[i] != '\0'; ++i, ++j) {
			if (j < s_count) {
				s[i] = s[j];
			} else {
				break;
			}
		}
		s[i] = '\0';
	}
}

int main(void)
{
	int pos, count;
	char a[] = "the wrong date";

	printf("remove string>\n");
	printf("strings [ %s ]\n", a);

	pos = 4;
	count = 6;
	remove_str(a, pos, count);
	printf("after removing strings [ %s ], position %d, count %d\n", a, pos, count);

	return 0;
}

