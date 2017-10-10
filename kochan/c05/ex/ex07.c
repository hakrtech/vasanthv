/* Chapter 05 Exercise 07 Program to print  dollars, cents value
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int dollars;
	int cents;
	int count;
	count = 1;

	while (count <= 5) {
		printf("enter dollars ");
		scanf("%i", &dollars);
		printf("enter cents ");
		scanf("%i", &cents);
		printf("$%i.%.2i\n\n", dollars, cents);
		++count;
	}
	return 0;
}

