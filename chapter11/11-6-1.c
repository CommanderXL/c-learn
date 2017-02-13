#include <stdio.h>
#include <string.h>
#include <math.h>

int strtoi(const char *nptr) {
  unsigned int num = 0;
  unsigned int len = strlen(nptr);

  while(*nptr) {
    if('1' <= *nptr && *nptr <= '9') {
      num += (*nptr - 48) * (pow(10, --len));
    }
    nptr++;
  }

  return num;
}

int main(void) {
  char str[100];

  printf("请输入需要转化的字符: ");
  scanf("%s", str);

  printf("转换后的字符为: %d\n", strtoi(str));

  return 0;
}