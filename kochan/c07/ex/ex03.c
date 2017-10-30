/* Chapter 07 Exercise 03 Program to count the number of responses in the list
 * Vasanth 30 October 2017
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int counts[10];
	int i;
	int num_response;
	int response;

	printf("enter how many number of responses you want (between 1 and 999)?>  ");
	scanf("%i", &num_response);
	printf("entered number of response is %i\n", num_response);

	if (num_response < 1 || num_response > 999) {
		printf("you are entered invalid number of response: %i\n", num_response);
		exit(1);
	} else if (num_response == 999) {
		printf("you are entered last number of response: %i\n", num_response);
		exit(2);
	}
	
	for (i = 1; i <= 10; ++i) {
		counts[i] = 0;
	}

	printf("enter your responses (between 1 and 10)>\n");

	for (i = 1; i <= num_response; ++i) {
		scanf("%i", &response);
		printf("entered response is %i\n", response);

		if (response < 1 || response > 10) {
			printf("bad response: %i\n", response);
			break;
		} else {
			++counts[response];
		}
	}

	printf("\n\n");
	printf("rating		number of response\n");

	for (i = 1; i <= 10; ++i) {
		printf("%i		%i\n", i, counts[i]);
	}

	return 0;
}
