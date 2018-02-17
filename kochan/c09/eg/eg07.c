/* chapter 09 example 07 program to illustrate and arrays
 * vasanth 17 february 2018
 */

#include <stdio.h>

int main(void)
{
	struct month
	{
		int num_of_days;
		char name[100];
		int n;
	};

	int i;
	struct month start, stop;
	const struct month mm[] = { { 31, {'j', 'a', 'n'} }, { 28, {'f', 'e', 'b'} }, 
				    { 31, {'m', 'a', 'r'} }, { 30, {'a', 'p', 'r'} },
				    { 31, {'m', 'a', 'y'} }, { 30, {'j', 'u', 'n'} },
				    { 31, {'j', 'u', 'l'} }, { 31, {'a', 'u', 'g'} },
				    { 30, {'s', 'e', 'p'} }, { 31, {'o', 'c', 't'} },
				    { 30, {'n', 'o', 'v'} }, { 31, {'d', 'e', 'c'} }
				  };

	printf("month\t number of days\n");

	// loop mm [ 0 .. 11]
	start.n = 0;
	stop.n = 11;
	for (i = start.n; i <= stop.n; ++i) {
		printf(" %c%c%c\t %i\n", mm[i].name[0], mm[i].name[1], mm[i].name[2], mm[i].num_of_days);
	}

	return 0;
}

