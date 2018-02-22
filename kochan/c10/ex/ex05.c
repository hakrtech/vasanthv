/* chapter 10 exercise 05 program to find the string and return position of string
 * vasanth 21 february 2018
 */

#include <stdio.h>

int find_str(const char s[], const char f[])
{
	int i, j, pos = -1;

	// loop s[0 .. !'\0'] to find f[0 .. '\0']

	for (i = 0, j = 0; s[i] != '\0'; ++i) {
		if ((s[i] == f[j]) && (f[j] != '\0')) {
			int k , l;

			k = i;
			l = j;
			while ((s[k] == f[l]) && (f[l] != '\0')) {
				++k;
				++l;
			}
			if ((s[k-1] == f[l-1]) && (f[l] == '\0')) {
				pos = i;
				break;
			}
		}
	}

	return pos;
}

int main(void)
{
	int r;
	const char a[] = "life is a book? yes good book!";
	const char b[] = "book!";

	printf("find a string into source string>\n");
	r = find_str(a, b);
	if (r != -1) {
		printf("source [ %s ] finded [ %s ] position %d\n", a, b, r);
	} else {
		printf("not found pos %d\n", r);
	}

	return 0;
}

