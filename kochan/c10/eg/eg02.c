/* chapter 10 Example 10.2 Program to count the number of characters in a string
 * vasanth [22 september 2017]
 */

#include <stdio.h>

int word_len(const char string[])
{
	int count = 0;

	while (string[count] != '\0') {
		++count;
	}

	return count;
}

int main(void)
{
	int x, y, z;
	const char a[] = { 'C', 'u', 'd', 'd', 'a', 'l', 'o', 'r', 'e', '\0' };
	const char b[] = { 'T', 'i', 'r', 'u', 'c', 'h', 'i', 'r', 'a', 'p', 'p', 'a', 'l', 'l', 'i', '\0' };
	const char c[] = { 'C', 'h', 'e', 'n', 'n', 'a', 'i', '\0' };

	x = word_len(a);
	y = word_len(b);
	z = word_len(c);
	printf("word lenth >\ncuddalore %i tiruchirappalli %i chennai %i\n", x, y, z);

	return 0;
}

