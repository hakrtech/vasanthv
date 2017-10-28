/* Chapter 07 Example 02 Demonstrating an array of counters
* Vasanth 28 October 2017
*/

#include <stdio.h>

int main(void)
{
	int rate_count[11];
	int i;
	int respon;

	for (i = 1; i <= 10; ++i) {
		rate_count[i] = 0;
	}

	printf("enter your response>\n");

	for (i = 1; i <= 20; ++i) {
		scanf("%i", &respon);
		printf("entered response is %i\n", respon);

		if (respon < 1 || respon > 10) {
			printf("bad response: %i\n", respon);
		} else {
			++rate_count[respon];
		}
	}

	printf("\n\n");
	printf("rating		number of responses\n");

	for (i = 1; i <= 10; ++i) {
		printf("%i		%i\n", i, rate_count[i]);
	}

	return 0;
}
