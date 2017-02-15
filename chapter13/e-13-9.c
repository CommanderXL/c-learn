#include <stdio.h>

// fwrite 用于二进制文件的写入
// fread 用于二进制文件的读取

int main(void) {
  FILE *fp;

  double pi;
  
  if((fp = fopen("PI.bin", "wb")) == NULL) {
    printf("\a文件打开失败.\n");
  } else {
    fwrite(&pi, sizeof(double), 1, fp);
    fclose(fp);
  }

  if((fp = fopen("PI.bin", "rb")) == NULL) {
    printf("\a文件打开失败.\n");
  } else {
    fread(&pi, sizeof(double), 1, fp);
    printf("圆周率是%23.31f\n", pi);
    fclose(fp);
  }

  return 0;
}