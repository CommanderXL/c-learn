#include <stdio.h>
#include <limits.h>

int main(void) {
  static int a[5];

  for(int i = 0; i < 5; i++) {
    //printf("%3d\n", a[i]);
  }

  printf("char    : %d ~ %d\n", CHAR_MIN, CHAR_MAX);

  return 0;
}