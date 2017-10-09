/* Chapter 8 Exercise 12 Program to use Matrix M 4*5 to apply transposeMatrix N 5*4 and finaly get result
 * Vasanth 09 October 2017
 */

#include <stdio.h>

void display_matrix(int display_valuet[4][5])
{
	int rows;

	printf("The Give M[4*5] matrix values:\n");

	for (rows = 0; rows < 4; ++rows) {
		int cols;

		for (cols = 0; cols < 5; ++cols ) {
			printf("%5i", display_value[rows][cols]);
		}
		printf("\n");
	}
}

void transpose_matrix(int trans_value[4][5])
{
	int rows;

	printf("The Transpoed Matrix N [5*4] values:\n");

	for (rows = 0; rows < 5; ++rows) {
		int cols;

		for (cols = 0; cols < 4; ++cols) {
			printf("%5i", trans_value[cols][rows]);
		}
		printf("\n");
	}
}

int main(void)
{
	int values[4][5] = { {1, 2, 3, 4 ,5},
			     {6, 7, 8, 9, 10},
			     {11, 12, 13, 14, 15},
 			     {16, 17, 18, 19, 20} };

	display_matrix(values);
	transpose_matrix(values);
	return 0;
}
