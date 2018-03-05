/* chapter 10 exercise 11 programt to convert string to integer and also includes minus sign, to get negative numbers.
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <assert.h>

int string_to_integer(char s[])
{
	int i, digit, result;

	i = 0;
	if (s[i] == '-') {
		i = 1;
	}

	result = 0;
	while ((s[i] >= '0') && (s[i] <= '9')) {
		digit = s[i] - '0';	/* ascii character set calculation
					   eg. let s[ 0 ... '\0'], s[0] = '5'
					   	   num = '5' - '0'
						   num =  53 - 48	(char '5' ascii decimal 53, char '0' ascii decimal 48)
						   num =  5		(char '5' into digit 5) */
		result = result * 10 + digit;
		++i;
	}
	assert((s[i] < '0') || (s[i] > '9'));

	if (s[0] == '-') {
		result = -result;
	}

	return result;
}

int main(void)
{
	char source[101];
	int num;

	printf("convert a string and minus sign to an integer>\n");
	printf("enter a string: ");
	scanf("%s", source);
	printf("[ %s ]\n", source);

	num = string_to_integer(source);
	printf("string [ %s ] integer %d\n", source, num);

	return 0;
}

