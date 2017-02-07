#include <stdio.h>

// 求数组包含的元素个数
int main(void) {
  int vi[5];
  double vd[25];

  printf("数组vi的个数= %u", (unsigned)(sizeof(vi) / sizeof(vi[0])));
  printf("数组vd的个数= %u", (unsigned)(sizeof(vd) / sizeof(vd[0])));

  return 0;
}