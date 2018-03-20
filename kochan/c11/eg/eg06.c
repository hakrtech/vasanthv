/* chapter 11 example 06 using linked lists
 * vasanth 20 march 2018
 */

#include <stdio.h>

int main(void)
{
	struct entry
	{
		int val;
		struct entry *next;
	};

	struct entry num1, num2, num3;
	int digit;

	num1.val = 100;
	num2.val = 200;
	num3.val = 300;

	printf("linked list>\n");
	printf("num1 = %d num2 = %d num3 = %d\n", num1.val, num2.val, num3.val);

	num1.next = &num2;
	num2.next = &num3;

	digit = num1.next->val;
	printf("num1.next linked digit = %d\n", digit);
	digit = num2.next->val;
	printf("num2.next linked digit = %d\n", digit);

	return 0;
}

