/* Chapter 10 Examble 10.5 Program to read the string using scanf
 * vasanth [23 september 2017]
 */

#include <stdio.h>

int main(void)
{
	char a[100], b[100], c[100];

	printf("reading strings with scanf>\nenter text:\n");
	scanf("%50s%50s%50s", a, b, c);
	printf("w1: %s\nw2: %s\nw3: %s\n", a, b, c);

	return 0;
}

