/* Chapter 8 Example 13A Programming to use Multidimensional array
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int main(void)
{
	int sampleMatrix[3][5] = { { 7, 16, 55, 13 ,12}, { 12, 10, 52, 0, 7 }, { -2, 1, 2, 4, 9 } };

	void displaymatrix(int nRows, int nCols, int matrix[nRows][nCols]);
	void scalarmultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar);

	printf("Original matrix:\n");

	displaymatrix(3, 5, sampleMatrix);

	scalarmultiply(3, 5, sampleMatrix, 2);

	printf("\nMultiplied by 2:\n");

	displaymatrix(3, 5, sampleMatrix);

	scalarmultiply(3, 5, sampleMatrix, -1);

	printf("\nThen Multiplied by -1:\n");

	displaymatrix(3, 5, sampleMatrix);

	return 0;
}

void displaymatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
	int row;
	int column;

	for(row = 0; row < nRows; ++row)
	{
		for(column = 0; column < nCols; ++column)
		{
			printf("%5i", matrix[row][column]);
		}

	printf("\n");
	}
}

void scalarmultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar)
{
	int row;
	int column;

	for(row = 0; row < nRows; ++row)
	{
		for(column = 0; column < nCols; ++column)
		{
			matrix[row][column] *= scalar;
		}
	}
}
