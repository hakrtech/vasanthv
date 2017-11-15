#define MXIDIM (100)

void mxi_print(int m[MXIDIM][MXIDIM], int nr, int nc); // DONE
void mxi_printrow(int m[MXIDIM][MXIDIM], int nr, int nc, int r); // DOIT
void mxi_transpose(int src[MXIDIM][MXIDIM], int nr, int nc, int dst[MXIDIM][MXIDIM]);  // DONE
void mxi_add(int x[MXIDIM][MXIDIM],int y[MXIDIM][MXIDIM], int nr, int nc, int z[MXIDIM][MXIDIM]); // DONE
void mxi_subtract(int x[MXIDIM][MXIDIM],int y[MXIDIM][MXIDIM], int nr, int nc, int z[MXIDIM][MXIDIM]); // DONE

