/* Chapter 8 Example 13 Programming to use Multidimensional array
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int main(void)
{
	int sampleMatrix[3][5] = { { 4, 6, 9, 3 ,12}, { 3, 5, 6, 5, 2 }, { 7, 4, 1, 4, 2 } };

	void displaymatrix(int matrix[3][5]);
	void scalarmultiply(int matrix[3][5], int scalar);

	printf("Original matrix:\n");

	displaymatrix(sampleMatrix);

	scalarmultiply(sampleMatrix, 2);

	printf("\nMultiplied by 2:\n");

	displaymatrix(sampleMatrix);

	scalarmultiply(sampleMatrix, -1);

	printf("\nThen Multiplied by -1:\n");

	displaymatrix(sampleMatrix);

	return 0;
}

void displaymatrix(int matrix[3][5])
{
	int row;
	int column;

	for(row = 0; row < 3; ++row)
	{
		for(column = 0; column < 5; ++column)
		{
			printf("%5i", matrix[row][column]);
		}

	printf("\n");
	}
}

void scalarmultiply(int matrix[3][5], int scalar)
{
	int row;
	int column;

	for(row = 0; row < 3; ++row)
	{
		for(column = 0; column < 5; ++column)
		{
			matrix[row][column] *= scalar; 
		}
	}
}

