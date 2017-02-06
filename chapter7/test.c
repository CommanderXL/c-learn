#include <stdio.h>

int count_bits(unsigned x) {
  int count = 0;
  while(x) {
    if(x & 1U) count++;
    x >>= 1;
  }

  return count;
}

int int_bits(void) {
  return count_bits(~0U);
}

void print_bits(unsigned x) {
  int i;
  for(i = int_bits() - 1; i >= 0; i--) {
    putchar(((x >> i) & 1U) ? '1' : '0');
  }
}

int main(void) {
  unsigned nx;
  
  printf("请输入一个非负整数: ");
  scanf("%u", &nx);

  print_bits(nx);

  return 0;
}
