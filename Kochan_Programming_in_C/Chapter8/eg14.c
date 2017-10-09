/* Chapter 8 Example 14 Program to convert a positive integer to another base
 * Vasanth 03 October 2017
 */

#include <stdio.h>

int convertedNumber[64];
long int numbertoConvert;
int base;
int digit = 0;

int main(void)
{
	void getNumberandBase(void);
	void convertNumber(void);
	void displayConvertedNumber(void);

	getNumberandBase();
	convertNumber();
	displayConvertedNumber();

	return 0;
}

void displayConvertedNumber(void)
{
	char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int nextDigit;

	printf("Converted nuber = ");

	for(--digit; digit >= 0; --digit)
	{
		nextDigit = convertedNumber[digit];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");
}

void getNumberandBase(void)
{
	printf("Number to be Converted?   ");
	scanf("%li", &numbertoConvert);

	printf("Base?   ");
	scanf("%i", &base);

	if((base < 2) || (base > 16))
	{
		printf("Bad base - must be between 2 and 16\n");
		base = 10;
	}

}

void convertNumber(void)
{
	do
	{
		convertedNumber[digit] = numbertoConvert % base;
		++digit;
		numbertoConvert /= base;
	}
	while(numbertoConvert != 0);
}
