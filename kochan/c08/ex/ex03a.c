 /* sqrt example */
#include <stdio.h>
#include <assert.h>
#include "libreal.h"

#define MAX_STR 200
#define EPSILON 0.00001f

int main (void)
{
	while (!feof(stdin)) {
		float param; 
		float result;
		int ss;
		char str[MAX_STR];
		char *p;

		p = fgets(str, MAX_STR, stdin);
		ss = sscanf(str, "%f", &param);

		if (!p) {
			break;
		}
		if (ss != 1) {
			fprintf(stderr, "error ss %d [%s]\n",ss, str);
			continue;
		}
		
		assert(param >= 0.0f);
		result = numf_sqrtf(param, EPSILON);
   		printf("sqrt(%f) = %f\n", param, result);
	}
	
	return 0;
}

