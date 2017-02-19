#include <stdio.h>
#define MAXLINE 1000

// 编写一个程序, 删除每个输入行末尾的空格及制表符,并删除完全是空格的行

int getLine(char str[], int max);

int main(void) {
  int i, len;
  char str[MAXLINE];
  while((len = getLine(str, MAXLINE)) >= 0) {
    printf("长度为: %d\n", len);
  }

  return 0;
}

int getLine(char s[], int m) {
  int i = 0, c;
  for(; i < m - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  /*if(c == '\n') {
    s[i] = c;
  }*/

  --i;  // i表示数组一共的位数

  while(i >= 0) {
    if(s[i] == '\t' || s[i] == ' ') {
      s[i] = '\0';
      i--;
    } else {
      break;
    }
  }

  ++i;  // 长度加1

  return i;
}