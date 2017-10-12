/* Chapter 05 Exercise 08 Program to get five triangular number
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int counter;

	counter = 1;
	while (counter <= 5) {
		int input;
		int i;
		int triangulnum;

		printf("enter the number and view triangular number> ");
		scanf("%i", &input);
		printf("entered number is %d\n", input);

		triangulnum = 0;
		i = 1;
		while (i <= input) {
			triangulnum += i;
			++i;
		}

		printf("entered number %i triangular number is %i\n\n", input, triangulnum);

		++counter;
	}

	return 0;
}
