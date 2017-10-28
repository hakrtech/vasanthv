/* Chapter 07 Example 01 working with array
 * Vasanth 28 October 2017
 */

#include <stdio.h>

int main()
{
	int val[10];
	int index;

	val[0] = 197;
	val[2] = -100;
	val[5] = 350;
	val[3] = val[0] + val[5];
	val[9] = val[5] / 10;
	val[8] = val[9] * 2;
	--val[2];

	for (index = 0; index < 10; ++index) {
		printf("values[%i] = %i\n", index, val[index]);
	}

	return 0;
}