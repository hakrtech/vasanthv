/* Chapter 8 Exercise 13 Program to sorting into ascending order or decending order
 * Vasanth 08 October 2017
 */

#include <stdio.h>

void array_swap_element(int a[], int i, int j)
{
	int temp;

	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void array_sort_up(int a[], int n)
{
	int i;

	for (i = 0; i < n-1; ++i) {
		int j;

		for (j = i+1; j < n; ++j) {
			if (a[i] > a[j]) {
				array_swap_element(a, i, j);
			}
		}
	}
}

void array_sort_down(int a[], int n)
{
	int i;

	for (i = 0; i < n-1; ++i) {
		int j;

		for (j = i+1; j < n; ++j) {
			if (a[i] < a[j]) {
				array_swap_element(a, i, j);
			}
		}
	}
}

void array_print(int a[], int n)
{
	int i;
	printf("array[%i] = { ", n);

	for (i = 0; i < n; ++i) {
		printf("%i, ", a[i]);
	}
	printf("}\n");
}

int main(void)
{
	int value[6] = { 30, 21, 19, 7, 8, 1 };
	int i;
	int choice;
	int element;

	element = 6;
	array_print(value, element);
	printf("choice- 1.ascending order\n\t2.descending order : ");
	scanf("%i", &choice);

	if (choice == 1) {
		array_sort_up(value, element);
		printf("sorted into ascending order\n");
		array_print(value, element);

	} else if (choice == 2) {
		array_sort_down(value, element);
		printf("sorted into descending order\n");
		array_print(value, element);

	}else {
		printf("sorry!!! wrong choice\n");
	}

	return 0;
}
