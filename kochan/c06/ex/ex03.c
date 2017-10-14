/* Chapter 06 Exercise 03 Program to display the resul of dividing the first number by the second number
 * Vasanth 12 October 2017
 */

#include <stdio.h>

int main(void)
{
	int first_num;
	int second_num;
	int quotient;

	printf("enter any two number and to get division result>\n");
	printf("enter first number: ");
	scanf("%i", &first_num);
	printf("enter second number: ");
	scanf("%i", &second_num);
	printf("entered first number is %d and second number is %d\n", first_num, second_num);

	quotient = first_num / second_num;

	printf("result of quotient %.3i\n", quotient);

	return 0;
}
