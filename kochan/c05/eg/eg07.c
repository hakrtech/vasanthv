/* Chapter 05 Example 07 Program to find the greatest common divisor
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int first_num;
	int second_num;

	printf("enter any two number\n");
	printf("enter x value: ");
	scanf("%i", &first_num);
	printf("enter y value: ");
	scanf("%i", &second_num);
	printf("entered value of x = %i and y = %i\n", first_num, second_num);

	while (second_num != 0) {
		int temp;

		temp = first_num % second_num;
		first_num = second_num;
		second_num = temp;
	}
	printf("the greatest common divisor x and y is %i\n", first_num);

	return 0;
}
