/* chapter 10 exercise 03 word counting program
 * vasanth 21 february 2018
 */

#include <stdio.h>
#include <stdbool.h>

#define IS_ALPHA(c)		( ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) )
#define IS_NUM_COMMAS(d)	( ((d >= '0') && (d <= '9')) || ((d >= '!') && (d <= '/')) || ((d >= ':') && (d <= '@')) )
#define IS_WORD(x)		( (IS_ALPHA(x)) || (IS_NUM_COMMAS(x)) )
#define IS_SPACE(y)		( (y == ' ') )

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

int main(void)
{
	int r;
	const char a[] = "hello! india@ 1.234,2 -34a xyz";

	r = word_count(a);
	printf("strings [ %s ] word count %d\n", a, r);

	return 0;
}

