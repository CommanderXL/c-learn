#include <stdio.h>

void swap(int *nx, int *ny) {
  int temp = *nx;
  *nx = *ny;
  *ny = temp;
}

int main(void) {
  int na, nb;
  puts("请输入2个整数");

  printf("整数A: "); scanf("%d", &na);
  printf("整数B: "); scanf("%d", &nb);

  swap(&na, &nb);

  puts("互换了两数的值. ");
  printf("整数A的是%d. \n", na);
  printf("整数B的是%d. \n", nb);

  return 0;
}