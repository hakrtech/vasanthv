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
int koodai_initialise(int k[], int kcap); // API DONE
/* return 0 i.e the size of the new koodai */

/* OPERATION: reset koodai
   [2, 3, 7, 7, 9, 10, 11] -> [] return 0
   koodai reset items
 */
int koodai_reset(int k[], int kcap, int knitems); // API DONE

/* OPERATION: koodai get numer of items
   [2, 3, 7, 7, 9, 10, 11] -> 7 return 7 num of items
   koodai size
 */
int koodai_nitems(int k[], int kcap, int knitems); // API DONE

/* OPERATION: check koodai empty
   [] -> if kn == 1 true
   [1, 3] -> false
   [1, 2, 3, 4] -> kcap == kn ( 4 == 4) false 
   boolean koodai_is_empty(koodai) 
   return true koodai empty
   return false koodai half or full
*/
bool koodai_is_empty(int k[], int kcap, int kn); // API DONE

/* OPERATION: check koodai full
   [1, 2, 3, 4] -> if kcap == kn ( 4 == 4) true
   [1, 2]	-> kcap != kn (4 != 2) false
   []		-> kn == 0 false
   boolean koodai_is_full(koodai)
   return true koodai full
   return false koodai half or empty
*/
bool koodai_is_full(int k[], int kcap, int kn); // API DONE

/* OPERATION: print koodai items
   [2, 3, 7, 7, 9, 10, 11] -> 2 3 7 7 9 10 11
   koodai print
*/
void koodai_print(int k[], int kcap, int kn); // API DONE

/* OPERATION: add item to koodai
   [] + 6 -> [6] return 1 i.e. size
   [2, 3] + 7 -> [2, 3, 7] return 3
   size koodai add item(koodai , item) 
*/
int koodai_add_item(int k[], int kcap, int kn, int value); // API DONE


	/* --- next level --- */

/* OPERATION: remove item from koodai
   [6, 7, 8]    remove 7 if present -> [6, 8]    return 2
   [6, 7, 7, 8] remove 7 if present -> [6, 7, 8] return 3
   [6, 7, 8]    remove 9 if present -> [6, 7, 8] return 3
   size koodai_remove_item(koodai, item) 
   return n-1 if element removed 
   return n   if element !removed
 */
int koodai_remove_item(int k[], int klim, int nk, int value); // API DOIT

/* OPERATION: add two koodais 
   c = a + b
   a[2, 7, 9, 10] + b[3, 7, 9, 11] -> c[2, 7, 9, 10, 3, 7, 9, 11] return 8
   a[1, 1, 2, 12] + b[2, 2, 9, 12] -> c[1, 1, 2, 11, 2, 2, 9, 12] return 8
   return size of koodai c i.e. nc = na + nb
   size koodai_add(koodai a, koodai b, koodai c)
   return n+1 if element removed 
   return n   if element !removed
 */
int koodai_add(int a[], int alim, int na,
	       int b[], int blim, int nb,		
	       int c[], int clim);	// API DOIT

/* OPERATION: subtract two koodais i.e. remove matching items of 2nd koodai from first koodai and store in third koodai
   c = a - b
   [2, 7, 9, 10]    minus [3, 7, 9, 11] ->  [2, 10]    return 2
   [2, 7, 7, 9, 10] minus [3, 7, 9, 11] ->  [2, 7, 10] return 3
   return size of koodai c i.e. nc = na - nb
   size koodai_minus(kodai a, kodai b, kodai c)
*/
int koodai_subtract_koodai(int a[], int alim, int na,
		  	   int b[], int blim, int nb,
		  	   int c[], int clim);	// API DOIT 

/* OPERATION: commonitems items of two koodais
   [2, 7, 9, 10]    commonitems [3, 7, 9, 11]   -> [7, 9] return 2
   [4, 8, 4, 6, 2]  commonitems [4, 5, 6, 7, 8] -> [ 

   A[2, 4, 4, 6, 8] 
   B[4, 5, 6, 7, 8]

   A[2, 4, 4,    6,    8] 
   B[   4,    5, 6, 7, 8]
 A.B[   4,       6,    8]

   [4, 8, 4, 6, 2] commonitems [4, 5, 4, 7, 8] -> [4, 4, 8] return 3
   size koodai_commonof(koodai a, koodai b, koodai c)
   really common matching items but we will call it common items for now
   return size of koodai c i.e. nc = na - nb
 */
int koodai_commonitems(int a[], int alim, int na,
		       int b[], int blim, int nb,
		       int c[], int clim);	// API DOIT

/* OPERATION: koodai item sort size min to max
   [5, 4, 8, 2, 9, 6]         -> [2, 4, 5, 6, 8, 9] 
   [2, 7, 9, 10, 3, 7, 9, 11] -> [2, 3, 7, 7, 9, 10, 11]
   koodai_sortup(koodai)
 */
void koodai_sortup(int k[], int klim, int nk);	// API DOIT	

/* OPERATION: koodai item sort size max to min
   [5, 4, 8, 2, 9, 6]      -> [9, 8, 6, 5, 4, 2] 
   [2, 7, 9, 10, 3, 7, 9, 11] -> [11, 10, 9, 7, 7, 3, 2]
   koodai_sordown(koodai)
 */
void koodai_sortdown(int k[], int klim, int nk); // API DOIT

/* OPERATION: koodai take unique value and it's remove more than one value.
   self operation i.e. modifies itself 
   [2, 3, 7, 7, 9, 10, 11] -> [2, 3, 7, 9, 10, 11] return size
   return n-1 if element removed 
   return n   if element !removed
   koodai_unique(int k[100], int n)
*/
int koodai_unique(int a[], int alim, int na); // API DOIT

