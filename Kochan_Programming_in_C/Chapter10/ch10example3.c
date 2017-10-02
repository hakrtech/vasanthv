/* Chapter 10 Example 10.3 Program to concatenat character string words
 * vasanth [22 september 2017]
 */

#include <stdio.h>

int main(void)
{
	void concat(char result[], const char str1[], const char str2[], const char str3[]);

	const char str1[] = {"computer "};
	const char str2[] = {"science "};
	const char str3[] = {"Engineer."};
	char strresult[30];

	concat(strresult, str1, str2, str3);

	printf("%s\n", strresult);

	return 0;
}

void concat(char result[], const char str1[], const char str2[], const char str3[])
{
	int i;
	int j;
	int k;

	for (i = 0; str1[i] != '\0'; ++i)
		result[i] = str1[i];

	for (j = 0; str2[j] != '\0'; ++j)
		result[i+j] = str2[j];

	for (k = 0; str3[k] != '\0'; ++k)
		result[i+j+k] = str3[k];

	result[i+j+k] = '\0';
}
