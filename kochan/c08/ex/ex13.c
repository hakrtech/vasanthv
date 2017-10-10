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
	int input_num;
	printf("choice- 0. print array\n\t1. sort\n\t2. reverse sort : ");
	scanf("%i", &input_num);
	return input_num;
}

int user_choice_validate(int vchoice)
{
	if (vchoice < 0 || vchoice > 2) {
		printf("error!!! choice again\n");
 	}
		return vchoice;
}

int user_choice_invalid(int repeat)
{
	if (repeat < 0 || repeat > 2) {
		user_choice_validate(repeat);
		while (repeat <= 2) {
			int again;

			again = user_choice_input();
			repeat = again;
		}
	}
	return repeat;
}

int user_choice_print(int pchoice)
{
	switch (pchoice) {
	case 0:
		printf("printed array\n");
		break;
	case 1:
		printf("sorted order\n");
		break;
	case 2:
		printf("sorted reverse order\n");
		break;
	default:
		printf("check program\n");
	}
	return pchoice;
}

void user_choice_do_operation(int do_values[], int do_nvalue, int do_case)
{
	if (do_case == 1 || do_case == 2) {
		if (do_case == 1) {
			array_sort_up(do_values, do_nvalue);
			array_print(do_values, do_nvalue);
		} else {
			array_sort_down(do_values, do_nvalue);
			array_print(do_values, do_nvalue);
		}
	} else {
		array_print(do_values, do_nvalue);
	}
}

int main(void)
{
	int values[6] = { 30, -21, 19, 7, 8, 1 };
	int nvalue;
	int input;
	int print;
	int doit;

	nvalue = 6;
	input = user_choice_input();
	user_choice_invalid(input);
	print = user_choice_validate(input);
	doit = user_choice_print(print);
	user_choice_do_operation(values, nvalue, doit);

	return 0;
}
