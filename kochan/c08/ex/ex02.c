/* Chapter 8 Exercise 2 Program to calculate triangular number using function
 * Vasanth 03 October 2017
 */

#include <stdio.h>
#include <stdbool.h>

int triangular_num(int n)
{
	int add;
	int count;

	add = 0;
	count = 1;
       
	while (count <= n) {
		add += count;
		++count;
	}

	return add;
}

int main()
{
	int num;
	int result;
	
	printf("Enter the number and get triangular number> ");

	for (true; true; true) {
		scanf("%i", &num);

		result = triangular_num(num);

		printf("entered number %i triangular number %i\n", num, result);
	}

	return 0;
}

