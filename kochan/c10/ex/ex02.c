/* chapter 10 exercise 02 program to find equal strings
 * vasanth 21 february 2018
 */

#include <stdio.h>
#include <stdbool.h>

bool string_equal(const char a[], const char b[])
{
	bool is_equal = false;
	int i = 0;

	while ((a[i] == b[i]) && (a[i] != '\0')) {
		++i;
	}

	if ((a[i] == '\0') && (b[i] == '\0')) {
			is_equal = true;
	}

	return is_equal;
}

int main(void)
{
	char a[100];
	char b[100];
	bool is_equal = false;

	printf("determine if two strings eual or not>\n");
	printf("first string: ");
	scanf("%s", a);
	printf("[ %s ]\n", a);
	printf("second string: ");
	scanf("%s", b);
	printf("[ %s ]\n", b);

	is_equal = string_equal(a, b);
	if (is_equal) {
		printf("strings [ %s ] [ %s ] equal %d\n", a, b, is_equal);
	} else {
		printf("strings [ %s ] [ %s ] not equal %d\n", a, b, is_equal);
	}

	return 0;
}

