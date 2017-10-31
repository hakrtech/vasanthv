/* Chapter 07 Exercise 06 Program to generate fibonacci number without using arrays
 * Vasanth 31 October 2017
 */

#include <stdio.h>

int main(void)
{
	unsigned long long int initial_val = 0;
	unsigned long long int next_val = 1;
	int num;
	int count = 1;

	printf("enter any number and generate upto fibonacci numbers> ");
	scanf("%i", &num);
	printf("entered number is %i\n", num);
	printf("fibonacci numbers>\n");

	while (count <= num) {
		unsigned long long int new_val;
		printf("%llu  ", initial_val);

		new_val = initial_val + next_val;
		initial_val = next_val;
		next_val = new_val;
		++count; 
	}
	printf("\n");

	return 0;
}
