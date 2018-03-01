/* chapter 10 exercise 10 program to sort a dictionary into alphabetic order
 * vasanth 01 march 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

struct dic
{
	char word[20];
	char def[100];
};

bool string_compare(char a[], char b[])
{
	int i = 0;
	bool is_compared = false;

	while ((a[i] == b[i]) && (a[i] != '\0')) {
		++i;
	}

	if (a[i] <= b[i]) {
		is_compared = true;
	}

	return is_compared;
}

bool dic_order(struct dic note[], int len, int j)
{
	int i = 0;
	bool is_compared = false, is_ordered = false;

	while (i < len - 1) {
		is_compared = string_compare(note[j].word, note[i+1].word);
		if (is_compared) {
			printf("yes [ %s ] pos %d\n", note[j].word, i);
			is_ordered = true;
		} else {
			printf("change order i %d j %d\n", i, j);
			is_ordered = false;
		}
		++i;
	}

	return is_ordered;
}

void dic_sort(struct dic note[], int len)
{
	int j = 0;
	bool is_ordered = false;

	is_ordered = dic_order(note, len, j);
	if (is_ordered) {
		printf("ok\n");
		++j;
	} else {
		printf("chk\n");
		// do something
	}
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
/*
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
	} while (i < 3);

	return i;
}
*/
int main(void)
{
	struct dic note[100] = { {"anbu", "vasanth bro"},
				 {"aout", "program output, out"},
				 {"cat", "animal, living in home"},
				 {"doc", "animal, living in home and kill cat"}
				};
	int len = 4;

	printf("sort dictionary into alphabetic order>\n");
	printf("develop own dictionary:\n");
	//len = dic_entry(note);
	//dic_print(note, len);
	dic_print(note, len);
	dic_sort(note, len);

	return 0;
}

