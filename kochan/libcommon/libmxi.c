
#include <stdio.h>
#include <assert.h>

#include "libmxi.h"

/*
void mxi_printrow(int m[MXIDIM][MXIDIM], int nr, int nc, int r) // DOIT
*/

void mxi_print(int m[MXIDIM][MXIDIM], int nr, int nc) // DOIT
{
	int i;
	int j;

	assert(nr > 0);
	assert(nr <= MXIDIM);

	assert(nc > 1);
	assert(nc <= MXIDIM);

	for(i = 0; i < nr; ++i)	{
		for(j = 0; j < nc; ++j) {
			printf("%5i ", m[i][j]);
		}
		printf("\n");
	}
}

void mxi_transpose(int src[MXIDIM][MXIDIM], int nr, int nc, int dst[MXIDIM][MXIDIM])
{
	int r; // i
	int c; // j

	assert(nr > 0);
	assert(nr <= 100);

	assert(nc > 1);
	assert(nc <= 100);
	
	for(r = 0; r < nr; ++r) {
		for(c = 0; c < nc; ++c) {
			dst[c][r] = src[r][c];
		}
	}
}

