
#include <stdio.h>

#include "eg0mod.h"

int main(void)
{
	char *word = "larger mprograms";
	print(word);

	int sqr;

	sqr = foo(5);
	printf("sqr(5) = %d\n", sqr);

	return 0;
}

