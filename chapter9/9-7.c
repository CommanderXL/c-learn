#include <stdio.h>

int get_str_len(const char str[]) {
  unsigned i = 0;

  while(str[i]) {
    i++;
  }

  return i;
}

void put_rstring(const char str[]) {
  char rStr[100];
  int i, len = get_str_len(str);

  for(i = (len - 1); i >= 0; i--) {
    rStr[len - 1 - i] = str[i];
  }

  i = 0;
  while(rStr[i]) {
    putchar(rStr[i++]);
  }
  putchar('\n');
}

int main(void) {
  char str[100];

  printf("请输入字符串: ");
  scanf("%s", str);

  put_rstring(str);

  return 0;
}

