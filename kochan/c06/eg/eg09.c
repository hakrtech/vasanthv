/* Chapter 06 Example 09 Program to evaluate simple expressions using switch case
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	float val_one;
	float val_two;
	char operate;
	float sum;
	float difference;
	float product;

	printf("type in your expression\n");
	scanf("%f %c %f", &val_one, &operate, &val_two);
	printf("entered expression is %.2f %c %.2f\n", val_one, operate, val_two);
	printf("expression result> ");

	switch (operate) {
	case '+':
		sum = val_one + val_two;
		printf("%.2f\n", sum);
		break;

	case '-':
		difference = val_one - val_two;
		printf("%.2f\n", difference);
		break;

	case '*':
		product = val_one * val_two;
		printf("%2f\n", product);
		break;

	case '/':

		if (val_two == 0) {
			printf("division by zero\n");
		} else {
			float quotient;

			quotient = val_one / val_two;
			printf("%.2f\n", quotient);
		}
		break;

	default:
		printf("unknown operator\n");
		break;
	}

	return 0;
}
