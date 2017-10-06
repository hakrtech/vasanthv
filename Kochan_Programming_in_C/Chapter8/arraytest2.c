#include <stdio.h>

int check(int arrayval[12], int valid)
{
	int i;

	i = 0;

	while ( i < 12 )
	{
		if (valid == arrayval[i]) {
			return valid;
		} else {
			if( valid == arrayval[12]) {
				printf("Number %i found in last location of array\n", valid);
			} else {
				++i;
			}
		}
	}
}

int main(void)
{
	int arraynum[12] = { 8, 9, 3, 5, 7, 4, 6, 10, 12, 15, 2, 11};
	int found;
	int num;

	printf("Enter the number to check found or not in array: ");
	scanf("%i", &num);

	found = check(arraynum, num);

	if (found) {
		printf("YES!!! number %i are found in the array %i\n", num, found);
	} else {
		printf("NO!!! number %i are not found in the array\n", num);
	}

	return 0;
}
