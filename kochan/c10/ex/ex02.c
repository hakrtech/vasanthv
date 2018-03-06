/* chapter 10 exercise 02 program to find equal strings
 * vasanth 21 february 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool string_equal(char snt1[], char snt2[])
{
	bool is_equal = false;
	int i = 0;

	while ((snt1[i] == snt2[i]) && (snt1[i] != '\0')) {
		++i;
	}
	assert((snt1[i] != snt2[i]) || (snt1[i] == '\0'));
	is_equal = true;

	if (snt1[i] != snt2[i]) {
		is_equal = false;
	}

	return is_equal;
}

int main(void)
{
	char s1[101], s2[101];
	bool is_equal = false;

	printf("determine if two strings equal or not>\n");
	printf("first string: ");
	scanf("%s", s1);
	printf("[ %s ]\n", s1);

	printf("second string: ");
	scanf("%s", s2);
	printf("[ %s ]\n", s2);

	is_equal = string_equal(s1, s2);
	if (is_equal) {
		printf("strings [ %s ] [ %s ] equal %d\n", s1, s2, is_equal);
	} else {
		printf("strings [ %s ] [ %s ] not equal %d\n", s1, s2, is_equal);
	}

	return 0;
}

