#include <stdio.h>


// 将输入复制到输出的程序, 并将其中连续多个空格用一个空格代替
int main() {
  int str;
  int flag = 0;

  while((str = getchar()) != EOF) {
    if(str == ' ') {
      if(flag == 0) {
        putchar(' ');
      }
      ++flag;
    } 
    
    if(str != ' ') {
      putchar(str);
      flag = 0;
    }
  }

  putchar('\n');

  return 0;
}