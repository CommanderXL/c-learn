#include <stdio.h>
#include <string.h>
#include <math.h>

// 将nptr指向的字符串转换成long型表示
// 注意这个地方的数据类型的声明

unsigned long strtoi(const char *nptr) {
  unsigned long int num = 0;
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

  printf("转换后的字符为: %ld\n", strtoi(str));

  return 0;
}