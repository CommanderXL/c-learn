#include <stdio.h>
#include <stdlib.h>

// atof() ===>>> 转化为浮点型
// atoi() ===>>> 转化为整形

int main(void) {
  char str[] = "4.92";

  printf("str = %s\n", str);
  printf("atoi(str) = %f\n", atof(str));

  return 0;
}