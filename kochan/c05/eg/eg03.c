/* Chapter 05 Example 03 Program to generate a table of triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int triangulnum;

	printf("table of triangular number \n");
	printf("number	sum of number\n");

	i =1;
	triangulnum = 0;
	while (i <= 10) {
		triangulnum = triangulnum + i;
		printf("%i	%i\n", i, triangulnum);
		++i;
	}

	return 0;
}
