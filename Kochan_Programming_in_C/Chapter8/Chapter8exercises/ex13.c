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

int user_choice(void)
{
	int nchoice;

	printf("choice- 1.ascending order\n\t2.descending order : ");
	scanf("%i", &nchoice);

	return nchoice;
}

void user_choice_verify(int vchoice)
{
	if (vchoice == 1) {
		printf("sorted into ascending order\n");
	} else {
		printf("sorted into descending order\n");
	}
}

int main(void)
{
	int values[6] = { 30, 21, 19, 7, 8, 1 };
	int nvalue;
	int choice;
	int n;

	nvalue = 6;
	array_print(values, nvalue);

	choice = user_choice();

	if ( choice == 1 || choice == 2 ) {
		if (choice == 1) {
			array_sort_up(values, nvalue);
			user_choice_verify(choice);
			array_print(values, nvalue);
		} else {
			array_sort_down(values, nvalue);
			user_choice_verify(choice);
			array_print(values, nvalue);
		}
	} else {
		printf("error!!! wrong choice\n");
	}
	return 0;
}
