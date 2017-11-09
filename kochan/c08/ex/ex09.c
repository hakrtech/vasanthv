/* Chapter 8 Exercise 9 Program to find Least Common Multiple(LCM) of two postive number. The LCM(u,v) = uv / GCD(u,v) and  u,v >=0.
 * Vasanth 04 October 2017
 */

#include <stdio.h>

int main(void)
{
	int gcd(int u, int v);

	int u;
	int v;
	int result;
	int gcd1;

	printf("Welcome!!! to Least Common Multiple[LCM] of any two numbers:\n");
	printf("Enter U value:  ");
	scanf("%i", &u);
	printf("Enter V value:  ");
	scanf("%i", &v);

	if(u >= 0 || v >= 0)
	{
		gcd1 = gcd(u, v);
		result =  (u * v) / gcd1;
	}

	printf("\nThe Greatest Common Divisor[GCD] of U and V:  %i and The Least Common Multiple[LCM] of U and V:  %i\n\n", gcd1, result);

	return 0;
}

int gcd(int u, int v) // LIBIT
{
	int temp;

	while( v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

