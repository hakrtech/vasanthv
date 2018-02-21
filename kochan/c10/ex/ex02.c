/* chapter 10 exercise 02 program to find equal strings
 * vasanth 21 february 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool equal_str(const char a[], int na, const char b[], int nb)
{
	bool is_equal = false;
	int i = 0;

	assert(na > 0);
	assert(nb > 0);

	while ((a[i] == b[i]) && (a[i] != '\0')) {
		++i;
		printf("i %d\n", i);
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
	int na = 20;
	int nb = 20;
	bool find = false;

	printf("determine if two strings eual or not>\n");
	printf("first string: ");
	scanf("%20s", a);
	printf("[ %s ]\n", a);
	printf("second string: ");
	scanf("%20s", b);
	printf("[ %s ]\n", b);

	find = equal_str(a, na, b, nb);
	if (find) {
		printf("strings [ %s ] [ %s ] equal %d\n", a, b, find);
	} else {
		printf("strings [ %s ] [ %s ] not equal %d\n", a, b, find);
	}

	return 0;
}

