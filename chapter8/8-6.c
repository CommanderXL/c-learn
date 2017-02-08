#include <stdio.h>

// 递归终究是有归的条件
// 如果待处理的问题，函数或者数据结构已经具有递归定义，那么就可以使用递归算法

int combination(int n, int r) {
  if(r == n || r == 0) return 1;

  return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void) {
  int nx, ny;

  printf("请输入n个不同的整数: ");
  scanf("%d", &nx);

  printf("请输入需要取出的r个数: ");
  scanf("%d", &ny);

  printf("从%d个不同的整数中取出%d个整数的组合数是: %d\n", nx, ny, combination(nx, ny));
}