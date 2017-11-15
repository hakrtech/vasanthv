// oru kooda sunlight

-> []
koodai_init()
// a [100] but n = 0
void koodai_init(int k[100], int n); // cproto

[] + 6 -> [6]
koodai_add_elem(6)
void koodai_add_element(int k[100], int n, int value); // cproto

[6, 7, 8] - 6 if present -> [7, 8]
[6, 7, 8] - 9 if present -> [6, 7, 8]
koodai_remove_elem(6)
int koodai_remove_element(int k[100], int n, int value);
// if removed returned n - 1
// if !removed returned n

6 7 8 E // n = 3
6 8 -1 // n = 2 
E = -1


[2, 7, 9, 10] U [ 3, 7, 9, 11 ] -> [2, 7, 9, 10, 3, 7, 9, 11] // plus
c = a + b
void koodai_union(int ak[100], int bk[100], int n, int ck[100], int m);

 k, m, c  l       ms mo cp ec
[2, 7, 9, 10] minus [ 3, 7, 9, 11 ] ->  [ 2, 10 ]// minus
[2, 7, 7, 9, 10] minus [ 3, 7, 9, 11 ] ->  [ 2, 7, 10 ]// minus
void koodai_minus(int ak[100], int bk[100], int n, int ck[100]);


[2, 7, 9, 10] commonitems [ 3, 7, 9, 11 ] ->  [ 7, 9 ]
void koodai_commonof(int ak[100], int bk[100], int n, int ck[100]);

[2, 7, 9, 10, 3, 7, 9, 11] -> [ 2, 3, 7, 7, 9, 10, 11]
void koodai_sortup(int k[100], int n);
void koodai_sortdown(int k[100], int n);

[ 2, 3, 7, 7, 9, 10, 11] -> [2, 3, 7, 9, 10, 11]
void koodai_make_unique(int k[100], int n);

[ 2, 3, 7, 7, 9, 10, 11] -> 7
int koodai_size(int k[100], int n);

[ 2, 3, 7, 7, 9, 10, 11] -> []
void koodai_empty(int k[100], int n);
koodai_reset()
koodai_zero()
koodai_init()

[ 2, 3, 7, 7, 7, 9, 9, 10, 11] -> [7, 9]
void koodai_dupitems(int k[100], int n, int dk[100]);

[ 2, 3, 7, 7, 9, 10, 11] check for 3 -> true
[ 2, 3, 7, 7, 9, 10, 11] check for 12 -> false
int koodai_isitempresent(int k[100], int n, int val);

[ 2, 3, 7, 7, 9, 10, 11] -> 2 3 7 7 9 10 11
void koodai_print(int k[100], int n);

int koodai_max(int k[100], int n);
int koodai_min(int k[100], int n);

10 = [ 1, 2, 5, 10 ] onnu kooda_add(onnu, 10)
15 = [ 1, 3, 5, 15 ] rendu
[ 1, 2, 5, 10 ] commonof  [ 1, 3, 5, 15 ]
mudhal minus rendavathu
[ 1, 2, 5, 10 ] minus  [ 1, 3, 5, 15 ]
c = a - b
[ 2, 10 ] c
edutha item = 1, 5
a - b = anew + edutha item
d = a - c
koodai a, 

abstract data type  // interface // api
implement using array 
[ 1 next ] -> 2 -> 


struct koodai {
	int v[100];
	int n;
};
