/* Chapter 8 Example 4 Calculating the nth triangular number
 * Vasanth 01 October 2017
 */

#include <stdio.h>

int main(void)
{
	void CalculatingTrangularNumber();

	CalculatingTrangularNumber(10);
	CalculatingTrangularNumber(20);
	CalculatingTrangularNumber(50);

	return 0;
}

void CalculatingTrangularNumber(int n)
{
	int i;
	int traingularValue = 0;

	for(i=1; i<=n; ++i)
	{
		traingularValue += i;
	}

	printf("Traingular Number %i is %i\n", n, traingularValue);
}

