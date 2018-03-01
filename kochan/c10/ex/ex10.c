/* chapter 10 exercise 10 program to sort a dictionary into alphabetic order
 * vasanth 01 march 2018
 */

#include <stdio.h>
#include <assert.h>

struct dic
{
	char word[20];
	char def[100];
};

void dic_sort(struct dic note[])
{
	// something
}

void dic_print(struct dic note[], int len)
{
	int i = 0;

	assert(len > 0);
	printf("own dictionary>\n word\t\tdefinition\n");

	while (i <= len-1) {
		printf("[ %s ]      [ %s ]\n", note[i].word, note[i].def);
		++i;
	}
}

void read_line(struct dic d[], int pos)
{
	char c;
	int i = 0;

	do {
		c = getchar();
		d[pos].def[i] = c;
		++i;
	} while (c != '\n');

	assert(c == '\n');
	d[pos].def[i-1] = '\0';
}

int dic_entry(struct dic note[])
{
	int i = 0;

	printf("enter ten dictionary index words\n");

	do {
		printf("word and definition:\n ");

		scanf("%s\n", note[i].word);
		printf(" [ %s ]\n", note[i].word);
		read_line(note, i);
		printf(" [ %s ]\n", note[i].def);

		++i;
	} while (i < 10);

	return i;
}

int main(void)
{
	struct dic note[100];
	int len;

	printf("sort dictionary into alphabetic order>\n");
	printf("develop own dictionary:\n");
	len = dic_entry(note);
	dic_print(note, len);

	return 0;
}

