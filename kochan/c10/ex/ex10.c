/* chapter 10 exercise 10 program to sort a dictionary into alphabetic order
 * vasanth 01 march 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "libarray.h"

struct dic
{
	char word[20];
	char def[100];
};

int string_length(char s[])
{
	int i = 0;

	while (s[i] != '\0') {
		++i;
	}
	assert(s[i] == '\0');

	return i;
}

bool string_copy(char s[], char sc[], int n)
{
	int len, i;
	bool is_copied = false;

	len = string_length(s);
	assert(n >= len);
	arc_setall(sc, n, '-');
	arc_print(sc, n, "c");

	// loop s[ 0 ... !'\0'] to copy sc [ 0 .. n-1 ]
	i = 0;
	while (s[i] != '\0') {
	
		assert((0 <= i) && (i < n));
		sc[i] = s[i];
		++i;
	}
	assert(s[i] == '\0');
	sc[i] = '\0';
	is_copied = true;
	arc_print(sc, n, "c");

	return true;
}

bool string_swap(char a[], char b[])
{
	int a_len, b_len;
	char c[201];
	int n  = 200;
	bool is_copied = false, is_swaped = false;

	is_copied = string_copy(a, c, n);
	if (is_copied) {
		b_len = string_length(b);
		is_copied = string_copy(b, a, b_len);
		if (is_copied) {
			is_copied = string_copy(c, b, n);
			is_swaped = true;
		} else {
			printf("chk2 string copy\n");
		}
	} else {
		printf("chk1 string copy\n");
	}

	a_len = string_length(a);
	arc_print(a, a_len, "a");
	b_len = string_length(b);
	arc_print(b, b_len, "b");

	return is_swaped;
}

bool dic_swap(struct dic note[], int pos)
{
	bool is_swaped = false, is_dic_swaped = false;

	assert(pos >= 0);

	is_swaped = string_swap(note[pos].word, note[pos+1].word);
	if (is_swaped) {
		is_swaped = string_swap(note[pos].def, note[pos+1].def);
		if (is_swaped) {
			is_dic_swaped = true;
		} else {
			printf("chk dic swap def\n");
		}
	} else {
		printf("chk dic swap word\n");
	}

	return is_dic_swaped;
}

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
			break;
		}
		++i;
	}

	return is_ordered;
}

void dic_sort(struct dic note[], int len)
{
	int j = 0;
	bool is_ordered = false, is_dic_swaped = false;

	is_ordered = dic_order(note, len, j);
	if (is_ordered) {
		printf("ok\n");
		++j;
	} else {
		printf("chk\n");
		is_dic_swaped = dic_swap(note, j);
		if (is_dic_swaped) {
			printf("swaped done chk order\n");
		} else {
			printf("chk dic swap\n");
		}
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
	struct dic note[100] = { 
				 {"out", "program output, out"},
				 {"anbu", "vasanth bro"},
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
	dic_print(note, len);

	return 0;
}

