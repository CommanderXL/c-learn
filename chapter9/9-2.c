#include <stdio.h>

int main(void) {
  char str[] = "ABC";

  str[0] = '\0';

  printf("字符串str为:%s。\n", str);
  printf("字符串str长度为: %u\n", (unsigned)sizeof(str));
  //printf("%d", str == " ");

  return 0;
}