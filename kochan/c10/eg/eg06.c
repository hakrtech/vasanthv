/* chapter 10 example 06 reading line of data
 * vasanth 19 february 2018
 */

#include <stdio.h>
#include <assert.h>

void read_line(char buffer[], int n)
{
	char c;
	int i = 0;

	do {
		c = getchar();
		assert((0 <= i) && (i < n));
		buffer[i] = c;
		++i;
	} while (c != '\n');

	assert((0 <= i) && (i < n));
	buffer[i-1] = '\0';
}

int main(void)
{
	char a[100];
	int n = 100;
	int i;

	printf("reading line of data>\nenter three line: \n");

	for (i = 0; i < 3; ++i) {
		read_line(a, n);
		printf("%s\n\n", a);
	}

	return 0;
}

