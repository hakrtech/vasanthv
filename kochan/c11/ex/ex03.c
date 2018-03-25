/* chapter 11 exercise 03 program to inserting a new entry at the front of the linked list
 * vasanth 25 march 2018
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
	struct entry *list = &num1;

	num1.val = 10;
	num1.next = &num2;
	num2.val = 20;
	num2.next = &num3;
	num3.val = 30;
	num3.next = (struct entry *) 0;

	printf("insert new entry at the front of linked list>\n");
	printf("link list\n");
	print_list(list);

	// front new entry into linked list
	list = insert;
	insert_entry(insert);
	insert->next = &num1;

	printf("inserted front of linked list\n");
	print_list(list);

	return 0;
}

