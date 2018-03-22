/* chapter 11 example 13 pointer version of copy string
 * vasanth 22 march 2018
 */

#include <stdio.h>

void copy_string_ptr(char *from, char *to)
{
	for (; *from != '\0'; ++from, ++to) {
		*to = *from;
	}
	*to = '\0';
}

int main(void)
{
	char snt1[] = "there is no better designer than nature";
	char snt2[100];

	printf("copy string using pointers>\n");
	printf("given snt1 [ %s ]\n", snt1);

	copy_string_ptr(snt1, snt2);
	printf("copy snt2 [ %s ]\n", snt2);
	copy_string_ptr("don't be the same, be better!", snt2);
	printf("copy snt2 [ %s ]\n", snt2);

	return 0;
}

