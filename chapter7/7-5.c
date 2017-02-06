#include <stdio.h>

// 返回在整数x中设置为1的位数
int count_bits(unsigned x) {
  int count = 0;
  while (x) {
    if(x & 1U) count++;
    x >>= 1;    // x = x >> 1;  x向右移动一位
  }
  return count;
}

// 返回unsigned型的位数
// 即这个编译器每个字节所表示的位数
int int_bits(void) {
  return count_bits(~0U);
}

// 显示unsigned型位串内容
void print_bits(unsigned x) {
  int i;
  for(i = int_bits() - 1; i >= 0; i--) {  // 循环的次数,用以输出位串的内容
    putchar(((x >> i) & 1U) ? '1' : '0');
  }
}

int main(void) {
  unsigned nx;

  printf("请输入一个非负整数:");
  scanf("%u", &nx);

  print_bits(nx);
  putchar('\n');

  return 0;
}