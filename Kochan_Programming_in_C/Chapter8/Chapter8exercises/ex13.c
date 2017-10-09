/* Chapter 8 Exercise 13 Program to sorting into ascending order or decending order
 * Vasanth 09 October 2017
 */

#include <stdio.h>
#include <stdlib.h>

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

	printf("choice- 0. print array\n\t1. sort\n\t2. reverse sort : ");
	scanf("%i", &nchoice);

	return nchoice;
}

int user_choice_verify(void)
{
	int vchoice;
	int vnum;
	vchoice = user_choice();

	if (vchoice == 0) {
		vnum = vchoice;
	} else if (vchoice == 1 || vchoice == 2) {
		vnum = vchoice;
 	} else {
		printf("error!!! wrong choice\n");
		exit (1);
	}
	return vnum;
}

int user_choice_print(void)
{
	int pchoice;
	pchoice = user_choice_verify();

	if (pchoice == 1) {
		printf("sorted order\n");
	} else if (pchoice == 2) {
		printf("sorted reverse order\n");
	} else {
		printf("printed array\n");
	}
	return pchoice;
}

int main(void)
{
	int values[6] = { 30, 21, 19, 7, 8, 1 };
	int nvalue;
	int choice;

	nvalue = 6;

	choice = user_choice_print();

	if (choice == 0) {
		array_print(values, nvalue);
	}else if (choice == 1) {
		array_sort_up(values, nvalue);
		array_print(values, nvalue);
	} else {
		array_sort_down(values, nvalue);
		array_print(values, nvalue);
	}

	return 0;
}
