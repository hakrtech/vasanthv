/* chapter 10 exercise 08 replace string function use to remove and replace strings in source strings
 * vasanth 28 february 2018
 */

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int string_length(char s[])
{
	int i = 0;

	while (s[i] != '\0') {
		++i;
	}
	assert(s[i] == '\0');

	return i;
}

int string_find(char s[], char f[])
{
	char c;
	int i, j, pos = -1;

	// loop s[ 0 .. !'\0' ] to find f[ 0 .. !'\0' ]
	i = 0;
	j = 0;
	c = f[j];
	while (s[i] != '\0') {
		if (s[i] == c) {
			int k, l;
			k = i;
			l = j;
			while (s[k] == f[l]) {
				++k;
				++l;
			}
			if ((f[l] == '\0') && (s[k-1] == f[l-1])) {
				pos = i;
				break;
			}
		}
		++i;
	}

	return pos;
}

bool string_remove(char s[], int pos, int len)
{
	int i, j, s_len;
	bool is_removed = false;

	s_len = string_length(s);
	assert(s_len > 0);
	assert((0 <= pos) && (pos < s_len));
	assert((0 < len) && (len <= s_len));

	// loo s[ 0 .. s_len-1 ] removed s [ pos .. pos+len-1 ] 
	for (i = pos, j = pos+len; j <= s_len-1; ++i, ++j) {
		assert((0 <= i) && (i < s_len));
		s[i] = s[j];
	}
	if (j > s_len) {
		return is_removed;
	}

	assert(j == s_len);
	s[i] = '\0';
	is_removed = true;

	return is_removed;
}

bool string_insert(char s[], int pos, char ins[])
{
	int i, j, s_len, ins_len;
	bool is_inserted = false;

	s_len = string_length(s);
	ins_len = string_length(ins);
	assert((0 <= pos) && (pos < s_len));

	// string shift
	i = s_len - 1;
	j = (s_len+ins_len) - 1;
	s[s_len+ins_len] = '\0';

	while (i >= pos) {
		s[j] = s[i];
		--i;
		--j;
	}
	assert(i < pos);

	// string insert
	i = 0;
	j = pos;
	while ( i <= ins_len-1) {
		s[j] = ins[i];
		++i;
		++j;
	}
	if (i == ins_len) {
		is_inserted = true;
	}

	return is_inserted;
}

bool string_replace(char s[], char rmv[], char ins[])
{
	int pos, rmv_len;
	bool is_removed = false, is_inserted = false, is_replaced = false;

	pos = string_find(s, rmv);
	if (pos == -1) {
		return is_replaced;
	}

	rmv_len = string_length(rmv);
	is_removed = string_remove(s, pos, rmv_len);
	if (is_removed) {
		is_inserted = string_insert(s, pos, ins);
		if (is_inserted) {
			is_replaced = true;
		} else {
			printf("check string insert\n");
		}
	} else {
		printf("check string remove\n");
	}

	return is_replaced;
}

int main(void)
{
	char a[] = "the wrong persion";
	char b[] = "wrong";
	char c[] = "correct";
	bool is_replaced = false;

	printf("strings replace method>\n");
	printf("strings>\nsource a [ %s ]\nremove b [ %s ]\ninsert c [ %s ]\n", a, b, c);

	is_replaced = string_replace(a, b, c);
	if (is_replaced) {
		printf("replaced source strings a [ %s ]\n", a);
	} else {
		printf("not replaced source a [ %s ]\n", a);
	}

	return 0;
}

