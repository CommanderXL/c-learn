#include <stdio.h>

// 将第二个字符复制到第一个值的末尾

char *strcat(char *s1, const char *s2) {
  char *tmp = s1;

  while(*s1) s1++;  // 指针进行移动, 而非*s++是获取的字符串的别名
  while((*s1++ = *s2++))
    ;

  return tmp;
}

int main(void) {
  char str1[100], str2[100];

  printf("请输入第一个字符: ");
  scanf("%s", str1);

  printf("请输入第二个字符: ");
  scanf("%s", str2);


  printf("%s\n", strcat(str1, str2));

  return 0;
}