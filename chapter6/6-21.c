#include <stdio.h>

int main(void) {
  static int a[5];

  for(int i = 0; i < 5; i++) {
    printf("%3d\n", a[i]);
  }

  return 0;
}