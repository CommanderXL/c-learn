#include <stdio.h>

int check_bit(unsigned x, int pos) {
  pos -= 1;
  printf("%u测试", x >> pos);
  return (x >> pos) & 1U;
}

unsigned set_n(unsigned x, int pos, int n) {
 int i = 1, ret = 0;

 for(; i < pos; i++) {
   i *= 2;
 }

 for(i = 0; i < n; i++) {
   printf("%d", check_bit(x, pos++));
   if(check_bit(x, pos++) == 0)
     ret += i * (i + 1);
 }

 return ret;
}

int main(void) {
  unsigned nx, ret;
  int pos, n;

  printf("请输入一个非负整数: ");
  scanf("%u", &nx);

  printf("请输入位置: ");
  scanf("%d", &pos);

  printf("请输入位数: ");
  scanf("%d", &n);

  ret = set_n(nx, pos, n) + nx;

  printf("最后的结果是: %u", ret);

  return 0;
}