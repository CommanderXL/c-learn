#include <stdio.h>

// 比较s1指向的字符串和s2指向的字符串的前n个字符的大小关系
int strncmp(const char *s1, const char *s2, size_t n) {
  while(n && *s1 && *s2) {
    if(*s1 != *s2) {
      return ((unsigned char)*s1 - (unsigned char)*s2);
    }
    s1++; // 进行指针的移动
    s2++;
    n--;
  }  
}

int main(void) {
  char str1[100], str2[100];
  int n;

  printf("请输入第一个字符: ");
  scanf("%d", str1);

  printf("请输入第二个字符: ");
  scanf("%d", str2);

  printf("请输入需要比较的位数: ");
  scanf("%d", &n);

  printf("2个字符前%d个字符比较的大小值为: %d", n, strncmp(str1, str2, n));
}