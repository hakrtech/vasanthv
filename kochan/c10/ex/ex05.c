/* chapter 10 exercise 05 program to find the string and return position of string
 * vasanth 21 february 2018
 */

#include <stdio.h>

int string_find(char s[], char f[])
{
	int i, j, pos = -1;
	char c;

	// loop s[0 .. !'\0'] to find f[0 .. '\0']
	j = 0;
	c = f[j];
	for (i = 0; s[i] != '\0'; ++i) {
		if (s[i] == c) {
			int k;

			j = 0;
			k = i;
			while ((s[k] == f[j]) && (f[j] != '\0')) {
				++k;
				++j;
			}
			if (f[j] == '\0') {
				pos = i;
				break;
			}
		}
	}

	return pos;
}

int main(void)
{
	int pos;
	char a[] = "life is a book? yes good book!";
	char b[] = "book!";

	printf("find a string into source string>\n");
	printf("strings>\nsource [ %s ]\nfind [ %s ]\n", a, b);

	pos = string_find(a, b);
	if (pos != -1) {
		printf("source [ %s ] finded [ %s ] position %d\n", a, b, pos);
	} else {
		printf("string not found position %d\n", pos);
	}

	return 0;
}

