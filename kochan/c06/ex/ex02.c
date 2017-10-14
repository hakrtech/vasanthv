/* Chapter 06 Exercise 02 Program to test the first number is evenly divisible by the second number
 * Vasanth 12 October 2017
 */

#include <stdio.h>

int main(void)
{
	int first_num;
	int second_num;
	int remainder;

	printf("enter any two number and check first number is divisible by second number>\n");
	printf("enter first number: ");
	scanf("%i", &first_num);
	printf("enter second number: ");
	scanf("%i", &second_num);
	printf("entered first number is %d and second number is %d\n", first_num, second_num);

	remainder = first_num % second_num;

	if (remainder == 0) {
		printf("yes first number %i divisible by the second number %i\n", first_num, second_num);
	} else {
		printf("no first number %i not divisible by second number %i\n", first_num, second_num);
	}

	return 0;
}
