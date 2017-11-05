/* Chapter 8 Exercise 2 Program to calculate triangular number using function
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define EXIT_VAL (-1)

int triangular_num(int n)
{
	int sum;
	int count;

	sum = 0;
	count = 1;
       
	while (count <= n) {
		sum += count;
		++count;
	}

	return sum;
}

int main()
{
	while (true) {
		int num;
		int result;
		int s;

		s = scanf("%i", &num);

		if (s != 1) {
			printf("error ss %d\n", s);
			exit(1);
		}

		if (num == EXIT_VAL) {
			exit(1);
		}

		result = triangular_num(num);

		printf("ss %d number %i triangular %i\n", s, num, result);
	}

	return 0;
}

