#include <stdio.h>

#define sqr(x) (x * x)

int main(void) {
  int nx;
  double dx;

  printf("请输入一个整数: ");
  scanf("%d", &nx);
  printf("该数的平方是: %d\n", sqr(nx));

  printf("请输入一个实数: ");
  scanf("%lf", &dx);    //注意这里double类型的格式化处理
  printf("该数的平方是: %f\n", sqr(dx));

  return 0;
}