/* Chapter 05 Exercise 07 Program to print  dollars with cents value
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int count;

	count = 1;
	while (count <= 5) {
		int dollars;
		int cents;

		printf("enter dollars value ");
		scanf("%i", &dollars);
		printf("enter cents velue ");
		scanf("%i", &cents);
		printf("$%i.%.2i\n\n", dollars, cents);

		++count;
	}

	return 0;
}
