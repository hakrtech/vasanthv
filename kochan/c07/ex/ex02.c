/* Chapter 07 Exercise 02 Working with array and use a for loop
 * to perform the initialization
 * Vasanth 29 October 2017
 */

#include <stdio.h>
#include <assert.h>

int main(void)
{
	int val[10];
	int i;

	val[0] = 0;

	printf("initializ any positive integer elements>\n"); 

	for (i = 1; i < 10; ++i) {	
		scanf("%i", &val[i]);
		printf("entered value is %i\n", val[i]);
		assert(val[i] >= 0);
	}

	i = 0;
	val[2] -= 100;
	val[5] += 350;
	val[9] = val[5] / 10;
	--val[7];
	++val[8];

	while (i < 10) {
		assert(val[i] <= 32767);
		printf("value[%i] = %i\n", i, val[i]);
		++i;
	}

	return 0;
}

