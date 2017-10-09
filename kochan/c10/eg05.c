/* Chapter 10 Examble 10.5 Program to read the string using scanf
 * vasanth [23 september 2017]
 */

#include <stdio.h>

int main(void)
{
	char w1[30];
	char w2[30];
	char w3[30];

	printf("Enter text:\n");
	scanf("%s%s%s", w1, w2, w3);
	printf("w1 = %s\nw2 = %s\nw3 = %s\n", w1, w2, w3);

	return 0;
}
