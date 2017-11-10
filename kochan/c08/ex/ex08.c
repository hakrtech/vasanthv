/* Chapter 08 Exercise 08 Program to solve Quadratic equvation and discriminant b^2 - 4ac < 0 means root x1,x2 Imaginary.
 * Example ax^2 + bx + c = 0 the solution x = ([-b (+or-) squareRootof(b^2 - 4ac)] / 2a)
 * Vasanth 04 October 2017
 */

#include <stdio.h>

#include "libreal.h"

int main(void)
{
	float a;
	float b;
	float c;
	float chim;
	float sqroot;
	float x1;
	float x2;


	printf("Welcome to solve Quadratic Equvation[ax^2+bx+c = 0]: \n");
	printf("Enter the value of a:  ");
	scanf("%f", &a);
	printf("Enter the value of b:  ");
	scanf("%f", &b);
	printf("Enter the value of c:  ");
	scanf("%f", &c);
	printf("\nThe given Quadratic Equvation: %.2fx^2+%.2fx+%.2f = 0 to find value of x?\n", a, b, c);

	chim = (b * b) - (4 * a * c);

	if (chim < 0) {
		printf("The Root of Equvation x1 and x2 are IMAGINARY!!!\n");
	} else {
		sqroot = numf_sqrtf1(chim);
		x1 = ( ((-b) + sqroot) / (2 * a) );
		x2 = ( ((-b) - sqroot) / (2 * a) );

		printf("\nThe results are x1 = %f and x2 = %f\n\n", x1, x2);
	}

	return 0;
}

