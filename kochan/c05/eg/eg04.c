/* Chapter 05 Example 04 Program to find triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int input;
	int triangul;
	printf("Give number to get triangular number ");
	scanf("%i", &input);
	num = 1;
	triangul = 0;

	 while (num <= input) {
		triangul += num;
		num += 1;
	}
	printf("triangular number %i\n", triangul);
	return 0;
}
