/* Chapter 05 Exercise 09 Program to find triangular number
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int number;
	int input;
	int triangulnum;
	number = 1;
	triangulnum = 0;
	printf("give number and get upto trangular number ");
	scanf("%i", &input);

	while (number <= input) {
		triangulnum = triangulnum + number;
		printf("%2i\t%i\n", number, triangulnum);
		number += 1;
	}
	return 0;
}
