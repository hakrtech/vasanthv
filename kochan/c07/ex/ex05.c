/* Chapter 07 Exercise 05 expect output?
 * Vasanth 31 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i;
	int j;

	printf("powers of two>\n");

	for (j = 0; j < 10; ++j) {
		for (i = 0; i < j; ++i) {
			num[j] += num[i]; 
		}
	}

	for (j = 0; j < 10; ++j) {
		printf("%i ", num[j]);
	}
	printf("\n");

	return 0;
}
