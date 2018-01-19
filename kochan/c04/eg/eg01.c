/* chapter 04 example 01 using the basic data type
 * vasanth 19 january 2018
 */

#include <stdio.h>

int main(void)
{
	int i_val = 100;
	float f_val = 331.79;
	double d_val = 8.44e+11;
	char c = 'W';
	_Bool isbool = 0;

	printf("integer val = %i\n", i_val);
	printf("float val = %f\n", f_val);
	printf("double val = %e\n", d_val);
	printf("char = %c\n", c);
	printf("isbool = %i\n", isbool);

	return 0;
}

