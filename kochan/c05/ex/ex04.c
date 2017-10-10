/* Chapter 05 Exercise 04 Program to generate first 10 factorial
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int number;
	int initial;
	number = 1;
	initial = 1;
	printf("ten factorials\n");

	while (initial <= 10) {
		number = number * initial;
		printf("%5i!\t%i\n", initial, number);
		initial += 1;
	}
	return 0;
}
