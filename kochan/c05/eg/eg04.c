/* Chapter 05 Example 04 Program to find triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int input;
	int triangul;

	printf("enter the number and to view triangular number> ");
	scanf("%i", &input);
	printf("entered number is %d\n", input);

	i = 1;
	triangul = 0;
	while (i <= input) {
		triangul += i;
		++i;
	}
	printf("triangular number is %i\n", triangul);

	return 0;
}
