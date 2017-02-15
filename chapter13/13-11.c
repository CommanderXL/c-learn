#include <stdio.h>
#include <ctype.h>

// int isprint(int c); 判断是否为ASCII码中可打印的字符. 大于0x1f的才能打印


int main(void) {
  int n;
  unsigned long count = 0;
  unsigned char buf[16];
  FILE *fp;
  char fname[64];

  printf("文件名称: ");
  scanf("%s", fname);

  if((fp = fopen(fname, "rb")) == NULL) {
    printf("\a文件打开失败.\n");
  } else {
    // fread, 一个字符占一个字节, 因为声明的时候是buf[16]位, 因此需要读取16个占一个字节的字符
    while((n = fread(buf, 1, 16, fp)) > 0) {
      int i;

      printf("%08lX", count);

      // 使用2位的16进制数(字符编码)进行二进制数据的输出
      for(i = 0; i < n; i++) {
        printf("%02X", (unsigned)buf[i]);
      }

      // 如果n返回的长度小于16,那么就使用空格来进行表示
      if(n < 16) {
        for(i = n; i < 16; i++) printf(" ");
      }

      // 将二进制数据用字符格式打印出来
      for(i = 0; i < n; i++) {
        putchar(isprint(buf[i]) ? buf[i] : '.');
      }

      putchar('\n');

      count += 16;
    }
    fclose(fp);
  }
  return 0;
}
