#include <stdio.h>

// 求2个数的最大公约数算法
// 递归的强大之处在于可以用有限的描述来定义无限的现象.
// 递归即调用了与自身相同的函数

int gcdf(int vx, int vy) {
  return (vy == 0 ? vx : gcdf(vy, vx % vy));
}

int gcd(int va, int vb) {
  return (va > vb ? gcdf(va, vb) : gcdf(vb, va));
} 

int main(void) {
  int n1, n2;

  puts("请输入2个整数");
  printf("整数1: "); 
  scanf("%d", &n1);

  printf("整数2: ");
  scanf("%d", &n2);

  printf("最大公约数是%d. \n", gcd(n1, n2));

  return 0;
}