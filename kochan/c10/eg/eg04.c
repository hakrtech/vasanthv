/* Chapter 10 Example 10.4 program to determine if tow strings are equal
 * vasanth [22 septemper 2017]
 */

#include <stdio.h>
#include <stdbool.h>

bool equal(char a[], char b[])
{
	int i = 0;
	bool is_equal;

	while ((a[i] == b[i]) && (a[i] != '\0') && (b[i] != '\0')) {
		++i;
	}

	if ((a[i] == '\0') && (b[i] == '\0')) {
		is_equal = true;
	} else {
		is_equal = false;
	}

	return is_equal;
}

int main(void)
{
	char a[] = "god is love";
	char b[] = "love";

	printf("word: [ %s ] [%s ]\n equal : %i\n", a, b, equal(a, b));
	printf("word: [ %s ] [ god ]\n equal : %i\n", a, equal(a, "god"));
	printf("word: [ %s ] [ %s ]\n equal : %i\n",b , b, equal(b, b));

	return 0;
}

