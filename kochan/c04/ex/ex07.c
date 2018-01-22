/* chapter 04 exercise 07 evaluvate given expression and use exponential format
 * ((3.31 * 10^-8) * (2.01 * 10^-7)) / ((7.16 * 10^-6) + (2.01 * 10^-8))
 * vasanth 22 january 2018
 */

#include <stdio.h>

int main(void)
{
	double x;

	x = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);

 	printf("expression: ((3.31 * 10^-8) * (2.01 * 10^-7)) / ((7.16 * 10^-6) + (2.01 * 10^-8))\n");
	printf("exponential format: (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8)\n exponential result: %e\n result: %f\n", x, x);

	return 0;
}

