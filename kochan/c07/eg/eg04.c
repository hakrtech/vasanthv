/* Chapter 07 Example 04 Program to generate prime numbers using array
 * Vasanth 28 October 2017
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int i;
	int val[1000];
	int index;

	printf("print first 1000 prime numbers> \n");
	
	val[0] = 2;
	val[1] = 3;
	index = 2;

 	for (i = 5; i <= 1000; i = i+2) {
		bool is_prime;
 		int j;
 		int division;

		is_prime = true;
		j = 1;
		division = i / val[j];
		
		while (is_prime && division >= val[j]) {
			if (i % val[j] == 0) {
				is_prime = false;
				break;
			}
			++j;
		}

		if (is_prime == true) {
			val[index] = i;
			++index;
		}
	}

	for (i = 0; i < index; ++i) {
		printf("%i	", val[i]);
	}
	printf("\n");

	return 0;
}