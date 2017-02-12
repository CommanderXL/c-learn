#include <stdio.h>

void put_string(char *str) {
  while(*str) {
    putchar(*str++);
  }
  putchar('\n');
}

int main(void) {
  char str[100];

  printf("请输入字符: ");
  scanf("%s", str);

  put_string(str);

  return 0;
}