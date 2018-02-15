/* chapter 13 exercise 04 program to test macro MAX
 * vasanth 14 february 2018
 */

#include <stdio.h>

#include "libinput.h"

#define MAX2(a, b)	  ( ((a) > (b)) ? (a) : (b) )
#define MAX3(a, b, c)	  ( ((MAX2(a, b)) > (c)) ? (MAX2(a, b)) : (c) )

#define MAX3A(a, b, c)	  ( \
				((a) > (b))? \
					(((a) > (c)) ? (a) : (c)) \
				: \
					(((b) > (c)) ? (b) : (c)) \
			  )

#define MAX4(a, b, c, d)  ( ((MAX3(a, b, c)) > (d)) ? (MAX3(a, b, c)) : (d) )

#define MAX4A(a, b, c, d) ( \
				((a) > (b))? \
					((a) > (c))? \
						(((a) > (d)) ? (a) : (d)) \
					: \
						(((c) > (d)) ? (c) : (d)) \
				: \
					((b) > (c))? \
						(((b) > (d)) ? (b) : (d)) \
					: \
						(((c) > (d)) ? (c) : (d)) \
			  )

int main(void)
{
	int a, b, c, d;

	printf("maximum of values>\n");
	a = input_decimal_int("enter val a = ");
	b = input_decimal_int("enter val b = ");
	c = input_decimal_int("enter val c = ");
	d = input_decimal_int("enter val d = ");

	printf("a = %d b = %d maximum of two %d\n", a, b, MAX2(a, b));
	printf("a = %d b = %d c = %d maximum of three %d\n", a, b, c, MAX3(a, b, c));
	printf("a = %d b = %d c = %d another method maximum of three %d\n", a, b, c, MAX3A(a, b, c));
	printf("a = %d b = %d c = %d d = %d maximum of four %d\n", a, b, c, d, MAX4(a, b, c, d));
	printf("a = %d b = %d c = %d d = %d another method maximum of four %d\n", a, b, c, d, MAX4A(a, b, c, d));

	return 0;
}

