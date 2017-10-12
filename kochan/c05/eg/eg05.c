/* Chapter 05 Example 05 Program to find any five triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int input;
	int counter;

	counter = 1;
	while (counter <= 5) {
		int i;
		int triangul;

		printf("enter the number and to view triangular number> ");
		scanf("%i", &input);
		printf("entered number is %i\n", input);

		i = 1;
		triangul = 0;
		while (i <= input) {
			triangul = triangul + i;
			++i;
		}
		printf("number %i triangular number is %i\n\n", input, triangul);
		++counter;
	}

	return 0;
}
