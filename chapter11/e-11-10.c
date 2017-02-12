#include <stdio.h>

char *strcpy(char *s1, const char *s2) {
  char *tmp = s1;

  while((*s1++ = *s2++)) 
    ;
  
  return tmp;
}

int main(void) {
  char str1[100], str2[100];

  printf("请输入字符1: ");
  scanf("%s", str1);

  printf("请输入字符2: ");
  scanf("%s", str2);

  printf("%s\n", strcpy(str1, str2));

  return 0;
}