 /* sqrt example */
#include <stdio.h>
#include <math.h>
#include "level.h"

#define VAL 1.0f

int main (void)
{
	double val = VAL;

	while (val <= LIMIT) {
		double res;

		res = sqrt(val);
		printf ("sqrt(%lf) = %lf\n", val, res);
		++val;
	}
	
	return 0;
}

