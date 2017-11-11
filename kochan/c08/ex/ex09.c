/* Chapter 08 Exercise 09 Program to find Least Common Multiple(LCM) of two postive number.
 * the LCM(u,v) = uv / GCD(u,v) and  u,v >=0.
 * Vasanth 04 October 2017
 */

#include <stdio.h>
#include <stdlib.h>

#include "libinteger.h"

int main(void)
{
	int u;
	int v;
	int result;
	int gcd_val;
	
	printf("enter two positive num and get least common multiple[LCM]>\n");
	scanf("%d", &u);
	printf("first num %d\n", u);
	scanf("%d", &v);
	printf("second num %d\n", v);
	
	if (u < 1) {
		printf("sorry! lcm use positive num only\n");
		exit(1);
	}
	if (v < 1) {
		printf("sorry! lcm use positive num only\n");
		exit(1);
	}

	gcd_val = numi_gcd3(u, v);
	result =  (u * v) / gcd_val;
	printf("gcd %d lcm %d\n", gcd_val, result);

	return 0;
}

