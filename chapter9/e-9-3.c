#include <stdio.h>

// 长度显示正确, 但是字符串的内容未发生截取???

int main(void) {
  char name[6];

  printf("请输入您的名字: ");
  scanf("%s", name);

  printf("您的名字长度是 %u\n", (unsigned)sizeof(name));

  printf("您好, %s 先生/女士 !!\n", name);

  return 0;
}