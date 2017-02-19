#include <stdio.h>

int main() {
  int strArr[26] = {0};
  int c;

  while((c = getchar()) != EOF) {
    if(c >= 'a' && c <= 'z') {
      ++strArr[c - 'a'];
    }
  }

  for(int i = 0; i < 26; i++) {
    for(int j = 0; j < strArr[i]; j++) {
      printf("*");
    }
    putchar('\n');
  }

  return 0;
}