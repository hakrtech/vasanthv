
#include <stdbool.h>

#ifdef LIBARC
// char line[] = "this is a simple line of text with a lot of words in it so you can count it to imrporve your c programming skills"
// char line[] = "this is    a    simple    line of text with a lot of words in it so you can count it to imrporve your c programming skills"
// char line[] = "this is	   a    simple    line of text with a lot of words in it so you can count it to imrporve your c programming skills"
// char line[] = "this is	   a    simple    line of text, with a lot of words in it!!! so you can count it to imrporve your c programming skills"

int arc_print(char line[]);
int arc_wc(char line[]);
int arc_len(char line[]);
void arc_print_longest_word(char line[]);
void arc_print_all_longest_word(char line[]);
void arc_print_first_shortest_word((char line[]);
void arc_print_all_shortest_word((char line[]);
#endif // LIBARC

// a[0..n-1] = val
void ari_setall(int a[], int n, int val); // DONE

// a[i] = i
void ari_setall_linear(int a[], int n); // DONE
// a[rstart..rend] = i
void ari_range_set_linear(int a[], int n, int rstart, int rend); // DONE

// a[i] = i*i
void ari_setall_square(int a[], int n); // DONE
// a[rstart..rend] = i*i
void ari_range_set_square(int a[], int n, int rstart, int rend); // DONE

// a[i] = 0,2,4,6
void ari_setall_even(int a[], int n); // DONE
// a[rstart..rend] = same 
void ari_range_set_even(int a[], int n, int rstart, int rend); // DONE

// a[i] = 1,3,5,7 ...
void ari_setall_odd(int a[], int n); // DONE
// a[rstart..rend] = same 
void ari_range_set_odd(int a[], int n, int rstart, int rend); // DONE

// a[i] = fibonacci(i) 0,1,1,2,3,5,8 ...
void ari_setall_fibonacci(int a[], int n); // LATER
// a[rstart..rend] = fibonacci(i)
void ari_range_set_factorial(int a[], int n); // TODO

// a[i] = factorial(i)
void ari_setall_factorial(int a[], int n); // LATER
// a[rstart..rend] = factorial(i)
void ari_range_set_factorial(int a[], int n); // TODO

// a[i] = prime(i) i'th prime prime(0)=2,prime(1)=3,prime(2)=5,7,11 ...
void ari_setall_prime(int a[], int n); // LATER
// a[rstart..rend] = prime(i)
void ari_range_set_prime(int a[], int n, int rstart, int rend); // TODO

// a[pos] = val
void ari_setone(int a[], int n, int pos, int val); // DONE
// a[rstart..rend] = val 
void ari_range_set(int a[], int n, int rstart, int rend, int val); // DONE

// a[0..n-1] = random number from randbot to randtop both included
void ari_setall_random(int a[], int n, int randbot, int randtop);
// a[rstart..rend] = random number from randbot to randtop both included
void ari_range_set_random(int a[], int n, int rstart, int rend, int randbot, int randtop);

// 5 3 4 9 , pass helpful array name as string
void ari_print(int a[], int n, char *prefix); // DONE
// print a[rstart..rend]
void ari_range_print(int a[], int n, int rstart, int rend); // DONE
// (5,3,4,9) leading=(, trailing=), separator=,
// (5 3 4 9) leading=(, trailing=), separator=' '
// [5 3 4 9] leading=[, trailing=], separator=' '
void ari_print_format(int a[], int n, char leading, char trailing, char separator); // DONE
// print a[rstart..rend] with format characters
void ari_range_print_format(int a[], int n, int rstart, int rend, char leading, char trailing, char separator); // DONE

// int  ari_sum(int a[], int n);
// sum = sum of a[rstart..rend]
int  ari_sum(int a[], int n); // DONE
int  ari_range_sum(int a[], int n, int rstart, int rend); // DONE

void ari_sortdown(int a[], int n); // DONE
void ari_sortup(int a[], int n); // DONE
void ari_swap_elem(int a[], int n, int i, int j); // DONE
void ari_range_swap_elem(int a[], int n, int rstart, int rend, int relposi, int relposj); // DONE

// sort a[rstart..rend]
void ari_range_sortdown(int a[], int n, int rstart, int rend); // DONE
void ari_range_sortup(int a[], int n, int rstart, int rend); // DONE

int  ari_factor(int a[], int n, int val); // DONE

// is val present in a[]
bool ari_isvalpresent(int a[], int n, int val); // DONE
// a[pos]
int  ari_get(int a[], int n, int pos); // DONE
int ari_range_get(int a[], int n, int rstart, int rend, int rpos); // DONE

// return first leftmost pos where a[pos] == val
// return -1 if not found
int  ari_getpos(int a[], int n, int val); // DONE
int ari_range_getpos(int a[], int na, int rstart, int rend, int val); // DONE

// return maximum of a[]
int  ari_getmax(int a[], int n); // DONE
int ari_range_getmax(int a[], int na, int rstart, int rend); // DONE

// return first leftmost pos of maximum
// return -1 if not found
int  ari_getmaxpos(int a[], int n); // DONE
int ari_range_getmaxpos(int a[], int na, int rstart, int rend); // DONE

// similarly for minimum
int  ari_getmin(int a[], int n); // DONE
int ari_range_getmin(int a[], int na, int rstart, int rend); // DONE

int  ari_getminpos(int a[], int n); // DONE
int ari_range_getminpos(int a[], int na, int rstart, int rend); // DONE

// copy range a[rstart..rend] to start onwards 
int  ari_range_copy_l2r(int a[], int n, int start, int rstart, int rend);
int  ari_range_copy_r2l(int a[], int n, int start, int rstart, int rend);

// b = a 
void ari_copy(int a[], int na, int b[], int nb); // DONE
// b[range] = a[range]
void ari_range_copy(int a[], int an, int rstarta, int renda, 
                    int b[], int bn, int rstartb); // DONE

// left shift by 1 and let last value remain 
void ari_lshift1(int a[], int n); // DONE QATHIS
// right shift by 1 and let first value remain
void ari_rshift1(int a[], int n); // DONE QATHIS
// left shift by jump and let last jump values remain
void ari_lshiftn(int a[], int n, int jump); // DONE QATHIS
// right shift by jump and let first jump values remain
void ari_rshiftn(int a[], int n, int jump); // DONE QATHIS

// circular rotate
void ari_lrotat1(int a[], int n); // DONE QATHIS
void ari_rrotat1(int a[], int n); // DONE QATHIS
// jump values will be <= size of array
void ari_lrotatn(int a[], int n, int jump); // DONE QATHIS
void ari_rrotatn(int a[], int n, int jump); // DONE QATHIS

void ari_lrotatn_using_copybuf(int a[], int n, int jump); // DONE
void ari_lrotatn_using_reverse(int a[], int n, int jump); // DONE
void ari_range_lrotatn_using_copybuf(int a[], int n, int rstart, int rend, int jump); // DONE
void ari_range_lrotatn_using_reverse(int a[], int n, int rstart, int rend, int jump); // DONE
void ari_range_lrotatn_inplace(int a[], int n, int rstart, int rend, int jump); // TODO

void ari_rrotatn_chain(int a[], int n, int jump, int cstart); // LATER
void ari_range_rrotatn_chain(int a[], int n, int jump, int rstart, int rend, int cstart); // LATER

void ari_reverse(int a[], int n); // DONE
void ari_range_reverse(int a[], int n, int rstart, int rend); // DONE

// range related shifts
void ari_range_lshift1(int a[], int n, int rstart, int rend); // DONE
void ari_range_rshift1(int a[], int n, int rstart, int rend); // DONE
// jump values will be <= size of array
void ari_range_lshiftn(int a[], int n, int rstart, int rend, int jump); // DONE
void ari_range_rshiftn(int a[], int n, int rstart, int rend, int jump); // DONE

// range related rotate
void ari_range_lrotat1(int a[], int n, int rstart, int rend); // DONE
void ari_range_rrotat1(int a[], int n, int rstart, int rend); // DONE
void ari_range_lrotatn(int a[], int n, int rstart, int rend, int jump); // DONE
void ari_range_rrotatn(int a[], int n, int rstart, int rend, int jump); // DONE
void ari_rrotatn_using_copybuf(int a[], int n, int jump); // DONE
void ari_rrotatn_using_reverse(int a[], int n, int jump); // DONE
void ari_range_rrotatn_using_copybuf(int a[], int n, int lefta, int righta, int jump); // DONE
void ari_range_rrotatn_using_reverse(int a[], int n, int rstart, int rend, int jump); // DONE

// a[] += k 
void ari_addk(int a[], int n, int k); // DONE
// a[] -= k 
void ari_subk(int a[], int n, int k); // DONE
// a[] *= k 
void ari_mulk(int a[], int n, int k); // DONE
// a[] /= k for k != 0
void ari_divk(int a[], int n, int k); // DONE

// similarly for range
void ari_range_addk(int a[], int n, int rstart, int rend, int k); // DONE
void ari_range_subk(int a[], int n, int rstart, int rend, int k); // DONE
void ari_range_mulk(int a[], int n, int rstart, int rend, int k); // DONE
void ari_range_divk(int a[], int n, int rstart, int rend, int k); // DONE

// copy a into c, append b to c
void ari_concat(int a[], int na, int b[], int nb, int c[], int nc); // DONE
void ari_range_concat(int a[], int na, int rstarta, int renda, 
		      int b[], int nb, int rstartb, int rendb,
		      int c[], int nc, int rstartc); // DONE

// circular rotate

// true if all values are equal across a[] and b[]
bool ari_isequal(int a[], int na, int b[], int nb); // DONE
bool ari_range_isequal(int a[], int na, int rstarta, int renda, 
		       int b[], int nb, int rstartb, int rendb); // DONE

// calculate average
double ari_stat_mean(int a[], int n);
// calculate median
int    ari_stat_median(int a[], int n, int median[2]);
// calculate modes
int    ari_stat_mode(int a[], int n, int mode[], int freq[]);
// standard deviation
double ari_stat_stddev(int a[], int n);
// variance
double ari_stat_variance(int a[], int n);
