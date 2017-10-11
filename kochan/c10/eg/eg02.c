/* chapter 10 Example 10.2 Program to count the number of characters in a string
 * vasanth [22 september 2017]
 */

#include <stdio.h>

int main(void)
{
	int wordlenth(const char string[]);

	const char word1[] = {'C', 'u', 'd', 'd', 'a', 'l', 'o', 'r', 'e', '\0'};
	const char word2[] = {'T', 'i', 'r', 'u', 'c', 'h', 'i', 'r', 'a', 'p', 'p', 'a', 'l', 'l', 'i', '\0'};
	const char word3[] = {'C', 'h', 'e', 'n', 'n', 'a', 'i', '\0'};

	printf("%i %i %i\n", wordlenth(word1), wordlenth(word2), wordlenth(word3));

	return 0;
}

int wordlenth(const char string[])
{
	int count = 0;

	while (string[count] != '\0')
		++count;

	return count;
}
