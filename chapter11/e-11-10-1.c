#include <stdio.h>

char *strncpy(char *s1, const char *s2, size_t n) {
  char *tmp = s1;

  while(n) {
    if(!(*s1++ = *s2++)) break;   // 如果s2的长度小于n,那么遇到结尾符号即结束
    n--;                          // 如果s2的长度大于n,那么将会一直进行赋值
  }

  while(n--) {                    // 多余的位数通过\0来进行保存
    *s1++ = '\0';
  }

  return tmp;
}

int main(void) {
  char str1[100], str2[100];
  int num;

  printf("请输入第一个字符: ");
  scanf("%s", str1);

  printf("请输入第二个字符: ");
  scanf("%s", str2);

  printf("请输入需要赋值的位数: ");
  scanf("%d", &num);

  printf("%s\n", strncpy(str1, str2, num));
}