/* Chapter 8 Example 10 Program to find the minimum value in an array already givened input
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int main(void)
{
	int a[5] = { 33, 45, 74, 34, 29};
	int b[7] = { 89, 78, 90, 84, 78, 89, 79};

	int minivalue(int x[], int countnum);

	printf("The minimum value in A array is: %i\n", minivalue(a , 5));
	printf("The minimum value in B array is : %i\n", minivalue(b, 7));

	return 0;
}

int minivalue(int x[], int countnum)
{
	int low;
	int i;

	low = x[0];

	for(i=1; i<countnum; ++i)
	{
		if(x[i] < low)
		{
			low = x[i];
		}
	}

	return low;
}
