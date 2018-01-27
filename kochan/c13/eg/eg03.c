/* chapter 13 example 03 program to illustrate the use of the #include statement
 * note: this program assumes that definitions are set up in a file called metric.h
 * vasanth 27 january 2018
 */

#include <stdio.h>

#include "metric.h"

int main(void)
{
	float liters, gallons;

	printf("liters to gallons>\n");
	printf("liters: ");
	scanf("%f", &liters);

	gallons = liters * QUARTS_PER_LITER / 4.0f;
	printf("%g liters = %g gallons\n", liters, gallons);

	return 0;
}

