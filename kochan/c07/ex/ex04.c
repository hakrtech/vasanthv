/* Chapter 07 Exercise 04 Program to calculate the average of an array of
 * ten floating point values
 * Vasanth 30 October 2017
 */

#include <stdio.h>

int main(void)
{
	float val[10];
	float add;
	float avg;
	int count;

	add = 0;
	count = 0;

	printf("enter ten floating point value>\n");

	while (count < 10) {
		scanf("%f", &val[count]);
		printf("entered value[%i] =  %.2f\n", count, val[count]);

		add += val[count];
		++count;
	}
	avg = add / 10;
	
	printf("calculated total value is %.4f and average of values is %.4f\n", add, avg);

	return 0;
}
