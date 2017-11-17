
#include <stdbool.h>

// a[0..n-1] = val DONE
void ari_setall(int a[], int n, int val);
// a[pos] = val DONE
void ari_setone(int a[], int n, int pos, int val);
// a[rstart..rend] = val 
void ari_range_set(int a[], int n, int rstart, int rend, int val);

// a[0..n-1] = random number from randbot to randtop both included
void ari_setall_random(int a[], int n, int randbot, int randtop);
// a[rstart..rend] = random number from randbot to randtop both included
void ari_range_set_random(int a[], int n, int rstart, int rend, int randbot, int randtop);

// 5 3 4 9 DONE
void ari_print(int a[], int n);
// print a[rstart..rend]
void ari_range_print(int a[], int n, int rstart, int rend);
// (5,3,4,9) leading=(, trailing=), separator=,
// (5 3 4 9) leading=(, trailing=), separator=' '
// [5 3 4 9] leading=[, trailing=], separator=' '
void ari_print_format(int a[], int n, char leading, char trailing, char separator);
// print a[rstart..rend] with format characters
void ari_range_print_format(int a[], int n, int rstart, int rend, char leading, char trailing, char separator);

// int  ari_sum(int a[], int n);
// sum = sum of a[rstart..rend]
int  ari_sum(int a[], int n); // DONE
int  ari_range_sum(int a[], int n, int rstart, int rend);

void ari_sortdown(int a[], int n); // DONE
void ari_sortup(int a[], int n); // DONE
void ari_swap_elem(int a[], int n, int i, int j); // DONE

// sort a[rstart..rend]
void ari_range_sortdown(int a[], int n, int rstart, int rend);
void ari_range_sortup(int a[], int n, int rstart, int rend);

int  ari_factor(int a[], int n); // ?

// is val present in a[] DONE
bool ari_isvalpresent(int a[], int n, int val);
// a[pos] DONE
int  ari_get(int a[], int n, int pos);
// return first leftmost pos where a[pos] == val
// return -1 if not found DONE
int  ari_getpos(int a[], int n, int val);

// return maximum of a[]
int  ari_getmax(int a[], int n);
// return first leftmost pos of maximum
// return -1 if not found
int  ari_getmaxpos(int a[], int n, int pos);

// similarly for minimum
int  ari_getmin(int a[], int n);
int  ari_getminpos(int a[], int n, int val);

// copy range a[rstart..rend] to start onwards 
int  ari_range_copy_l2r(int a[], int n, int start, int rstart, int rend);
int  ari_range_copy_r2l(int a[], int n, int start, int rstart, int rend);

// b = a 
int  ari_copy(int a[], int na, 
	      int b[], int nb);
// b[range] = a[range]
int  ari_range_copy(int a[], int an, int rstarta, int rend, 
                    int b[], int bn, int rstartb);

// left shift by 1 and let last value remain 
void ari_lshift1(int a[], int n);
// right shift by 1 and let first value remain
void ari_rshift1(int a[], int n);
// left shift by jump and let last jump values remain
void ari_lshiftn(int a[], int n, int jump);
// right shift by jump and let first jump values remain
void ari_rshiftn(int a[], int n, int jump);

// circular rotate
void ari_lrotat1(int a[], int n);
void ari_rrotat1(int a[], int n);
void ari_lrotatn(int a[], int n, int jump);
void ari_rrotatn(int a[], int n, int jump);

// range related shifts
void ari_range_lshift1(int a[], int n, int rstart, int rend); // GCD 
void ari_range_rshift1(int a[], int n, int rstart, int rend);
void ari_range_lshiftn(int a[], int n, int rstart, int rend, int jump);
void ari_range_rshiftn(int a[], int n, int rstart, int rend, int jump);

// range related rotate
void ari_range_lrotat1(int a[], int n, int rstart, int rend); // GCD 
void ari_range_rrotat1(int a[], int n, int rstart, int rend);
void ari_range_lrotatn(int a[], int n, int rstart, int rend, int jump);
void ari_range_rrotatn(int a[], int n, int rstart, int rend, int jump);

// a[] += k 
void ari_addk(int a[], int n, int k);
// a[] -= k 
void ari_subk(int a[], int n, int k);
// a[] *= k 
void ari_mulk(int a[], int n, int k);
// a[] /= k for k != 0
void ari_divk(int a[], int n, int k);

// similarly for range
void ari_range_addk(int a[], int n, int rstart, int rend, int k);
void ari_range_subk(int a[], int n, int rstart, int rend, int k);
void ari_range_mulk(int a[], int n, int rstart, int rend, int k);
void ari_range_divk(int a[], int n, int rstart, int rend, int k);

// copy a into c, append b to c
void ari_concat(int a[], int na, int b[], int nb, int c[], int nc);

// true if all values are equal across a[] and b[]
bool ari_isequal(int a[], int na, int b[], int nb);
bool ari_range_isequal(int a[], int na, int rstarta, int renda, 
		       int b[], int nb, int rstartb, int rendb);

// calculate average
double ari_mean(int a[], int n);
// calculate median
int    ari_median(int a[], int n, int median[2]);
// calculate modes
int    ari_mode(int a[], int n, int mode[], int freq[]);
// standard deviation
double ari_stddev(int a[], int n);
// variance
double ari_variance(int a[], int n);
