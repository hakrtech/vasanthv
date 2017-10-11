/* Chapter 05 Example 02 Program to find two hundredth triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int triangulnum;
	num =1;
	triangulnum = 0;

	while (num <= 200) {
		triangulnum = triangulnum + num;
		num += 1;
	}
	printf("two hundredth triangular number %i\n", triangulnum);
	return 0;
}
