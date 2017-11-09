/* Chapter 08 Exercise 07 Program to calculate x^n and get postive result
 * Vasanth 03 October 2017
 */
 #include <stdio.h>

int main(void)
{
	int powernum(long int x, int n);

	long int num;
	int pow;
	long int result;

	printf("Enter Number of X:  ");
	scanf("%li", &num);
	printf("\nPower of n:  ");
	scanf("%i", &pow);

	result = powernum(num, pow);

	printf("\nThe X power n(X^n) result:  %li\n", result);

	return 0;
}

int powernum(long int x, int n) // LIBIT
{
	int i;
	int xnum = 1;

	if(n < 0) {
		n = -n;
	}

	for(i = 0; i < n; i++) {
		xnum *= x;
	}

	return xnum;
}

