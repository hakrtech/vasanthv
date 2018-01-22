/* chapter 13 example 01 introducing #dfine statement
 * vasanth 22 january 2018
 */

#include <stdio.h>

#define YES 1
#define NO 0

int iseven(int num)
{
	int ans;

	if (num % 2 == 0)
		ans = YES;
	else
		ans = NO;

	return ans;
}

int main(void)
{
	if (iseven(17) == YES)
		printf("17 even: yes\n");
	else
		printf("17 even: no\n");

	if (iseven(20) == YES)
		printf("20 even: yes\n");
	else
		printf("20 even: no\n");

	return 0;
}

