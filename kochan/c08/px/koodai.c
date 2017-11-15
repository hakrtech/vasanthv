
#include <stdio.h>

#include "koodai.h"
#include "libarray.h"

int koodai_initialise(int k[], int kcap) // API DONE
/* return 0 i.e the size of the new koodai */
{
	return 0;
}

/* OPERATION: reset koodai
   [2, 3, 7, 7, 9, 10, 11] -> [] return 0
   koodai reset items
 */
int koodai_reset(int k[], int kcap, int knitems) // API DONE
{
	return 0;
}

/* OPERATION: koodai get numer of items
   [2, 3, 7, 7, 9, 10, 11] -> 7 return 7 num of items
   koodai size
 */
int koodai_nitems(int k[], int kcap, int knitems) // API DONE
{
	return knitems;
}

/* OPERATION: check koodai empty
   [] -> if kn == 1 true
   [1, 3] -> false
   [1, 2, 3, 4] -> kcap == kn ( 4 == 4) false 
   boolean koodai_is_empty(koodai) // API DOIT 
   return 1 koodai empty
   return 0 koodai half or full
*/
bool koodai_is_empty(int k[], int kcap, int kn) // API DONE
{
	if (kn == 0) {
		return true;
	}

	return false;
}

/* OPERATION: check koodai full
   [1, 2, 3, 4] -> if kcap == kn ( 4 == 4) true
   [1, 2]	-> kcap != kn (4 != 2) false
   []		-> kn == 0 false
   boolean koodai_is_full(koodai) // API DOIT
   return 1 koodai full
   return 0 koodai half or empty
*/
bool koodai_is_full(int k[], int kcap, int kn) // API DONE
{
	if (kn == kcap) {
		return true;
	}

	return false;
}

/* OPERATION: print koodai items
   [2, 3, 7, 7, 9, 10, 11] -> 2 3 7 7 9 10 11
   koodai print
*/
void koodai_print(int k[], int kcap, int kn) // API DONE
{
	bool a;
	bool b;
	int c;

	a = koodai_is_empty(k, kcap, kn);
	b = koodai_is_full(k, kcap, kn);
	c = koodai_nitems(k, kcap, kn);
	if (a == true) {
		printf("[]\n");
	}
	if (b == true) {
		printf("koodai full!!!\n");
	}
	if (a == false) {
		ari_print(k, kn);
		printf("koodai number of items> %d\n", c);
	}

	return;
}

/* OPERATION: add item to koodai
   [] + 6 -> [6] return 1 i.e. size
   [2, 3] + 7 -> [2, 3, 7] return 3
   size koodai add item(koodai , item) 
*/
int koodai_add_item(int k[], int kcap, int kn, int value) // API DONE
{
	k[kn] = value;
	kn += 1;

	return kn;
}

int main(void)
{
	int kcapacity = 100;
	int koodai[kcapacity];
	int knitems;
	
        knitems = koodai_initialise(koodai, kcapacity);
	koodai_print(koodai, kcapacity, knitems);

	knitems = koodai_add_item(koodai, kcapacity, knitems, 10);
	knitems = koodai_add_item(koodai, kcapacity, knitems, 6);
	knitems = koodai_add_item(koodai, kcapacity, knitems, 2);
	knitems = koodai_add_item(koodai, kcapacity, knitems, 3);
	knitems = koodai_add_item(koodai, kcapacity, knitems, 7);
	koodai_print(koodai, kcapacity, knitems);

	knitems = koodai_reset(koodai, kcapacity, knitems);
	koodai_print(koodai, kcapacity, knitems);

	return 0;
}

