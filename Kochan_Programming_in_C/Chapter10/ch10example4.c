/* Chapter 10 Example 10.4 program to determine if tow strings are equal
 * vasanth [22 septemper 2017]
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool equal(char w1[], char w2[], char w3[]);

	char w1[] = "god is love";
	char w2[] = "love";
	char w3[] =  "god";
	int ok1;
	int ok2;
	int ok3;

	ok1 = equal(w1, w2, w3);

	printf("%i\n", ok1);

	ok2 = equal(w2, w2, w2);
	ok3 = equal(w3, w3, "god" );

	 printf("%i\n",ok2);
	 printf("%i\n", ok3);

	return 0;
}

bool equal(char w1[], char w2[], char w3[])
{
	int i = 0;
	bool check;

	while ((w1[i] == w2[i]) && (w1[i] == w3[i]) && (w2[i] == w3[i]) && (w1[i] != '\0') && (w2[i] != '\0') && (w3[i] != '\0'))
	 {
		++i;
	}

	if ((w1[i] != '\0') && (w2[i] != '\0') && (w3[i] != '\0'))
	{
		check = false;
	}
	 else
	{
		check = true;
	}

	return check;
}

