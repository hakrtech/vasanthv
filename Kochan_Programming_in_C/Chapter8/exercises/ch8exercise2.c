/* Chapter 8 Exercise 2 Program to calculate triangular number using function
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int main()
{
	int calTraingularnum(int n);

	int trinum;
	int result;

	printf("Enter the number:\n");
	scanf("%i", &trinum);

	result = calTraingularnum(trinum);

	printf("Entered Value is %i and the Triangular value is %i\n", trinum, result);

	return 0;
}

int calTraingularnum(int n)
{
	int caltrinum;
	int i;

	caltrinum = 0;

	for(i =1; i <= n; ++i)
	{
		caltrinum += i;
	}

	return caltrinum;
}
