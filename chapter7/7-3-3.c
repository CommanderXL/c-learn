#include <stdio.h>

int inverse(unsigned x, int pos) {
  int l, n = 1, i = 1;

  for(; i < pos; i++) {
    n *= 2;
  }
  printf("%d\n", n);
  x >>= (pos - 1);
  l = x & 1U;
  printf("%d\n", l == 1 ? -n : n); 

  return l == 1 ? -n : n;
}


int main(void) {
  unsigned nx, ret;
  int pos;

  printf("请输入一个非负整数: ");
  scanf("%u", &nx);

  printf("请输入取反的位置: ");
  scanf("%d", &pos);

  ret = inverse(nx, pos) + nx;

  printf("%u第%d位取反后的值为: %u\n", nx, pos, ret);

  return 0;
}