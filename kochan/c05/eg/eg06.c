/* Chhapter 05 Example 06 Program to using while loop
 * Vasanth 11 October 2017
 */

#include <stdio.h>

int main(void)
{
	float count;
	count = 0;

	while (count < 5) {
		count = count +0.5;
		printf("%.2f\n", count);
	}
	return 0;
}
