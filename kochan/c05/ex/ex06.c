/* Chapter 05 Exercise 06 Program to calculate 200th triangular number
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int triangulnum;

	num = 1;
	triangulnum = 0;
	while (num <= 200) {
		triangulnum = triangulnum + num;

		printf("%-2i\t%i\n", num, triangulnum);

		++num;
	}

	printf("200th triangular number is %i\n", triangulnum);

	return 0;
}
