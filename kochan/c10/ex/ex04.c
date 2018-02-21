/* chapter 10 exercise 04 program to extract substring characters
 * vasanth 21 february 2018
 */

#include <stdio.h>
#include <assert.h>

void substring(const char s[], int pos, int count, char r[], int n)
{
	int i, j;

	assert(n > 0);

	// loop s[ pos .. !'\0'] to copy r[ 0 .. count-1]

	for (i = 0, j = pos; ((s[j] != '\0') && (i < count)); ++i, ++j) {
		assert((0 <= i) && (i < n));
		r[i] = s[j];
	}
	assert((0 <= count) && (count < n));
	r[count] = '\0';
}

int main(void)
{
	const char a[] = "do for somthing!";
	char b[100];
	int n = 20;

	printf("extract a portion of a char string using substring>\n");

	substring(a, 3, 5, b, n);
	printf("strings [ %s ]\nsubstring [ %s ]\n", a, b);

	return 0;
}

