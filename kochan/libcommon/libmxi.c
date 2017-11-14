
#include <stdio.h>
#include <assert.h>

#include "libmxi.h"

/*
void mxi_printrow(int m[MXIDIM][MXIDIM], int nr, int nc, int r) // DOIT
*/

void mxi_print(int m[MXIDIM][MXIDIM], int nr, int nc) // OK
{
	int r;
	int c;

	assert(nr > 0);
	assert(nr <= MXIDIM);
	assert(nc > 0);
	assert(nc <= MXIDIM);

	for (r = 0; r < nr; ++r)	{
		for (c = 0; c < nc; ++c) {
			printf("%5i ", m[r][c]);
		}
		printf("\n");
	}
}

void mxi_transpose(int src[MXIDIM][MXIDIM], int nr, int nc, int dst[MXIDIM][MXIDIM]) // OK
{
	int r;
	int c;

	assert(nr > 0);
	assert(nr <= MXIDIM);
	assert(nc > 0);
	assert(nc <= MXIDIM);
	
	for (r = 0; r < nr; ++r) {
		for (c = 0; c < nc; ++c) {
			dst[c][r] = src[r][c];
		}
	}
}

void mxi_sum(int m[MXIDIM][MXIDIM], int n[MXIDIM][MXIDIM], int nr, int nc) // DONE
{
	int r;
	int c;

	assert(nr > 0);
	assert(nr <= MXIDIM);
	assert(nc > 0);
	assert(nc <= MXIDIM);

	for (r = 0; r < nr; ++r) {
		for (c = 0; c < nc; ++c) {
			m[r][c] = m[r][c] + n[r][c];
		}
	}
}

void mxi_subtraction(int m[MXIDIM][MXIDIM], int n[MXIDIM][MXIDIM], int nr, int nc) // DONE
{
	int r;
	int c;

	assert(nr > 0);
	assert(nr <= MXIDIM);
	assert(nc > 0);
	assert(nc <= MXIDIM);

	for (r = 0; r < nr; ++r) {
		for (c = 0; c < nc; ++c) {
			m[r][c] = m[r][c] - n[r][c];
		}
	}
}

