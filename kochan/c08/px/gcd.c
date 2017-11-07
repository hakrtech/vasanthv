/* program to find greatest common divisor
 * vasanth 07 november 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int s;

	s = scanf("%d%d", &a, &b);
	if (s != 2){
		printf("scanf error %d\n", s);
		exit(1);
	}
	printf("a %d b %d gcd>\n", a, b);

	while (a > 0 && b > 0) {
		int c;
		
		if (a == b) {
			printf("gcd %d\n", a);
			exit(1);
		}
		if (a < b) {
			c = b;
			b = a;
			a = c;
		}
		
		c = a - b;
		printf("cmd %d %d %d\n", a, b, c);
		
		if (b <= c) {
			a = c;
		}
		if (b >= c) {
			a = b;
			b = c;
		}
	}
	
	return 0;
}

