#include <stdio.h>

void put_string(const char str[]) {
  unsigned i = 0;

  while(str[i]) {
    printf("%c\n", str[i++]);
  }
}

int main(void) {
  char str[100];

  printf("请输入一个字符串: ");
  scanf("%s", str);

  put_string(str);

  return 0;
}