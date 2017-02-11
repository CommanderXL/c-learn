#include <stdio.h>

int main(void) {
  int vc[3];

  printf("vc     : %p\n", vc);
  printf("vc[0]的地址是: %p\n", &vc[0]);
  printf("vc[1]的地址是: %p\n", &vc[1]);
  printf("vc[2]的地址是: %p\n", &vc[2]);
  printf("%lu\n", sizeof(int));

  return 0;
}