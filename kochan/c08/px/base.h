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
int baseconv_base10_to_basen(int number, int a[], int asize, int abase);

int nbase(int num, int base, int a[]);
int anybase_nten(int ab[], int nb, int base);

