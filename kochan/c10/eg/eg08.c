/* chapter 10 example 08 counting words in a piece of text
 * vasanth 20 february 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool alpha(const char c)
{
	bool is_alpha = false;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		is_alpha = true;
	}

	return is_alpha;
}

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

int word_count(const char s[])
{
	int wc, i;
	bool is_looking_word = true;

	wc = 0;
	for (i = 0; s[i] != '\0'; ++i) {
		if (alpha(s[i])) {
			if (is_looking_word) {
				++wc;
				is_looking_word = false;
			}
		} else {
			is_looking_word = true;
		}
	}

	return wc;
}

int main(void)
{
	char text[101];
	int n = 101;
	int tw;
	bool is_end_of_text = false;

	printf("counting words in your text>\n");
	printf("type in your text:\ndone, press [enter]\n");

	while (! is_end_of_text) {
		read_line(text, n);
		if (text[0] == '\0') {
			is_end_of_text = true;
		} else {
			tw += word_count(text);
		}
	}
	printf("total words in text: %d\n", tw);

	return 0;
}

