#include <stdio.h>

// fgetc(FILE *stream) 从文件流中读取数据
// getchar() 从标准输入流中读取数据
// getchar()  --->>> fgetc(stdin);

int main(void) {
  int ch;
  FILE *fp;
  char fname[64];
  int i = 0;

  printf("文件名: ");
  scanf("%s", fname);

  if((fp = fopen(fname, "r")) == NULL) {
    printf("\a打开文件失败.\n");
  } else {
    while((ch = fgetc(fp)) != EOF) {
      putchar(ch);
      i++;
    }
    putchar('\n');
    printf("i的值为%d\n", i);
    fclose(fp);
  }

  return 0;
}
