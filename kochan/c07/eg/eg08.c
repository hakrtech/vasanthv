/* Chapter 07 Example 08 Program to genertate fibonacci numbers using variable length arrays
 * Vasanth 29 October 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	long int fibonacci[1000];
	int i;

	printf("how many fibonacci number do you want (between 1 and 1000)?>  ");
	scanf("%i", &num);
	printf("entered choice is %i\n", num);

	if (num < 1 || num > 1000) {
		printf("bad number, sorry!!!\n");
		exit(1);
	}

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (i = 2; i < num; ++i) {
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	}

	for (i = 0; i < num; ++i) {
		printf("%li	", fibonacci[i]);
	}
	printf("\n");

	return 0;
}
