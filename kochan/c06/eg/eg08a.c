/* Chapter 06 Example 08a Revising - Program to evaluate simple expressions
 * Vasanth 15 October 2017
 */

#include <stdio.h>

int main(void)
{
	float val_one;
	float val_two;
	char operate;

	printf("type in your expression\n");
	scanf("%f %c %f", &val_one, &operate, &val_two);
	printf("entered expression is %.2f %c %.2f\n", val_one, operate, val_two);
	printf("expression result> ");

	if (operate == '+') {
		float sum;

		sum = val_one + val_two;
		printf("%.2f\n", sum);

	} else if (operate == '-') {
		float difference;

		difference = val_one - val_two;
		printf("%.2f\n", difference);

	} else if (operate == '*') {
		float product;

		product = val_one * val_two;
		printf("%2f\n", product);

	} else if (operate == '/') {

		if (val_two == 0) {
			printf("division by zero\n");
		} else {
			float quotient;

			quotient = val_one / val_two;
			printf("%.2f\n", quotient);
		}
	} else {
		printf("unknown operator\n");
	}

	return 0;
}
