#include <stdio.h>
#include <string.h>
#include <math.h>

// 将nptr指向的字符串转换成long型表示
// 注意这个地方的数据类型的声明

double strtoi(const char *nptr) {
  double num = 0;
  unsigned int len = strlen(nptr);
  int index = 1, flag = 10;
  int i = 0;

  // 获取小数点出现的位置
  for(; i < len; i++) {
    if(nptr[i] == '.') break;
  }
  index = i;

  // 通过字符串指针对字符进行遍历
  while(*nptr) {
    if('0' <= *nptr && *nptr <= '9') {
      num += (*nptr - 48) * (pow(10, flag == 10 ? --index : -(index++)));
    } 
    if(*nptr == '.') {
      flag = -10;
      index = 1;
    }
    nptr++;
  }
  
  return num;
}

int main(void) {
  char str[100];

  printf("请输入需要转化的字符: ");
  scanf("%s", str);

  printf("转换后的字符为: %lf\n", strtoi(str));

  return 0;
}