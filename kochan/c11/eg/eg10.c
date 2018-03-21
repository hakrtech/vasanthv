/* chapter 11 example 10 returning a pointer from a function
 * vasanth 21 march 2018
 */

#include <stdio.h>

struct entry
{
	int val;
	struct entry *next;
};

struct entry *find_entry(struct entry *list_ptr, int match)
{
	while (list_ptr != ((struct entry *) 0)) {
		if (list_ptr->val == match) {
			return (list_ptr);
		} else {
			list_ptr = list_ptr->next;
		}
	}

	return ((struct entry *) 0);
}

int main(void)
{
	struct entry num1, num2, num3, num4;
	struct entry *list_pointer, *list_start;
	int search;

	num1.val = 10;
	num1.next = &num2;
	num2.val = 20;
	num2.next = &num3;
	num3.val = 30;
	num3.next = &num4;
	num4.val = 40;
	num4.next = 0;		/* list end with null pointer */

	printf("num1 = %d num2 = %d num3 = %d num4 = %d\n", num1.val, num2.val, num3.val, num4.val);
	printf("returning linked list pointer value from function>\n");
	printf("enter value to locate: ");
	scanf("%d", &search);
	printf(" %d\n", search);

	list_start = &num1;
	list_pointer = find_entry(list_start, search);

	if (list_pointer != ((struct entry *) 0)) {
		printf("found %d\n", list_pointer->val);
	} else {
		printf("not found\n");
	}

	return 0;
}

