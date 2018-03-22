/* chapter 11 example 15 using pointers to find the length of a string
 * vasanth 22 march 2018
 */

#include <stdio.h>

int ptr_snt_length(const char *s)
{
	int len;
	const char *cptr = s;

	while (*cptr) {
		++cptr;
	}
	len = cptr - s;

	return len;
}

int main(void)
{
	char snt[] = "treat me right and you will see the light...treat me wrong and you will be gone!!";
	int len;

	printf("use pointers to find string length>\n");
	printf("string [ %s ]\n", snt);
	len = ptr_snt_length(snt);
	printf("length %d\n", len);

	len = ptr_snt_length("");
	printf("string [ ]\nlength %d\n", len);
	len = ptr_snt_length("science");
	printf("string [ science ]\nlength %d\n", len);

	return 0;
}

