/* chapter 11 example 14 revised version of the copy string function
 * vasanth 22 march 2018
 */

#include <stdio.h>

void copy_string_ptr(char *from, char *to)
{
	while (*from) {
		*to++ = *from++;
	}
	*to = '\0';
}

int main(void)
{
	char snt1[] = "if you want to change the world, go home and love your family";
	char snt2[200];

	printf("copy string using pointer with pre+ and post+ operators>\n");
	printf("given snt1 [ %s ]\n", snt1);

	copy_string_ptr(snt1, snt2);
	printf("copy snt2 [ %s ]\n", snt2);
	copy_string_ptr("peace begins with a smile", snt2);
	printf("copy snt2 [ %s ]\n", snt2);

	return 0;
}

