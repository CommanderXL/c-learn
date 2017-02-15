#include <stdlib.h>
#include <stdio.h>

// '\n'单引号在c中实际上为一个数字，对应于ascii码

int main(void) {
  int len = 0, ch;
  char fname[100];
  FILE *fp;

  printf("请输入文件名称: ");
  scanf("%s", fname);

  if((fp = fopen(fname, "r")) == NULL) {
    puts("\a文件打开失败.\n");
  } else {
    while((ch = fgetc(fp)) != EOF) {
      if(ch == '\n') {
        ++len;
      }
    }
    printf("文件的行数为: %d\n", len);
    fclose(fp);
  }

  return 0;
}