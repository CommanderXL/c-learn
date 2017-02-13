#include <stdio.h>

int strcmp(const char *s1, const char *s2) {
  while(*s1 == *s2) {
    if(*s1 == '\0')
      return 0;
    
    s1++;   // 对指针进行偏移
    s2++;
  }

  // 做类型的强制变换
  return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main(void) {
  char str1[100], str2[100];


  printf("请输入第一个字符: ");
  scanf("%s", str1);

  printf("请输入第二个字符: ");
  scanf("%s", str2);

  printf("最后比较的结果是: %d\n", strcmp(str1, str2)); 

  return 0;
}