/* chapter 13 exercise 03 program to test the macro MIN
 * vasanth 30 january 2018
 */

#include <stdio.h>

#include "libinput.h"

#define MIN2(a, b) 	  ( ((a) < (b)) ? (a) : (b) )
#define MIN3(a, b, c) 	  ( ((MIN2(a, b)) < (c)) ? (MIN2(a, b)) : (c) )

#define MIN3A(a, b, c)	  ( \
				((a) < (b))? \
					(((a) < (c)) ? (a) : (c)) \
				: \
					(((b) < (c)) ? (b) : (c)) \
			  )

#define MIN4(a, b, c, d)  ( ((MIN3(a, b, c)) < (d)) ? (MIN3(a, b, c)) : (d) )

#define MIN4A(a, b, c, d) ( \
				((a) < (b))? \
					((a) < (c))? \
						(((a) < (d)) ? (a) : (d)) \
					: \
						(((c) < (d)) ? (c) : (d)) \
				: \
					((b) < (c))? \
						(((b) < (d)) ? (b) : (d)) \
					: \
						(((c) < (d)) ? (c) : (d)) \
			  )

int main(void)
{
	int a, b, c, d;

	printf("minimum of values>\n");
	a = input_decimal_int("enter val a = ");
	b = input_decimal_int("enter val b = ");
	c = input_decimal_int("enter val c = ");
	d = input_decimal_int("enter val d = ");

	printf("a = %d b = %d\nminimum of two = %d\n", a, b, MIN2(a, b));\
	printf("a = %d b = %d c = %d\nminimum of three = %d\n", a, b, c, MIN3(a, b, c));
	printf("a = %d b = %d c = %d\nanother method minimum of three = %d\n", a, b, c, MIN3A(a, b, c));
	printf("a = %d b = %d c = %d d = %d\nminimum of four = %d\n", a, b, c, d, MIN4(a, b, c, d));
	printf("a = %d b = %d c = %d d = %d\nanother method minimum of four = %d\n", a, b, c, d, MIN4A(a, b, c, d));

	return 0;
}

