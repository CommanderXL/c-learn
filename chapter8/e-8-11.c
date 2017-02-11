#include <stdio.h>

int main(void) {
  int ch;

  while ((ch = getchar()) != EOF) {
    printf("%c", ch);
    //putchar(ch);
  }

 /* do {
    ch = getchar();
    printf("ch = %d\n", ch);
  } while (ch != EOF);*/
  
  return 0;
}