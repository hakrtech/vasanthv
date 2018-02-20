/* chapter 10 example 10 dictionary lookup using binary search algorithum
 * vasanth 20 february 2018
 */

#include <stdio.h>

struct entry
{
	char word[20];
	char def[100];
};

// function to compare two character string
int compare_str(const char a[], const char b[])
{
	int i, ans;

	i = 0;
	while ((a[i] == b[i]) && (a[i] != '\0') && (b[i] != '\0')) {
		++i;
	}

	if (a[i] < b[i]) {
		ans = -1;		/* a < b  */
	} else if (a[i] == b[i]) {
		ans = 0;		/* a == b */
	} else {
		ans = 1;		/* a > b  */
	}

	return ans;
}

// function to look up a word inside a dictionary
int look_up(const struct entry dic[], const char s[], const int n)
{
	int low, high, mid, r, f;

	f = -1;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		r = compare_str(dic[mid].word, s);

		if (r == -1) {
			low = mid + 1;
		} else if (r == 1) {
			high = mid - 1;
		} else {
			f = mid; 	/* found it,  */
			break;		/* exit loop  */
		}
	}

	return f;			/* not found return -1 */
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
	int e;

	printf("dictionary lookup using binary search algorithum>\n");
	printf("enter word: ");
	scanf("%10s", s);

	e = look_up(dic, s, n);
	if (e != -1) {
		printf("[ %s ] [ %s ]\n", s, dic[e].def);
	} else {
		printf("[ %s ] not in my dictionary\n", s);
	}

	return 0;
}

