/* Chapter 07 Exercise 02 Working with array and use a for loop
 * to perform the initialization
 * Vasanth 29 October 2017
 */

#include <stdio.h>

int main(void)
{
	int val[10];
	int i;

	val[0] = 0;

	printf("initializ elements>\n"); 

	for (i = 1; i < 10; ++i) {
		scanf("%i", &val[i]);
		printf("entered value is %i\n", val[i]);
	}

	i = 0;
	val[2] -= 100;
	val[5] += 350;
	val[9] = val[5] / 10;
	--val[7];
	++val[8];

	while (i < 10) {
		printf("value[%i] = %i\n", i, val[i]);
		++i;
	}

	return 0;
}