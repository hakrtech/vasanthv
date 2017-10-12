/* Chapter 05 Exercise 04 Program to generate first 10 number factorial values
 * Vasanth 10 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;
	int start_num;

	printf("first ten number factorial values\n");

	i = 1;
	start_num = 1;
	while (start_num <= 10) {
		i = i * start_num;
		printf("%i!	%i\n", start_num, i);
		++start_num;
	}

	return 0;
}
