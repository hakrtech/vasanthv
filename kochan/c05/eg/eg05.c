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
		printf("give number to get triangular number ");
		scanf("%i", &input);
		int number;
		int triangul;
		number = 1;
		triangul = 0;

		while (number <= input) {
			triangul = triangul + number;
			++number;
		}
		printf("number %i triangular number %i\n\n", input, triangul);
		++counter;
	}
	return 0;
}
