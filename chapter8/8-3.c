#include <stdio.h>

//#define swap(type, a, b) {type c, c = a, a = b, b = c}

#define swap(type, a, b) \
  do { \
    type c; \
    c = a; \
    a = b; \
    b = c; \
  } while(0)

int main(void) {
  int a = 10, b = 5;

  swap(int, a, b);

  printf("a的值是: %d\n", a);
  printf("b的值是: %d\n", b);

  return 0;
}