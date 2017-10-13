/* Chapter 06 Exercise 06 Program to print the digit into english word
 * Vasanth 12 October 2017
 */

#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int j;

	printf("digits are printed into english word form> \n");
	printf("enter the number ");
	scanf("%d", &num);
	printf("printed number is %d\n", num);

	i = num;
	j = 0;
	while (i != 0) {
		j = (j*10) + (i%10);	/* last digit continuously added and saved into j variable */
		i = i / 10;
	}

	num = j;
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
