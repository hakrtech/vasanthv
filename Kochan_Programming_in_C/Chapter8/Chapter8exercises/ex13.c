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

	printf("array[%i] = ", n);
	int i;

	for (i = 0; i < n; ++i) {
		printf("%i   ", a[i]);
	}

	printf("\n");
}

int main(void)
{
	int sortvalue[6] = { 30, 21, 19, 7, 8, 1 };
	int i;
	int choice;

	array_print(sortvalue, 6);

	printf("\nChoice- 1.Ascending Order:\n\t2.Decending Order: ");
	scanf("%i", &choice);

	if (choice == 1) {
		array_sort_up(sortvalue, 6);
		printf("\nsorted into Acending order:\n");
		array_print(sortvalue, 6);

	} else if(choice == 2) {
		array_sort_down(sortvalue, 6);
		printf("\nsorted into Decending order:\n");
		array_print(sortvalue, 6);

	}else {
		printf("Sorry!!! Wrong Choice\n");
	}

	return 0;
}

