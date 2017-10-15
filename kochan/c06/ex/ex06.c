/* Chapter 06 Exercise 06 Program to print the digit into english word
 * Vasanth 13 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int count;

	printf("digits are printed into english word form> \n");
	printf("enter the number ");
	scanf("%d", &num);
	printf("printed number is %d\n", num);

	count = 0;
	while (num != 0) {
		count = (count * 10) + (num % 10);	/* the last digit of user input continuously sum reminder, product and finaly saved into count variable for this loop */
		num = num / 10;
	}

	num = count;		/*total count value is asigned into num variable */
	do {
		int digit;

		digit = num % 10;
		num = num / 10;

		switch (digit) {
		case 0:
			printf("zero ");
			break;
		case 1:
			printf("one ");
			break;
		case 2:
			printf("two ");
			break;
		case 3:
			printf("three ");
			break;
		case 4:
			printf("four ");
			break;
		case 5:
			printf("five ");
			break;
		case 6:
			printf("six ");
			break;
		case 7:
			printf("seven ");
			break;
		case 8:
			printf("eight ");
			break;
		case 9:
			printf("nine ");
			break;
		default:
			printf("check it's not digit\n");
			break;

		}
	} while (num != 0);
	printf("\n");

	return 0;
}
