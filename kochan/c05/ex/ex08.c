/* Chapter 05 Exercise 08 Program to get five triangular number
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int input;
	int triangul;
	int counter;
	counter = 1;

	while (counter <= 5) {
		printf("give number view triangular number ");
		scanf("%i", &input);
		triangul = 0;
		num = 1;
		while (num <= input) {
			triangul += num;
			++num;
		}

		printf("number %i triangular number is %i\n\n", input, triangul);
		++counter;
	}
	return 0;
}
