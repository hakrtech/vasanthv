/* Chapter 08 Example 10 Program to find the maximum and minimum value in an array already givened input
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int amaximum(int a[], int n)
{
	int largest;
	int i = 1;

	largest = a[0];

	while (i < n) {
		if(a[i] > largest) {
			largest = a[i];
		}
		++i;
	}

	return largest;
}

int aminimum(int a[], int n)
{
	int smallest;
	int i = 1;

	smallest = a[0];

	while (i < n) {
		if(a[i] < smallest) {
			smallest = a[i];
		}
		++i;
	}

	return smallest;
}

int main(void)
{
	int a[5] = { 33, 45, 74, 34, 29};
	int b[7] = { 89, 78, 90, 84, 78, 89, 79};

	printf("largest value in A array> %i\n", amaximum(a , 5));
	printf("smallest value in A array> %i\n", aminimum(a , 5));
	printf("largest value in B array> %i\n\n", amaximum(b, 7));
	printf("samllest value in B array> %i\n", aminimum(b, 7));

	return 0;
}

