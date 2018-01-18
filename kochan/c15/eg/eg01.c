/* chapter 15 example 01 program to illustrate use of external veriables
 * vasanth 18 january 2018
 */

#include <stdio.h>

#include "eg01a.h"

int num = 5;

int main(void)
{
	printf("num %i ", num);

	foo();

	printf("num %i\n", num);

	return 0;
}

