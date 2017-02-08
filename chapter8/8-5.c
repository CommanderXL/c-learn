#include <stdio.h>


// 不是用递归去求一个整数n的阶乘

int fact(int n) {
  int num = 1;

  while(--n >= 1) {
    printf("%d", n);
    num *= n;
  }

  return num;
}

int main(void) {
  int nx;

  printf("请输入一个整数: ");
  scanf("%d", &nx);

  printf("最后的值是: %d", fact(nx));

  return 0;
}