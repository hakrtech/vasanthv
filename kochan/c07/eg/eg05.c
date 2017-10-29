/* Chapter 07 Example 05 Program to initializing array
 * Vasanth 28 October 2017
 */

#include <stdio.h>
int main(void)
{
	int val[100] = {0, 1, 4, 9, 16};
	int i;

	printf("initializing first 50 array square values> \n");

	for (i = 5; i < 50; ++i) {
		val[i] = i*i;
	} 

	for (i = 0; i < 50; ++i) {
		printf("val[%i] = %i\n", i, val[i]);
	}

	return 0;
}
