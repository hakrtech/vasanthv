 /* sqrt example */
#include <stdio.h>
#include <math.h>

#define MAX_STR 200

int main (void)
{
	while (!feof(stdin)) {
		double param; 
		double result;
		int ss;
		char str[MAX_STR];
		char *p;

		p = fgets(str, MAX_STR, stdin);
		ss = sscanf(str, "%lf", &param);

		if (!p) {
			break;
		}
		if (ss != 1) {
			fprintf(stderr, "error ss %d [%s]\n",ss, str);
			continue;
		}

		result = sqrt(param);
   
		printf ("sqrt(%lf) = %lf\n", param, result);
	}
	
	return 0;
}

