/* Chapter 8 Exercise 13 Program to sorting into ascending order or decending order
 * Vasanth 09 October 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "libarray.h"


int user_choice_input(void)
{
	int input_num;
	int d;

	printf("choice- 0. print array\n\t1. sort\n\t2. reverse sort\n\t3. exit: ");
	d = scanf("%i", &input_num);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}

	return input_num;
}

void user_choice_invalid(int repeat)
{
	if (repeat < 0 || repeat > 3) {
		printf("error!!! choice again\n");
 	}
}

int user_choice_validate(int vchoice)
{
	while (vchoice < 0 || vchoice > 3) {
		vchoice = user_choice_input();
		user_choice_invalid(vchoice);
	}

	return vchoice;
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
	case 3:
		printf("exit\n");
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
			ari_sortup(do_values, do_nvalue);
			ari_print(do_values, do_nvalue, "do_values");
		} else {
			ari_sortdown(do_values, do_nvalue);
			ari_print(do_values, do_nvalue, "do_values");
		}
	} else {
		if (do_case == 0)
			ari_print(do_values, do_nvalue, "do_values");
		else
			exit(1);
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
	while (true) {
		input = user_choice_input();
		user_choice_invalid(input);
		print = user_choice_validate(input);
		doit = user_choice_print(print);
		user_choice_do_operation(values, nvalue, doit);
	}

	return 0;
}

