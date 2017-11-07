/* Chapter 08 Example 10 Program to find the minimum value in an array already givened input
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int maxvalue(int array[], int limit)
{
	int largest;
	int count = 1;

	largest = array[0];

	while (count < limit) {
		if(array[count] > largest) {
			largest = array[count];
		}
		++count;
	}

	return largest;
}

int minvalue(int array[], int limit)
{
	int smallest;
	int count = 1;

	smallest = array[0];

	while (count < limit) {
		if(array[count] < smallest) {
			smallest = array[count];
		}
		++count;
	}

	return smallest;
}

int main(void)
{
	int a[5] = { 33, 45, 74, 34, 29};
	int b[7] = { 89, 78, 90, 84, 78, 89, 79};

	printf("largest value in A array> %i\n", maxvalue(a , 5));
	printf("largest value in B array> %i\n\n", maxvalue(b, 7));
	printf("smallest value in A array> %i\n", minvalue(a , 5));
	printf("samllest value in B array> %i\n", minvalue(b, 7));

	return 0;
}

