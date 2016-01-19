#include <stdio.h>
#include "../src/filter.h"

void gen_table(int n) {
  int i;
  int j;
  int pos;
  int nn;
  nn = n == 8 ? OD_EDGE8_STRIDE : OD_EDGE4_STRIDE;
  printf("unsigned char od_edge_table_%d[16][OD_EDGE%d_STRIDE*OD_EDGE%d_STRIDE] = {\n", n, n, n);
  for (pos = 0; pos < 16; pos++) {
    printf("{ /* pos = %d */\n", pos);
    for (i = 0; i < nn; i++) {
      printf("  ");
      for (j = 0; j < nn; j++) {
        printf("%d, ", ((pos & 8) && j < OD_FILT_BORDER)
         || ((pos & 4) && j >= nn - OD_FILT_BORDER)
         || ((pos & 2) && i < OD_FILT_BORDER)
         || ((pos & 1) && i >= nn - OD_FILT_BORDER));
      }
      printf("\n");
    }
    printf("},\n");
  }
  printf("};\n");
}

int main() {
  int i;
  int j;
  gen_table(8);
  gen_table(4);
  return 0;
}
