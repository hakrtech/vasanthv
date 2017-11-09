/* program to find greatest common divisor
 * vasanth 07 november 2017
 */

#include <stdio.h>
#include <stdlib.h>

void gcd(int a, int b)
{
	while (a > 0 && b > 0) {
		int c;
		
		if (a < b) {
			c = b;
			b = a;
			a = c;
		}
		
		c = a - b;
#ifdef DEBUG
		printf("cmp %d %d %d\n", a, b, c);
#endif
		
		if (b <= c) {
			a = c;
		}
		if (b >= c) {
			a = b;
			b = c;
		}
		if (a == b) {
			printf("gcd %d\n", a);
			exit(1);
		}
	}
}

int main(void)
{
	int x;
	int y;
	int d;

	d = scanf("%d%d", &x, &y);
	if (d != 2){
		printf("scanf error %d\n", d);
		exit(1);
	}
	printf("x %d y %d gcd>\n", x, y);
	
	if (x == y) {
		printf("gcd %d\n", x);
		exit(1);
	}
	gcd(x, y);
	
	return 0;
}

