/* chapter 13 exercise 03 program to test the macro MIN
 * vasanth 30 january 2018
 */

#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void)
{
	int a, b;

	printf("minimum of two values>\n");
	printf("enter val a = ");
	scanf("%d", &a);
	printf("enter val b = ");
	scanf("%d", &b);
	printf("a = %d b = %d\nminimum = %d\n", a, b, MIN(a, b));

	return 0;
}

