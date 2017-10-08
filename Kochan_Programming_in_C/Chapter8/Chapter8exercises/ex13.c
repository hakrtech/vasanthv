/* Chapter 8 Exercise 13 Program to sorting into ascending order or decending order
 * Vasanth 08 October 2017
 */

#include <stdio.h>

void array_sort_up(int a[], int n)
{
	int i;

	for (i = 0; i < n-1; ++i) {
		int j;

		for (j = i+1; j < n; ++j) {
			if (a[i] > a[j]) {
				int temp;

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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
				int temp;

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void array_print(int a[], int n)
{

	printf("array[%i] = ", n);
	int i;

	for (i = 0; i < n; ++i) {
		printf("%i   ", a[i]);
	}

}

int main(void)
{
	int sortvalue[6] = { 30, 21, 19, 7, 8, 1 };
	int i;
	int asds;

	array_print(sortvalue, 6);

	printf("\nPlease Enter anyone number- Sort on Ascending Order[1]:\n\t\t\t    Sort on Decending Order[2]: ");
	scanf("%i", &asds);

	if (asds == 1) {
		array_sort_up(sortvalue, 6);
		printf("\n\nThe array value sorted into Acending order:\n");

		for (i = 0; i < 6; ++i) {
			printf("%i   ", sortvalue[i]);
		}

		printf("\n");

	} else if(asds == 2) {
		array_sort_down(sortvalue, 6);
		printf("\n\nThe array value sorted into Decending order:\n");

		for (i = 0; i < 6; ++i) {
			printf("%i   ", sortvalue[i]);
		}

		printf("\n");
	}
	else {
		printf("Sorry!!! Wrong Selection:\n");
	}

	return 0;
}

