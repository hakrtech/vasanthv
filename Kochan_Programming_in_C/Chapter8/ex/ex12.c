/* Chapter 8 Exercise 12 Program to use Matrix M 4*5 to apply transposeMatrix N 5*4 and finaly get result
 * Vasanth 05 October 2017
 */

#include <stdio.h>

int main(void)
{
	void displayMatrix(int mat[4][5]);
	void transposeMatrix(int matval[4][5]);

	int samplemat[4][5] = { {1, 2, 3, 4 ,5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};

	printf("The Give M[4*5] matrix values:\n");

	displayMatrix(samplemat);

	printf("The Transpoed Matrix N [5*4] values:\n");

	transposeMatrix(samplemat);

	return 0;
}

void displayMatrix(int mat[4][5])
{
	int rw;
	int cl;

	for(rw = 0; rw < 4; ++rw)
	{
		for(cl = 0; cl < 5; ++cl )
		{
			printf("%5i", mat[rw][cl]);
		}

		printf("\n");
	}
}

void transposeMatrix(int matval[4][5])
{
	int rows;
	int cols;

	for(rows = 0; rows < 5; ++rows)
	{
		for(cols = 0; cols < 4; ++cols)
		{
			printf("%5i", matval[cols][rows]);
		}

		printf("\n");
	}
}
