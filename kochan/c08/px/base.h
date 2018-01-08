/* base conversion library 
 * Vasanth 06-01-2018
 */

// convert (a[0..alen]) in base abase to (return value) in base 10
// e.g. calling with ([1,1,0,0], 100, 4, 10) will return 12
int baseconv_basen_to_base10(int a[], int asize, int alen, int abase);

// convert (number) in base 10 to (a[0..alen]) to base abase
// returns length of range a[0..whatever]
// e.g. convers number 12 to base 2
// a[] = [ 1, 1, 0, 0 ] returns 4 length of values in a[] 
int baseconv_base10_to_basen(int number, char a[], int asize, int abase); // DONE

void array_base_print(char a[], int n, char *s);
void ari_reverse_copy(int a[], int na, int b[], int nb);

char num_to_char(int num);
void array_char_swap(char c[], int n, int i, int j);
void array_char_reverse(char c[], int n);
void array_char_setall(char c[], int n, char l);

