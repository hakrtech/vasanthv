/* chapter 10 exercise 10 program to sort a dictionary into alphabetic order
 * vasanth 01 march 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "libarray.h"
#include "libinput.h"

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

bool string_copy(char source[], char dest[], int n)
{
	int len, i;
	bool is_copied = false;

	len = string_length(source);
	assert(n >= len);
	arc_setall(dest, n, '-');

#define DEBUG 0
	if (DEBUG) {
		arc_print(dest, n, "dest");
	}

	// loop source [ 0 ... !'\0'] to copy dest [ 0 .. n-1 ]
	i = 0;
	while (source[i] != '\0') {
		assert((0 <= i) && (i < n));
		dest[i] = source[i];
		++i;
	}
	assert(source[i] == '\0');
	dest[i] = '\0';
	is_copied = true;

	if (DEBUG) {
		arc_print(dest, n, "dest");
	}

	return is_copied;
}

bool string_swap(char a[], char b[])
{
	int a_len, b_len, c_len;
	char c[201];
	int n  = 200;
	bool is_copied = false, is_swaped = false;

	is_copied = string_copy(a, c, n);
	if (is_copied) {
		b_len = string_length(b);
		is_copied = string_copy(b, a, b_len);
		if (is_copied) {
			c_len = string_length(c);
			is_copied = string_copy(c, b, c_len);
			is_swaped = true;
		} else {
			printf("chk2 string copy\n");
		}
	} else {
		printf("chk1 string copy\n");
	}

	if (DEBUG) {
		a_len = string_length(a);
		arc_print(a, a_len, "a");
		b_len = string_length(b);
		arc_print(b, b_len, "b");
	}

	return is_swaped;
}

void dic_print(struct dic note[], int len)
{
	int i = 0;

	assert(len > 0);
	printf("dictionary>\n word\t\tdefinition\n");

	while (i <= len-1) {
		printf("[ %s ]       [ %s ]\n", note[i].word, note[i].def);
		++i;
	}
	assert(i == len);
}

bool dic_swap(struct dic note[], int i, int j)
{
	bool is_swaped = false, is_dic_swaped = false;

	assert(i >= 0);
	assert(j >= 0);

	is_swaped = string_swap(note[i].word, note[j].word);
	if (is_swaped) {
		is_swaped = string_swap(note[i].def, note[j].def);
		if (is_swaped) {
			is_dic_swaped = true;
		}
	}

	return is_dic_swaped;
}

bool string_compare(char a[], char b[])
{
	bool is_compared = false;
	int i = 0;

	while ((a[i] == b[i]) && (a[i] != '\0')) {
		++i;
	}
	if (a[i] <= b[i]) {
		is_compared = true;
	}

	return is_compared;
}

void dic_sort(struct dic note[], int len)
{
	int i;
	bool is_compared = true, is_swaped = false;

	assert(len > 0);

	for (i = 0; i < len-1; ++i) {
		int j;

		for (j = i+1; j <= len-1; ++j) {

			is_compared = string_compare(note[i].word, note[j].word);

			// true condition (a[i] > a[j])
			if (!is_compared) {
				is_swaped = dic_swap(note, i, j);
				if (!is_swaped) {
					printf("chk swap\n");
				}
			}
		}
	}
}

void dic_read_line(struct dic note[], int pos)
{
	char c;
	int i = 0;

	do {
		c = getchar();
		note[pos].def[i] = c;
		++i;
	} while (c != '\n');

	assert(c == '\n');
	note[pos].def[i-1] = '\0';
}

int dic_entry(struct dic note[])
{
	int index, i;

	index = input_decimal_int("enter total index: ");
	printf(" %d\n", index);

	i = 0;
	while (i < index) {
		printf("word and definition:\n");
		scanf("%s\n", note[i].word);
		printf(" [ %s ]\n", note[i].word);

		dic_read_line(note, i);
		printf(" [ %s ]\n", note[i].def);
		++i;
	}
	assert(i == index);

	return i;
}

int main(void)
{
	struct dic book[101];
	int len;

	printf("sort dictionary into alphabetic order>\n");
	printf("develop own dictionary book>\n");
	len = dic_entry(book);
	dic_print(book, len);

	dic_sort(book, len);
	printf("\nsorted dictionary book\n");
	dic_print(book, len);

	return 0;
}

