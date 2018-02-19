/* chapter 10 example 07 program to counting words
 * vasanth 19 february 2018
 */

#include <stdio.h>
#include <stdbool.h>

// function to determine if a character is alphabetic
bool alpha(const char c)
{
	bool is_alpha = false;

	if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')) {
		is_alpha = true;
	}

	return is_alpha;
}

// function to count the number of words in a string
int count_words(const char s[])
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
	const char a[] = "save water.";
	const char b[] = "plant trees ... goto nature! live long in the world:)";

	printf("wordcounting>\n");
	printf("words:\n[ %s ]\nwords count: %d\n", a, count_words(a));
	printf("words:\n[ %s ]\nwords count: %d\n", b, count_words(b));

	return 0;
}

