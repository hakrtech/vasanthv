/* Chapter 07 Example 07 Program to convert a pastive integer to another base
 * Vasanth 29 October 2017
 */

#include <stdio.h>

int main(void)
{
	char digits[16] = { '0', '1', '2', '3', '4', '5', '6', '7',
						'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int converted_num[64];
	long int num_convert;
	int base;
	int index = 0;

	//get the number and the base

	printf("number to be converted?> ");
	scanf("%ld", &num_convert);
	printf("entered number is %ld\n", num_convert);
	printf("base?> ");
	scanf("%i", &base);
	printf("entered base is %i\n",base);

	//convert to the indicated base

	do {
		converted_num[index] = num_convert % base;
		++index;
		num_convert = num_convert / base;
	} while (num_convert != 0);

	//display the result in reverse order

	printf("converted number = ");

	for (--index; index >= 0; --index) {
		int next_digit;

		next_digit = converted_num[index];
		printf("%c", digits[next_digit]);
	}
	printf("\n");

	return 0;
}