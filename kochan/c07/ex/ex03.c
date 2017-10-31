/* Chapter 07 Exercise 03 Program to count the number of responses in the list
 * Vasanth 30 October 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int counts[10];
	int i;
	int num_response = 1;
	int response;

	printf("how many number of responses you want? (use 999 to exit)>\n");

	for (i = 1; i <= 10; ++i) {
		counts[i] = 0;
	}

	while (num_response != 0) {
		printf("enter 999 to exit or continue any number>\n");
		scanf("%i", &num_response);
		printf("entered number of response is %i\n", num_response);

		if (num_response <= 0) {
			printf("invalied number!!!\n");
			exit(1);
		} else if (num_response == 999) {
			printf("you are entered exit value %i\n", num_response);
			break;
		} else {
			printf("enter your responses (between 1 and 10)>\n");
			
			for (i = 1; i <= num_response; i++) {
				scanf("%i", &response);
				printf("entered response is %i\n", response);

				if (response >= 1 && response <= 10) {
					++counts[response];
				} else if (response == 999) {
					printf("entered last response is %i\n", response);
					break;
				} else {
					printf("bad!!! response %i\n", response);
				}
			}
		}
	}

	printf("\n\n");
	printf("rating		number of response\n");

	for (i = 1; i <= 10; ++i) {
		printf("%i		%i\n", i, counts[i]);
	}

	return 0;
}
