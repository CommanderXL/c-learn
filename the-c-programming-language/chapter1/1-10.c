#include <stdio.h>


// 将输入复制到输出的程序, 并将其中的制表符替换为\t。把回退符替换为\b,把反斜杠替换为\\
// 这样讲制表符和回退符已可见的方式显示出来

int main() {
  int c;

  while((c = getchar()) != EOF) {
    if(c == '\t') {
      printf("\\t");
    } else if(c == '\\') {
      putchar('\\');
    } else {
      putchar(c);
    }
  }

  return 0;
}