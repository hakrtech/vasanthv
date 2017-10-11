/* Chapter 05 Example 03 Program to generate a table of triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int triangulnum;
	printf("table of triangular number \n");
	printf("number\tsum of number\n");
	num =1;
	triangulnum = 0;

	while (num <= 10) {
		triangulnum = triangulnum + num;
		printf("%5i\t%i\n", num, triangulnum);
		num += 1;
	}
	return 0;
}
