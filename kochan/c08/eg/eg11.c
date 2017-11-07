/* Chapter 8 Example 11 Program to change the array elements into function and double the values
 * Vasanth 02 October 2017
 */

#include <stdio.h>

void point_val(float farray[], int limit)
{
	int count = 0;

	while (count < limit) {
		farray[count] *= 2.0;
		++count;
	}

}

int main(void)
{
	float fvalue[10] = { 8.09, 8.90, 9.98, 8.589, 5.65, 0.999, 8.97, 0.999, 77.888, 67.098 };
	int count = 0;

	printf("multiplied array float value>\n{ ");

	point_val(fvalue, 10);

	while (count < 10) {
		printf("%.3f, ", fvalue[count]);
		++count;
	}
	printf("}\n");

	return 0;
}

