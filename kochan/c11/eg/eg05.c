/* chapter 11 example 05 using structures containing pointers
 * vasanth 20 march 2018
 */

#include <stdio.h>

int main(void)
{
	struct int_ptrs
	{
		int *p1;
		int *p2;
	};

	struct int_ptrs pointers;
	int a = 100, b;

	pointers.p1 = &a;
	pointers.p2 = &b;
	*pointers.p2 = -97;

	printf("structures containing pointers>\n");
	printf("a = %d *pointers.p1 = %d\n", a, *pointers.p1);
	printf("b = %d *pointers.p2 = %d\n", b, *pointers.p2);

	return 0;
}

