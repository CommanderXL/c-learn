#include <stdio.h>

int main() {
  int len = 0, c;

  while((c = getchar()) != EOF) {
    if(c == '\n') {
      ++len;
    }
  }

  printf("输入的行数是: %d\n", len);

  return 0;
}