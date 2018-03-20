/* chapter 11 example 03 using pointers in expression
 * vasanth 20 march 2018
 */

#include <stdio.h>

int main(void)
{
	int a, b, *px, *py;

	a = 5;
	px = &a;
	b = *px / 2 + 10;
	py = px;

	printf("using pointers in expression (eg. b = *px / 2 + 10)>\n");
	printf("a = %d  *px = %d\nb = %d *py = %d\n", a, *px, b, *py);

	return 0;
}

