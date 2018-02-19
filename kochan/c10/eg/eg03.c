/* Chapter 10 Example 10.3 Program to concatenat character string words
 * vasanth [22 september 2017]
 */

#include <stdio.h>
#include <assert.h>

void concat(char r[], int n, const char a[], const char b[], const char c[])
{
	int i, j, k, l;

	for (i = 0, l = 0; a[i] != '\0'; ++i, ++l) {

		assert((0 <= l) && (l < n));
		r[l] = a[i];
	}

	for (j = 0, l = i; b[j] != '\0'; ++j, ++l) {

		assert((i <= l) && (l < n));
		r[l] = b[j];
	}

	for (k = 0, l = i+j; c[k] != '\0'; ++k, ++l) {

		assert(((i+j) <= l) && (l < n));
		r[l] = c[k];
	}

	assert(((i+j+k) <= l) && (l < n));
	r[l] = '\0';
}

int main(void)
{
	const char a[] = { "computer " };
	const char b[] = { "science " };
	const char c[] = { "Engineer." };
	char result[100];
	int n = 100;

	concat(result, n, a, b, c);
	printf("concat three word>\n%s\n", result);

	return 0;
}

