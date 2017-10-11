/* Chapter 05 Exercise 10 Program to reverse the digits
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	printf("enter number get reverse number ");
	scanf("%i", &num);

	while (num != 0) {
		int reverse_num;
		reverse_num = num % 10;
		printf("%i", reverse_num);
		if (num < 0) {
			num = (-1 * num);
		}
		num = num / 10;
	}
	printf("\n");
	return 0;
}
