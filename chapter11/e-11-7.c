#include <stdio.h>


// 需要展示代表这个指针表示的值时不带*
// 需要对指针具体指向的位置所对应的值进行操作的时候需要加上*

// 带上*表示是其所指对象的别名，事实上就代表了别名的具体内容
// 不带上*表示指针

char *str_copy(char *d, const char *s) {
  char *t = d;  // d展示的是字符, t是指向这个字符的指针

  while((*d++ = *s++)) {}   // 遍历进行赋值
  
  return t;
}

int main(void) {
  char s1[100] = "ABCD";
  char s2[100] = "EFGH";

  printf("字符串s1: ");
  scanf("%s", s1);    // s1即指向字符型变量的指针

  str_copy(s2, s1);

  puts("s1复制到了s2. ");
  printf("s1 = %s\n", s1);
  printf("s2 = %s\n", s2);

  return 0;
}