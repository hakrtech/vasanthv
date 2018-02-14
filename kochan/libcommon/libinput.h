 /* vasanth 12 january 2018 */

// return input and print prompt
int input_decimal_int(char *prompt);
float input_decimal_float(char *prompt);
char input_char(char *prompt);

// return input until within range 
// eg. enter output base(2..36):
int input_decimal_int_until_within_range(int minrange, int maxrange, char *prompt);

// input array
// ninputs stored in array
// return number of elements in array
int input_decimal_ints(int a[], int asize, int ninputs);

// input array
// inputs are stored until exitval
// return number of elements in array
int input_decimal_ints_until_exitval(int a[], int asize, int exitval);

