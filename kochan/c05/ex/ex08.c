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
		int num;
		int triangulnum;

		printf("enter the number and view triangular number ");
		scanf("%i", &input);

		triangulnum = 0;
		num = 1;
		while (num <= input) {
			triangulnum += num;
			++num;
		}

		printf("entered number %i triangular number is %i\n\n", input, triangulnum);

		++counter;
	}

	return 0;
}
