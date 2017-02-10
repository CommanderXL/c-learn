#include <stdio.h>

int main(void) {
  int nx;
  double dx;
  int vc[3];

  printf("nx   的地址: %p\n", &nx);
  printf("dx   的地址: %p\n", &dx);
  printf("vc[0]的地址: %p\n", &vc[0]);
  printf("vc[1]的地址: %p\n", &vc[1]);
  printf("vc[2]的地址: %p\n", &vc[2]);
  //printf("%d", (unsigned)sizeof(int));

  return 0;
}