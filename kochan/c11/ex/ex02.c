/* chapter 11 exercise 02 develop insert entry function to insert a new entry into a linked list
 * vasanth 24 march 2018
 */

#include <stdio.h>

#include "libinput.h"

struct entry
{
	int val;
	struct entry *next;
};

void insert_entry(struct entry *new)
{
	new->val = input_decimal_int("new insert: ");
}

void print_list(struct entry *list_ptr)
{
	while (list_ptr != (struct entry *) 0) {
		printf(" %d\n", list_ptr->val);
		list_ptr = list_ptr->next;
	}
}

int main(void)
{
	struct entry num1, num2, num3, *insert;
	struct entry ap, bp, cp;
	struct entry *list;
	/*
	ap = allocate size of struct node
	verify ap is not null

	similary allocate bp and cp

	use ap, bp, cp instead of num1, num2, num3	
	*/
	list = &num1;
	num1.val = 100;
	num1.next = &num2;
	num2.val = 200;
	num2.next = &num3;
	num3.val = 300;
	num3.next = (struct entry *) 0;

	printf("insert new entry into linked list>\n");
	printf("linked list\n");
	print_list(list);

	// new entry into a linked list
	insert->next = num3.next;
	num3.next = insert;
	insert_entry(insert);
	printf("inserted linked list>\n");
	print_list(list);

	return 0;
}

