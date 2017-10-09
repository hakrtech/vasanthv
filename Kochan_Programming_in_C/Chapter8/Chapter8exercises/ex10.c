/* Chapter 10 Exercise 10 Program to check Prime number and using Prime function
 * Vasanth 04 October 2017
 */

#include <stdio.h>

int main(void)
{

	int prime(int x);

	int num;
	int sol;

	printf("Do You wand Check the Number Prime or Not? Please Enter any number: ");
	scanf("%i", &num);

	sol = prime(num);

	if( sol == 1)
	{
		printf("Return: %i YES!!! It is Prime Number\n", sol);
	}
	else
	{
		printf("Return: %i NO!!! It is Not Prime Number\n", sol);
	}

}

int prime(int x)
{
	int d;
	_Bool isPrime;

	isPrime = 1;

	for(d = 2; d < x; ++d)
	{
		if(x % d == 0)
		{
			isPrime = 0;
		}
	}

	if(isPrime != 0)
	{
		return 1;
	}
}
