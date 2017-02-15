#include <stdio.h>

// 如果不符合format的类型的数据为空格或者tab时，则会使文件指针指向下一个数据
// 如果不符合format的类型数据不为空格或者tab时，fscanf将匹配到的符合特定格式的数据赋给地址后不再往下读取
// fscanf以行为单位进行读取

int main(void) {
  FILE *fp;
  int ninzu = 0;
  char name[100];
  double height, weight;
  double hsum = 0.0;
  double wsum = 0.0;

  if((fp = fopen("./data.txt", "r")) == NULL) {
    printf("\a文件打开失败.\n");
  } else {
    int num = fscanf(fp, "%s%lf%lf", name, &height, &weight);
    if(num == 3) {
      puts("something error");
    } else if(num == 1) {
      printf("%s", name);
    } else {
      printf("%s\n", name);
      printf("%lf\n", height);
    }
    /*while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
      printf("%-10s %5.1f %5.1f\n", name, height, weight);
      ninzu++;
      hsum += height;
      wsum += weight;
    } 
    printf("----------------------\n");
    printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
    fclose(fp);*/
  }

  return 0;
}