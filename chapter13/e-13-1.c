#include <stdio.h>

int main(void) {
  FILE *fp;
  char str[100];

  puts("请输入文件名:");
  scanf("%s", str);

  fp = fopen(str, "r");

  if(fp == NULL) {    // 打开失败的时候返回空指针NULL
    printf("\a文件打开失败.\n");
  } else {
    fclose(fp);
    puts("打开文件成功");
  }

  return 0;
}