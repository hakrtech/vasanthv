/* Chapter 8 Exercise 2 Program to calculate triangular number using function
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int triangular_num(int n)
{
	int sum;
	int count;

	sum = 0;
	count = 1;
       
	while (count <= n) {
		sum += count;
		++count;
	}

	return sum;
}

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

		result = triangular_num(num);

		printf("number %d triangular %d\n", num, result);
	}

	return 0;
}

