#define MXIDIM (100)

void mxi_print(int m[MXIDIM][MXIDIM], int nr, int nc); // DONE
void mxi_printrow(int m[MXIDIM][MXIDIM], int nr, int nc, int r); // DOIT
void mxi_transpose(int src[MXIDIM][MXIDIM], int nr, int nc, int dst[MXIDIM][MXIDIM]);  // DONE
void mxi_sum(int m[MXIDIM][MXIDIM], int n[MXIDIM][MXIDIM], int nr, int nc);
void mxi_subtraction(int m[MXIDIM][MXIDIM], int n[MXIDIM][MXIDIM], int nr, int nc);

