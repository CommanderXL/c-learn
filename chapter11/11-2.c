#include <stdio.h>

char *str_chr(char *str, int c) {
  //char *d = str;
  while(*str++) {
    if(*str == c) {
      return str;
    }
  }
  putchar('\n');

  return NULL;
}

int main(void) {
  char str[100];
  char s[1];
  printf("请输入字符: ");
  scanf("%s", str);

  printf("需要判断的字符: ");
  scanf("%s", s);

  str_chr(str, s[0]);

  return 0;
}