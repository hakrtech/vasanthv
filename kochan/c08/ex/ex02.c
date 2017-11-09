/* Chapter 08 Exercise 02 Program to calculate triangular number using function
 * Vasanth 03 October 2017
 */

#include <stdio.h>

#include "libnumi.h"

int main(void)
{
	while (!feof(stdin)) {
		int num;
		int result;
		int s;
		char line[100];
		char *p;

		p = fgets(line, 100, stdin);
		if (!p) {
			break;		
		}

		s = sscanf(line, "%d", &num);
		if (s != 1) {
			fprintf(stderr, "error ss %d [%s]\n", s, line);
			continue;
		}

		result = numi_trisum(num);
		printf("number %d triangular %d\n", num, result);
	}

	return 0;
}

