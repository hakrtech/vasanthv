/* Chapter 05 Example 02 Program to find two hundredth triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int triangulnum;

	i =1;
	triangulnum = 0;
	while (i <= 200) {
		triangulnum = triangulnum + i;
		++i;
	}
	printf("two hundredth triangular number is %i\n", triangulnum);

	return 0;
}
