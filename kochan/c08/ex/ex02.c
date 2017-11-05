/* Chapter 8 Exercise 2 Program to calculate triangular number using function
 * Vasanth 03 October 2017
 */

#include <stdio.h>

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
	scanf("%i", &num);
	printf("entered number is %i\n", num);

	result = triangular_num(num);

	printf("triangular number is %i\n", result);

	return 0;
}

