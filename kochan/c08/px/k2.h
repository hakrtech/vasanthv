#if 0

/* OPERATION: remove item from koodai
   [6, 7, 8]    remove 7 if present -> [6, 8]    return 2
   [6, 7, 7, 8] remove 7 if present -> [6, 7, 8] return 3
   [6, 7, 8]    remove 9 if present -> [6, 7, 8] return 3
   size koodai_remove_item(koodai, item) 
 */
int koodai_remove_item(int k[], int klim, int nk, int value); // API DOIT
/* return n-1 if element removed 
   return n   if element !removed
 */

/* OPERATION: add two koodais 
   c = a + b
   a[2, 7, 9, 10] + b[3, 7, 9, 11] -> c[2, 7, 9, 10, 3, 7, 9, 11] return 8
   a[1, 1, 2, 12] + b[2, 2, 9, 12] -> c[1, 1, 2, 11, 2, 2, 9, 12] return 8
   return size of koodai c i.e. nc = na + nb
   size koodai_add(koodai a, koodai b, koodai c)
 */
int koodai_add( int a[], int alim, int na,		// API DOIT
		int b[], int blim, int nb,		// API DOIT
		int c[], int clim);			// API DOIT

/* OPERATION: subtract two koodais i.e. remove matching items of 2nd koodai from first koodai and store in third koodai
   c = a - b
   [2, 7, 9, 10]    minus [3, 7, 9, 11] ->  [2, 10]    return 2
   [2, 7, 7, 9, 10] minus [3, 7, 9, 11] ->  [2, 7, 10] return 3
   return size of koodai c i.e. nc = na - nb
   size koodai_minus(kodai a, kodai b, kodai c)
*/
int koodai_subtract_koodai(int a[], int alim, int na,
		  	 int b[], int blim, int nb,
		  	 int c[], int clim);
/* return size of koodai c i.e. nc = na + nb
 */


/* OPERATION: commonitems items of two koodais
   [2, 7, 9, 10]    commonitems [3, 7, 9, 11]   -> [7, 9] return 2
   [4, 8, 4, 6, 2]  commonitems [4, 5, 6, 7, 8] -> [ 

   A[4, 8, 4, 6, 2] 
 = A[2, 4, 4, 6, 8] 
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
		       int c[], int clim);
// return size of koodai c i.e. nc = na + nb

/* OPERATION: koodai item sort size min to max
   [5, 4, 8, 2, 9, 6]         -> [2, 4, 5, 6, 8, 9] 
   [2, 7, 9, 10, 3, 7, 9, 11] -> [2, 3, 7, 7, 9, 10, 11]
   koodai_sortup(koodai)
 */
void koodai_sortdown(int k[], int klim, int nk);

/* OPERATION: koodai item sort size max to min
   [5, 4, 8, 2, 9, 6]      -> [9, 8, 6, 5, 4, 2] 
   [2, 7, 9, 10, 3, 7, 9, 11] -> [11, 10, 9, 7, 7, 3, 2]
   koodai_sordown(koodai)
 */
void koodai_sortdown(int k[], int klim, int nk);

/* OPERATION: koodai take unique value and it's remove more than one value.
 * self operation i.e. modifies itself 
  [2, 3, 7, 7, 9, 10, 11] -> [2, 3, 7, 9, 10, 11] return size
  koodai_unique(int k[100], int n)
*/
int koodai_unique(int a[], int alim, int na);

[ 2, 3, 7, 7, 7, 9, 9, 10, 11] -> [7, 9]
void koodai_duplicate_item_values(int k[100], int n, int dk[100]);

[ 2, 3, 7, 7, 7, 9, 9, 10, 11] -> [7, 7, 7, 9, 9]
void koodai_duplicate_items(int k[100], int n, int dk[100]);

[ 2, 3, 7, 7, 9, 10, 11] check for 3 -> true
[ 2, 3, 7, 7, 9, 10, 11] check for 12 -> false
int koodai_isitempresent(int k[100], int n, int val);

int koodai_max(int k[100], int n);
int koodai_min(int k[100], int n);

if (a == b)
a[2, 3, 4, 5] == b[2, 3, 4, 5] -> true 
a[2, 3, 4, 5] == b[4, 2, 3, 5] -> true 
a[1, 1]       == b[1]          -> false
koodai_is_samam(a, b)

[2, 3] any overlap with [3, 4] -> true because overlap is 3
[2, 3] any overlap with [4, 5] -> false because no overlap
koodai_any_overlap_with(a, b)

if (a > b)
[2, 3, 4, 5] is_perisu [2, 3, 4] -> true
[2, 3, 4, 5] is_perisu [2, 3, 4, 5] -> false because they are equal 
[2, 3, 4, 5, 5] is_perisu [2, 3, 4, 5] -> true because of second 5
bool koodai_is_perisu(a, b)

if (a < b)
[2, 3] is_chinnadhu [2, 3, 4] -> true
[2, 3, 4, 5] is_chinnadu [2, 3, 4, 5] -> false because they are equal
[2, 2] is_chinnadhu [2, 3, 4, 5] -> false because of second 2
[2, 2] is_chinnadhu [2, 2, 4, 5] -> true
bool kooda_is_chinnadhu()

can koodai b be put into koodai a i.e.
a. is koodai a extensible for contents of b or
b. does koodai have enough space for contents of b
bool koodai_canfit(a, b)

addto
add contents of koodai b into kooda a 
a += b
b = 0
size koodai_roppidu(a, b) i.e. koodai_add_also_koodai(a, b)
koodai_gaali_pannidu(b) i.e. koodai_reset(b)

#endif // SKIP
