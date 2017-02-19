#include <stdio.h>
#define MAXLINE 1000

// 编写一个打印长度大于10个字符的所有输入行

int getLLine(char str[], int max) {
  int c, i;

  for(i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    str[i] = c;
  }
  if(c == '\n') {
    str[i] = c;
    ++i;
  }
  str[i] = '\0';

  return i;
}


int main(void) {
  int c;
  int len;
  char line[MAXLINE];

  while((len = getLLine(line, MAXLINE)) > 0) {
    if(len > 10) {
      printf("%s", line);
    }
  }

  return 0;
}

