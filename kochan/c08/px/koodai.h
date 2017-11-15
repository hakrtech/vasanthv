/* koodai library - unordered, non unique items in an array */
#pragma once

#include <stdbool.h>

#define CAPACITY (100)

/* NOTES: a koodai is implemented by an array so 
 * we need array values, size of the array, current size of the koodai
 * (values[], capacity, nitems) defines a koodai
 */

/* struct koodai {
 	int kcap = 100; capacity 
	int kval[100];  values
	int kn;		number of items in koodai
   }
*/

/* OPERATION: create unitialised koodai of maximum size lim
   -> allocate space for lim items -> return ptr to that 
   after c11
   koodai koodai_create(capacity) LATER
void koodai_allocate(int k[], int kcap);
*/

/* OPERATION: destroy koodai
   [2, 3]-> deallocate memory for above koodai
   after c11 LATER
void koodai_destroy(int k[], int kcap);
*/

/* OPERATION: initialise koodai
   -> [] return 0 (size)
   size koodai_init(koodai) 
*/
int koodai_initialise(int k[], int kcap); // API DOIT
/* return 0 i.e the size of the new koodai */

/* OPERATION: reset koodai
   [2, 3, 7, 7, 9, 10, 11] -> [] return 0
   koodai reset items
 */
int koodai_reset(int k[], int kcap, int knitems); // API DOIT

/* OPERATION: koodai get numer of items
   [2, 3, 7, 7, 9, 10, 11] -> 7 return 7 num of items
   koodai size
 */
int koodai_nitems(int k[], int kcap, int knitems); // API DOIT

/* OPERATION: check koodai empty
   [] -> if kn == 1 true
   [1, 3] -> false
   [1, 2, 3, 4] -> kcap == kn ( 4 == 4) false 
   boolean koodai_is_empty(koodai) // API DOIT 
   return 1 koodai empty
   return 0 koodai half or full
*/
bool koodai_is_empty(int k[], int kcap, int kn); // API DOIT

/* OPERATION: check koodai full
   [1, 2, 3, 4] -> if kcap == kn ( 4 == 4) true
   [1, 2]	-> kcap != kn (4 != 2) false
   []		-> kn == 0 false
   boolean koodai_is_full(koodai) // API DOIT
   return 1 koodai full
   return 0 koodai half or empty
*/
bool koodai_is_full(int k[], int kcap, int kn); // API DOIT

/* OPERATION: print koodai items
   [2, 3, 7, 7, 9, 10, 11] -> 2 3 7 7 9 10 11
   koodai print
*/
void koodai_print(int k[], int kcap, int kn); // API DOIT

/* OPERATION: add item to koodai
   [] + 6 -> [6] return 1 i.e. size
   [2, 3] + 7 -> [2, 3, 7] return 3
   size koodai add item(koodai , item) 
*/
int koodai_add_item(int k[], int kcap, int kn, int value); // API DOIT

