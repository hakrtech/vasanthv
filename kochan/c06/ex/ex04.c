/* Chapter 06 Exercise 04 Program acts as simple printing calculator
 * Vasanth 12 October 2017
 */

#include <stdio.h>

int main(void)
{
	float accumulator;
	int i;

	printf("set S for accumulator and use simple calculator to access given operation + - * / S E\n");
	printf("set accumulator value ");
	scanf("%f", &accumulator);
	printf("setted accumulator is %f\n\n", accumulator);

	i = 1;
	while (i != 0) {
		int num;
		char action;

		printf("enter number ");
		scanf("%i", &num);
		printf("entered number is %i\n", num);
		printf("enter operation ");
		scanf("%s", &action);
		printf("entered operation is %c\n\n", action);

		switch (action) {
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
			i = 0;
			printf("end of operation and final value %f\n", accumulator);
			break;
		default:
			i = 0;
			printf("unknown operation\n");
		}
	}

	return 0;
}
