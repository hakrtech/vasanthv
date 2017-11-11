/* Chapter 8 Exercise 12 Program to use Matrix M 4*5 to apply transposeMatrix N 5*4 and finaly get result
 * Vasanth 05 October 2017
 */

#include <stdio.h>

#include "libmatrix.h"

int main(void)
{
	int samplemat[100][100] = { 
		{ 1,  2,  3,  4,  5}, 
		{ 6,  7,  8,  9, 10}, 
		{11, 12, 13, 14, 15}, 
		{16, 17, 18, 19, 20}
	};
	int tpos[100][100];

	printf("given M[4*5] matrix>\n");
	samplemat[0][0] = 99;
	mxi_print(samplemat, 4, 5);

	printf("transpoed matrix N [5*4]>\n");
	mxi_transpose(samplemat, 4, 5, tpos);
	mxi_print(tpos, 5, 4);

	return 0;
}

