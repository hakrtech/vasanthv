/* chapter 11 example 08 program to illustrate using pointers and functions
 * vasanth 21 march 2018
 */

#include <stdio.h>

void test_pointer(int *int_ptr)
{
	*int_ptr = 100;
}

int main(void)
{
	int num, *p;

	num = 50;
	p = &num;

	printf("using pointers and functions>\n");
	printf("before call to test_pointer function\nnum = %d\n", num);
	test_pointer(p);
	printf("after call to test_pointer function\nnum = %d\n", num);

	return 0;
}

