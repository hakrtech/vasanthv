/* chapter 11 example 07 program to traverse a linked list
 * vasanth 21 march 2018
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
	struct entry *list_ptr;

	num1.val = 100;
	num1.next = &num2;
	num2.val = 200;
	num2.next = &num3;
	num3.val = 300;
	num3.next = (struct entry *) 0;		/* mark list end with null pointer */

	printf("traverse a linked list and end with null>\n");
	printf("num1 = %d num2 = %d num3 = %d\n", num1.val, num2.val, num3.val);
	printf("linked list pointer digits>\n");

	list_ptr = &num1;
	while (list_ptr != ((struct entry *) 0)) {
		printf("digit %d\n", list_ptr->val);
		list_ptr = list_ptr->next;
	}

	return 0;
}

