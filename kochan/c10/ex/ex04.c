/* chapter 10 exercise 04 program to extract substring characters
 * vasanth 21 february 2018
 */

#include <stdio.h>
#include <stdlib.h>
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

void substring(char s[], int pos, int new_len, char r[], int n)
{
	int i, j, len;

	assert(n > 0);
	len = string_length(s);

	if ((pos < 0) || (pos >= len)) {
		printf("position %d error\n", pos);
		exit(1);
	}
	if ((new_len <= 0) || (new_len > len)) {
		printf("new length %d error\n", new_len);
		exit(1);
	}

	// loop s[ pos .. len-1] to copy r[ 0 .. new_len-1]
	for (i = 0, j = pos; i <= new_len-1; ++i, ++j) {
		assert((0 <= i) && (i < n));
		r[i] = s[j];
	}
	assert(i == new_len);

	assert(i <= n);
	r[i] = '\0';
}

int main(void)
{
	char a[] = "do for somthing!";
	char b[101];
	int n = 100;
	int pos, new_len;

	printf("extract a portion of a char string using substring>\n");
	printf("strings [ %s ]\n", a);

	pos = 0;
	new_len = 9;
	substring(a, pos, new_len, b, n);
	printf("position %d length %d\nsubstring [ %s ]\n", pos, new_len, b);

	return 0;
}

