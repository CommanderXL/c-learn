#include <stdio.h>

void mul(const int ma[2][3], const int mb[3][2], int mc[2][2]) {
  int arr[2][3];
  int i1, j1, i2, j2;
  int k; 

  for(j2 = 0; j2 < 2; j2++) {
    for(i2 = 0; i2 < 3; i2++) {
      arr[j2][i2] = mb[i2][j2];
    }
  }

  for(i1 = 0; i1 < 2; i1++) {
    for(i2 = 0; i2 < 2; i2++) {
      k = 0;
      for(j2 = 0; j2 < 3; j2++) {
        //printf("%3d %3d", ma[i1][j2], arr[i1][j2]);
        k += ma[i1][j2] * arr[i2][j2];
      }
      mc[i1][i2] = k;
    }
  }
}

int main(void) {
  int ma[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int mb[3][2] = {{1, 5}, {5, 3}, {8, 1}};
  int mc[2][2];
  int i, j;

  mul(ma, mb, mc);

  for(i = 0; i < 2; i++) {
    for(j = 0; j < 2; j++) {
      printf("%3d\n", mc[i][j]);
    }
  }

  return 0;
}