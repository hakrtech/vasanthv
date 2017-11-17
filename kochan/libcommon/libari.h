void ari_setall(int a[], int n, int val);
void ari_setone(int a[], int n, int pos, int val);
void ari_range_set(int a[], int n, int rstart, int rend, int val);

void ari_setall_random(int a[], int n, int randbot, int randtop);
void ari_range_set_random(int a[], int n, int rstart, int rend, int randbot, int randtop);

void ari_print(int a[], int n);
void ari_range_print(int a[], int n, int rstart, int end);
void ari_print_format(int a[], int n, char leading, char trailing, char separator);
void ari_range_print_format(int a[], int n, char leading, char trailing, char separator);

// int  ari_sum(int a[], int n);

void ari_range_print(int a[], int n, int rstart, int rend);
int  ari_range_sum(int a[], int n, int rstart, int rend);

void ari_sortdown(int a[], int n); // DONE
void ari_sortup(int a[], int n); // DONE
void ari_swap_elem(int a[], int n, int i, int j); // DONE

void ari_range_sortdown(int a[], int n, int rstart, int rend);
void ari_range_sortup(int a[], int n, int rstart, int rend);

int  ari_sum(int a[], int n); // DOIT
int  ari_range_sum(int a[], int n, int start, int end); // DOIT

int  ari_factor(int a[], int n); // ?

bool ari_isvalpresent(int a[], int n, int val);
int  ari_get(int a[], int n, int pos);
int  ari_getpos(int a[], int n, int val);

int  ari_getmax(int a[], int n);
int  ari_getmaxpos(int a[], int n, int pos);

int  ari_getmin(int a[], int n);
int  ari_getminpos(int a[], int n, int val);

int  ari_range_leftshift(int a[], int n, int lstart, int rstart, int rend);

// b = a 
int  ari_copy(int a[], int na, 
	      int b[], int nb);
// b[range] = a[range]
int  ari_range_copy(int a[], int an, int rstarta, int rend, 
                    int b[], int bn, int rstartb);

void ari_lshift1(int a[], int n);
void ari_rshift1(int a[], int n);
void ari_lshiftn(int a[], int n, int jump);
void ari_rshiftn(int a[], int n, int jump);

void ari_lrotat1(int a[], int n);
void ari_rrotat1(int a[], int n);
void ari_lrotatn(int a[], int n, int jump);
void ari_rrotatn(int a[], int n, int jump);

void ari_range_lshift1(int a[], int n, int rstart, int rend); // GCD 
void ari_range_rshift1(int a[], int n, int rstart, int rend);
void ari_range_lshiftn(int a[], int n, int rstart, int rend, int jump);
void ari_range_rshiftn(int a[], int n, int rstart, int rend, int jump);

void ari_range_lrotat1(int a[], int n, int rstart, int rend); // GCD 
void ari_range_rrotat1(int a[], int n, int rstart, int rend);
void ari_range_lrotatn(int a[], int n, int rstart, int rend, int jump);
void ari_range_rrotatn(int a[], int n, int rstart, int rend, int jump);

void ari_addk(int a[], int n, int k);
void ari_subk(int a[], int n, int k);
void ari_mulk(int a[], int n, int k);
void ari_divk(int a[], int n, int k);

void ari_range_addk(int a[], int n, int rstart, int rend, int k);
void ari_range_subk(int a[], int n, int rstart, int rend, int k);
void ari_range_mulk(int a[], int n, int rstart, int rend, int k);
void ari_range_divk(int a[], int n, int rstart, int rend, int k);

// c = a + b
void ari_concat(int a[], int na, int b[], int nb, int c[], int nc);

bool ari_isequal(int a[], int na, int b[], int nb);
bool ari_range_isequal(int a[], int na, int rstarta, int renda, 
		       int b[], int nb, int rstartb, int rendb);
