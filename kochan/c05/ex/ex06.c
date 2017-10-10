/* Chapter 05 Exercise 06 Program to calculate 200th triangular number
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int triangul;
	num = 1;
	triangul = 0;

	while (num <= 200) {
		triangul = triangul + num;
		printf("%-2i\t%i\n", num, triangul);
		++num;
	}
	printf("200th triangular number %i\n", triangul);
	return 0;
}
