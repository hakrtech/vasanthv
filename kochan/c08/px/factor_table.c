/* program for factor table
 * vasanth 07 november 2017
 */

#include <stdio.h>
#include <stdlib.h>
//#include <assert.h>

#include "libarray.h"
#include "koodai.h"

void factor(int n, int koodai[], int kcap, int *pknitems)
{	
	int divisor;
	int knitems = *pknitems;
	printf("f1 koodai no of items %d\n", knitems);

	knitems = koodai_initialise(koodai, kcap);
	printf("f2 koodai no of items %d\n", knitems);

	divisor = n;
	while (divisor > 0) {
		int remainder;

		remainder = n % divisor;
		if (remainder == 0) {
			knitems = koodai_add_item(koodai, kcap, knitems, divisor);
			printf("f3 koodai no of items %d\n", knitems);
		}
		--divisor;
	}
	printf("f4 koodai no of items %d\n", knitems);
	koodai_print(koodai, kcap, knitems);
	printf("f5 koodai no of items %d\n", knitems);

	*pknitems = knitems;
}

int main(void)
{
	int num;
	int kcap = 100;
	int koodai[kcap];
	int knitems = -1;
	int d;

	d = scanf("%d",&num);
	if (d != 1) {
		printf("scanf error %d\n", d);
		exit(1);
	}
	printf("num %d factor> ", num);

	printf("m1 koodai no of items %d\n", knitems);
	factor(num, koodai, kcap, &knitems);
	printf("m2 koodai no of items %d\n", knitems);

	koodai_print(koodai, kcap, knitems);

	//assert(num > 0);
	
	return 0;
}

