
void ari_setall(int a[], int n, int val);
void ari_setone(int a[], int n, int pos, int val);
void ari_range_set(int a[], int n, int rstart, int rend, int val);

void ari_setall_random(int a[], int n, int randbot, int randtop);

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

void ari_left_rotate1(int a[], int n);
void ari_right_rotate1(int a[], int n);
void ari_left_rotaten(int a[], int n, int jump);
void ari_right_rotaten(int a[], int n, int jump);

void ari_range_left_rotate1(int a[], int n, int rstart, int rend);
void ari_range_right_rotate1(int a[], int n, int rstart, int rend);
void ari_range_left_rotaten(int a[], int n, int rstart, int rend, int jump);
void ari_range_right_rotaten(int a[], int n, int rstart, int rend, int jump);


void ari_addk(int a[], int n, int k);
void ari_subk(int a[], int n, int k);
void ari_mulk(int a[], int n, int k);
void ari_divk(int a[], int n, int k);

void ari_range_addk(int a[], int n, int rstart, int rend, int k);
void ari_range_subk(int a[], int n, int rstart, int rend, int k);
void ari_range_mulk(int a[], int n, int rstart, int rend, int k);
void ari_range_divk(int a[], int n, int rstart, int rend, int k);

