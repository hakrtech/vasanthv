/* Chapter 07 Exercise 03 Program to array the number of responses in the list
 * Vasanth 30 October 2017
 */

#include <stdio.h>
#include <stdbool.h>
#include "level.h"

#define INIT_VALUE (-1)

int main(void)
{
	int logic[LIMIT];
	int input;
	int i;
	
	printf("enter number and count number of responses? (use -1 to exit)>\n");

	for (i = 0; i < LIMIT; ++i) {
		logic[i] = INIT_VALUE;
	}

#ifdef DEBUG	
	for (i = 0; i < LIMIT; ++i) {
		printf("%d ", logic[i]);
	}
	printf("\n");
#endif
	while(true) {
		scanf("%d", &input);
		printf(" %d\n", input);
		
		if (input == -1) {
			printf("input over!!!\n");
			break;
		}
		if (input < 0) {
			printf("bad input %d\n", input);
		}
		if (input > LIMIT) {
			printf("bad input %d\n", input);
		} else {
			logic[input] += 1;
		}
	}

	printf("number	count of response\n");

	for (i = 0; i < LIMIT; ++i) {
		printf("%d	%d\n", i, logic[i]+1);
	}

	return 0;
}

