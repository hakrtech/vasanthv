/* Chapter 06 Exercise 04 Program acts as simple printing calculator
 * Vasanth 12 October 2017
 */

#include <stdio.h>

int main(void)
{
	float accumulator;
	int option;

	printf("set S for accumulator and use simple calculator to access given operations + - * / S E\n");
	printf("set accumulator value ");
	scanf("%f", &accumulator);
	printf("setted accumulator is %f\n\n", accumulator);

	option = 1;
	while (option != 0) {
		float num;
		char operatCal;

		printf("enter number ");
		scanf("%f", &num);
		printf("entered number is %f\n", num);
		printf("enter operation ");
		scanf("%s", &operatCal);
		printf("entered operation is %c\n\n", operatCal);

		switch (operatCal) {
		case 'S':
			printf("the accumulator value is %f\n\n", accumulator);
			break;
		case '+':
			accumulator += num;
			printf("the addition of value is %f\n\n", accumulator);
			break;
		case '-':
			accumulator -= num;
			printf("the subtraction of value is %f\n\n", accumulator);
			break;
		case '*':
			accumulator *= num;
			printf("the multiplication of value is %f\n\n", accumulator);
			break;
		case '/':
			accumulator /= num;
			printf("the division of value is %f\n\n", accumulator);
			break;
		case 'E':
			option = 0;
			printf("end of operation and the final value is %f\n", accumulator);
			break;
		default:
			option = 0;
			printf("unknown operation\n");
		}
	}

	return 0;
}
