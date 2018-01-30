/* chapter 13 exercise 03 program to test the macro MIN
 * vasanth 30 january 2018
 */

#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MIN_THREE(a, b, c) (((MIN(a, b)) < (c)) ? (MIN(a, b)) : (c))
#define MIN_FOUR(a, b, c, d) ((MIN_THREE(a, b, c) < (d)) ? (MIN_THREE(a, b, c)) : (d))

int main(void)
{
	int a, b, c, d;

	printf("minimum of two values>\n");
	printf("enter val a = ");
	scanf("%d", &a);
	printf("enter val b = ");
	scanf("%d", &b);
	printf("enter val c = ");
	scanf("%d", &c);
	printf("enter val d = ");
	scanf("%d", &d);

	printf("a = %d b = %d\nminimum = %d\n", a, b, MIN(a, b));
	printf("a = %d b = %d c = %d\nminimum = %d\n", a, b, c, MIN_THREE(a, b, c));
	printf("a = %d b = %d c = %d d = %d\nminimum = %d\n", a, b, c, d, MIN_FOUR(a, b, c, d));

	return 0;
}

