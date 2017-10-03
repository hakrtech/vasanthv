/* Chapter 8 Example 15 Program to illustrate static and automatic variables
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int main(void)
{
	int i;

	void autostatic(void);

	for(i = 0; i < 5; ++i)
	{
		autostatic();
	}

	return 0;
}

void autostatic(void)
{
	int autovar = 0;
	static int staticvar = 0;

	printf("automatic = %i,\tstatic = %i\n", autovar, staticvar);
	++autovar;
	++staticvar;
}
