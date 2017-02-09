#include <stdio.h>

void del_digit(char str[]) {
  unsigned i = 0, j;
  char ns[] = "";

  while(str[i]) {
    if(!(str[i] >= '0' && str[i] <= '9')) {
      str[j++] = str[i];
    } 
    i++;
  }

  str[j] = '\0';
}

int main(void) {
  char str[40];

  printf("请输入字符串: ");
  scanf("%s", str);

  del_digit(str);

  printf("%s\n", str);

  return 0;
}