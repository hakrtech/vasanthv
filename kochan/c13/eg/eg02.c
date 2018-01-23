/* chapter 13 example 02 function to calculate the area and circumference of
 * a circle, and the volume of a sphere of a given radius
 * vasanth 23 january 2018
 */

#include <stdio.h>

#define PI 3.141592654

double area(double r)
{
	double a = PI * r * r;

	return a;
}

double circumference(double r)
{
	double circum = 2.0f * PI * r;

	return circum;
}

double volume(double r)
{
	double volume = (4.0f / 3.0f) * (PI * r * r * r);

	return volume;
}

int main(void)
{
	printf("circle radius = 1\narea = %.4f circumference = %.4f volume = %.4f\n", area(1.0f), circumference(1.0f), volume(1.0f));
	printf("circle radius = 4.98\narea = %.4f circumference = %.4f volume = %.4f\n", area(4.98f), circumference(4.98f), volume(4.98f));

	return 0;
}

