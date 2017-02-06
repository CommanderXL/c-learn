#include <stdio.h>

int num(int n) {
  int i;

  return 0;
}

int main(void) {
  unsigned na, nb, count;
  int n = 0, num = 0;

  printf("请输入一个非负整数: ");
  scanf("%u", &na);

  printf("请输入左移的位数: ");
  scanf("%u", &count);

  nb = na << count;

  for(; n < count; n++) {
    num *= 2;
  }

  printf("%d  %d", nb, na);

  return 0;
}