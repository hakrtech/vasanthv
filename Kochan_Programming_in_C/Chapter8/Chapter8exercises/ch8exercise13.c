/* Chapter 8 Exercise 13 Program to sorting into ascending order or decending order
 * Vasanth 05 October 2017
 */

#include <stdio.h>

int main(void)
{
	int sortvalue[16] = { 34, 37, -9, 0, 24, 6, 49, -32, 34, 32, 89, 30, 5, 8, -3, -4 };
	int i;
	int asds;

	void ascendingsort(int a[], int n);
	void decendingsort(int b[], int p);

	printf("The array befor the sort:\n");

	for(i = 0; i < 16; ++i)
	{
		printf("%i   ", sortvalue[i]);
	}

	printf("\nPlease Enter anyone number- Sort on Ascending Order[1]:\n Sort on Decending Order[2]: ");
	scanf("%i", &asds);

	if(asds == 1)
	{
		ascendingsort(sortvalue, 16);
		printf("\n\nThe array value sorted into Acending order:\n");

		for(i = 0; i < 16; ++i)
		{
			printf("%i   ", sortvalue[i]);
		}

		printf("\n");
	}
	else if(asds == 2)
	{
		decendingsort(sortvalue, 16);
		printf("\n\nThe array value sorted into Decending order:\n");

		for(i = 0; i < 16; ++i)
		{
			printf("%i   ", sortvalue[i]);
		}

		printf("\n");
	}
	else
	{
		printf("Sorry!!! Worng Selection:\n");
	}

	return 0;
}

void ascendingsort(int a[], int n)
{
	int i;
	int j;
	int temp;

	for(i = 0; i < n-1; ++i)
	{
		for(j = (i + 1); j < n; ++j)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

}

void decendingsort(int b[], int p)
{
	int x;
	int y;
	int z;

	for(x = 0; x < p-1; ++x)
	{
		for(y = ( x + 1 ); y < p; ++y)
		{
			if (b[x] < b[y])
			{
				z = b[x];
				b[x] = b[y];
				b[y] = z;
			}
		}
	}
}
