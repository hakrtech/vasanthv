/* Chapter 05 Exercise 06 Program to calculate 200th triangular number
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int triangulnum;

	i = 1;
	triangulnum = 0;
	while (i <= 200) {
		triangulnum = triangulnum + i;
		printf("%i	%i\n", i, triangulnum);
		++i;
	}

	printf("200th triangular number is %i\n", triangulnum);

	return 0;
}
