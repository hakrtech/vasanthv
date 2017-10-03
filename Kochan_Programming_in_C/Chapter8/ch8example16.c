/* Chapter 8 Example 16 Program to calculating factorials recorsively
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;

	long int factorial(int n);

	for(i=0; i < 10; ++i )
	{
		printf("%i! = %li\n", i, factorial(i));
	}

	return 0;
}

// Recursive function to calculate the factorial of a postive integer

long int factorial(int n)
{
	long int result;

	if( n == 0)
	{
		result = 1;
	}
	else
	{
		result = (n * factorial(n - 1));
	}

	return result;
}
