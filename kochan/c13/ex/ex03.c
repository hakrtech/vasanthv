/* chapter 13 exercise 03 program to test the macro MIN
 * vasanth 30 january 2018
 */

#include <stdio.h>

#define MIN2(a, b)	( \
				(a < b)? \
					a \
				: \
					b \
		   	)

#define MIN3(a, b, c) 	( \
				(MIN2(a, b) < c)? \
					MIN2(a, b) \
				: \
					c \
			)

#define MIN3A(a, b, c)	( \
				(a < b)? \
					(a < c)? \
						a \
					: \
						c \
				: \
					(b < c)? \
						b \
					: \
						c \
			)

#define MIN4(a, b, c, d) ( \
				(MIN3(a, b, c) < d)? \
					MIN3(a, b, c) \
				: \
					d \
			 )

int main(void)
{
	int a, b, c, d;

	printf("minimum of values>\n");
	printf("enter val a = ");
	scanf("%d", &a);
	printf("enter val b = ");
	scanf("%d", &b);
	printf("enter val c = ");
	scanf("%d", &c);
	printf("enter val d = ");
	scanf("%d", &d);

	printf("a = %d b = %d\nminimum of two = %d\n", a, b, MIN2(a, b));\
	printf("a = %d b = %d c = %d\nminimum of three = %d\n", a, b, c, MIN3(a, b, c));
	printf("a = %d b = %d c = %d\nanother method minimum of three = %d\n", a, b, c, MIN3A(a, b, c));
	printf("a = %d b = %d c = %d d = %d\nminimum of four = %d\n", a, b, c, d, MIN4(a, b, c, d));

	return 0;
}

