/* chapter 10 example 09 program to use the dictionary lookup program
 * vasanth 20 february 2018
 */

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[20];
	char def[100];
};

bool equal_str(const char a[], const char b[])
{
	int i = 0;
	bool is_equal = false;

	while ((a[i] == b[i]) && (a[i] != '\0') && (b[i] != '\0')) {
		++i;
	}

	if ((a[i] == '\0') && (b[i] == '\0')) {
		is_equal = true;
	}

	return is_equal;
}

int look_up(const struct entry dic[], const char s[], const int n)
{
	int i, f = -1;

	for (i = 0; i < n; ++i) {

		if (equal_str(s, dic[i].word)) {
			f = i;
		}
	}

	return f;
}

int main(void)
{
	const struct entry dic[200] = {	{ "a",		"lowercase first english alphabetic"	},
					{ "abyss", 	"a bottomless pit"			},
					{ "acumen",	"mentally sharp; keen"			},
					{ "addle",	"to become confused"			},
					{ "affix",	"to append; attached"			},
					{ "A4",		"paper size 215.9mmx297.4mm or11 inches"},
					{ "backup",	" A copy of the original file, folder"	},
					{ "boot",	"(bootstrap) load the operating system"	},
					{ "clear",	"command to clear or delete information"},
					{ "copy",	"To duplicate information."		}
				};
	char s[100];
	int n = 10;
	int entry;

	printf("dictionary lookup>\n");
	printf("enter word: ");
	scanf("%10s", s);

	entry = look_up(dic, s, n);

	if (entry != -1) {
		printf("[ %s ] [ %s ]\n", s, dic[entry].def);
	} else {
		printf("[ %s ] not in my dictionary\n", s);
	}

	return 0;
}

