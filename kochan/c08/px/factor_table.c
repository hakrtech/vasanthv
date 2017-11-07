/* program for common factor table
 * vasanth 07 november 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int divisor;
	int s;

	s = scanf("%d",&num);
	if (s != 1) {
		printf("scanf error %d\n", s);
		exit (1);
	}
	
	printf("factor %d table> ", num);
	
	divisor = num;
	while (divisor > 0) {
		int remainder;

		remainder = num % divisor;
		if (remainder == 0) {
			printf("%d ", divisor);
		}
		--divisor;
	}
	printf("\n");

	return 0;
}

