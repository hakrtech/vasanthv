/* chapter 13 example 02a new version of rotate function
 * vasanth 26 january 2018
 */

#include <stdio.h>

#define KINTSIZE 32	/* machine dependent */

// function to rotate an unsigned int left or right
unsigned int rotate(unsigned int val, int num)
{
	unsigned int result, bits;

	/* scale down the shift count to a define range */
	if (num > 0) {
		num = num % KINTSIZE;
	} else {
		num = -(-num % KINTSIZE);
	}

	if (num == 0) {
		result = val;
	} else if (num > 0) {	/* left rotate */
		bits = val >> (KINTSIZE - num);
		result = val << num | bits;
	} else {		/* right rotate */
		num = -num;
		bits = val << (KINTSIZE - num);
		result = val >> num | bits;
	}

	return result;
}

int main(void)
{
	unsigned int val = 0xabcdef00u;
	unsigned int another_val = 0xffff1122u;

	printf("rotation of integrs>\n");
	printf("val = %x num = %d rotated val = %x\n", val, 8, rotate(val, 8));
	printf("val = %x num = %d rotated val = %x\n", val, -16, rotate(val, -16));
	printf("val = %x num = %d rotated val = %x\n", another_val, 4, rotate(another_val, 4));
	printf("val = %x num = %d rotated val = %x\n", another_val, -2, rotate(another_val, -2));
	printf("val = %x num = %d rotated val = %x\n", val, 0, rotate(val, 0));
	printf("val = %x num = %d rotated val = %x\n", val, 44, rotate(val, 44));

	return 0;
}

