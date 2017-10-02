/* Chapter 8 Example 11 Program to change the array elements in function
 * Vasanth 02 October 2017
 */

#include <stdio.h>

int main(void)
{
	float fvalue[10] = { 8.09f, 8.90f, 9.98f, 8.589, 5.65, 0.999f, 8.97f, 0.999, 77.888, 67.098f };
	int i;

	void pointvalue(float x[], int numofarray);

	printf("Multipliyed Array Float Value is:\n");

	pointvalue(fvalue, 10);

	for(i = 0; i < 10; i++)
	{
		printf("%.3f\n", fvalue[i]);
	}

	return 0;
}

void pointvalue(float x[], int numofarray)
{
	int i;

	for( i = 0; i < numofarray; ++i)
	{
		x[i] *= 2;
	}

}
