#include <stdio.h>

// 编写一个打印EOF值的程序
int main() {
  int c;

  while((c = getchar()) == EOF) {
    printf("EOF的值是%d\n", c);
    break;
  }

  return 0;
}