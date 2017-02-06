#include <stdio.h>

unsigned set(unsigned x, int pos) {
  int i = 1, r = 1;

  for(; i < pos; i++) {
    r *= 2;
  }

  return x + r;
}

int main(void) {
  unsigned nx, ret;
  int pos;

  printf("请输入无符号整数: ");
  scanf("%u", &nx);

  printf("请输入置1的位置: ");
  scanf("%d", &pos);

  ret = set(nx, pos);

  printf("%u第%d位设为1后的值为: %u\n", nx, pos, ret);

  return 0;
}