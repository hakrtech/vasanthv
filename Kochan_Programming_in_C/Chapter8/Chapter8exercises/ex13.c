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

int user_choice_input(void)
{
	int input;

	printf("choice- 0. print array\n\t1. sort\n\t2. reverse sort : ");
	scanf("%i", &input);
	return input;
}

int user_choice_verify(int vchoice)
{
	if (vchoice < 0 || vchoice > 2) {
		printf("error!!! wrong choice\n");
		exit (1);
 	} else {
		int vnum ;

		if (vchoice == 1 || vchoice == 2) {
			vnum = vchoice;
		} else {
			vnum = vchoice;
		}
		return vnum;
	}
}

void user_choice_print(int pvalues[6], int pnvalue, int pchoice)
{
	switch (pchoice) {
		case 0:
			printf("printed array\n");
			array_print(pvalues, pnvalue);
			exit (1);
		case 1:
			array_sort_up(pvalues, pnvalue);
			printf("sorted order\n");
			array_print(pvalues, pnvalue);
			exit (1);
		case 2:
			array_sort_down(pvalues, pnvalue);
			printf("sorted reverse order\n");
			array_print(pvalues, pnvalue);
			exit (1);
		default:
			printf("check program\n");
	}

}

int main(void)
{
	int values[6] = { 30, -21, 19, 7, 8, 1 };
	int nvalue;
	int input;
	int print;

	nvalue = 6;
	input = user_choice_input();
	print = user_choice_verify(input);
	user_choice_print(values, nvalue, print);

	return 0;
}
