/* chapter 10 exercise 12 program to convert a string to  floating point value
 * vasanth 03 march 2018
 */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define NUM(x) ((x >= '0') && (x <= '9'))
#define DOT(y) (y == '.')

float string_to_float(char s[])
{
	float decimal, num, result;
	bool is_dot = false;
	int i = 0;

	if (s[i] == '-') {
		i = 1;
	}

	result = 0.0f;
	num = 1.0f;
	while (NUM(s[i]) || DOT(s[i])) {

		if (DOT(s[i])) {
			++i;
			is_dot = true;
		}

		decimal = s[i] - '0';	/* ascii decimal character set calculation
					   eg. let s[ 0 ... '!0' ], s[0] = '4'
					  	   decimal = '4' - '0'
						   decimal =  52 - 48	(char '4' ascii decimal 52, char '0' ascii decimal 48)
						   decimal =  4		(get char '4' to digit 4) */
		if (is_dot) {
			num = num * 10.0f;
			result = result + (decimal / num);
		} else {
			result = result * 10.0f + decimal;
		}
		++i;
	}
	assert(!NUM(s[i]) && !DOT(s[i]));

	if (s[0] == '-') {
		result = -result;
	}

	return result;
}

int main(void)
{
	char source[100];
	float num;

	printf("convert a string to float>\n");
	printf("enter a string: ");
	scanf("%s", source);
	printf(" [ %s ]\n", source);

	num = string_to_float(source);
	printf("string [ %s ] float %f\n", source, num);

	return 0;
}

