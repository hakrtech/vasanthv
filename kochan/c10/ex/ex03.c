/* chapter 10 exercise 03 word counting program
 * vasanth 21 february 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define IS_ALPHA(c)		( ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) )
#define IS_NUM_COMMAS(d)	( ((d >= '0') && (d <= '9')) || ((d >= '!') && (d <= '/')) || ((d >= ':') && (d <= '@')) )
#define IS_WORD(x)		( (IS_ALPHA(x)) || (IS_NUM_COMMAS(x)) )
#define IS_SPACE(y)		( (y == ' ') || (y == '	') )

int word_count(const char s[])
{
	int wc, i;
	char c;
	bool is_in_word = true;

	wc = 0;
	for (i = 0; (s[i] != '\0'); ++i) {
		c = s[i];

		if (IS_WORD(c)) {
			if (is_in_word) {
				++wc;
				is_in_word = false;
			}
		}
		if (IS_SPACE(c)) {
			is_in_word = true;
		}
	}

	return wc;
}

void read_line(char b[], int n)
{
	char c;
	int i = 0;

	do {
		c = getchar();
		assert((0 <= i) && (i <= n));
		b[i] = c;
		++i;
	} while (c != '\n');

	assert((0 <= i) && (i <= n));
	b[i-1] = '\0';
}

int main(void)
{
	char a[201];
	int n = 200;
	int r;

	printf("word counting>\n");
	printf("type text: ");

	read_line(a, n);
	r = word_count(a);
	printf("strings [ %s ] word count %d\n", a, r);

	return 0;
}

