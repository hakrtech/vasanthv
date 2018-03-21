/* chapter 11 example 09 using pointers to exchange values
 * vasanth 21 march 2018
 */

#include <stdio.h>

void exchange_ptr_val(int * const ptr1, int * const ptr2)
{
	int temp = *ptr1;

	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	int num1, num2, *p1, *p2;

	num1 = -5;
	num2 = 27;
	p1 = &num1;
	p2 = &num2;

	printf("exchange pointers value>\n");
	printf("num1 = %d num2 = %d\n", num1, num2);

	exchange_ptr_val(p1, p2);
	printf("num1 = %d num2 = %d\n", num1, num2);
	exchange_ptr_val(&num1, &num2);
	printf("num1 = %d num2 = %d\n", num1, num2);

	return 0;
}

