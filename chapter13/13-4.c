#include <stdio.h>

typedef struct {
  char name[100];
  double height;
  double weight;
} person;

int main(void) {
  person std;
  FILE *fp;

  puts("输入用户的名称: ");
  scanf("%s", std.name);
  puts("输入用户的身高: ");
  scanf("%lf", &std.height);
  puts("输入用户的体重: ");
  scanf("%lf", &std.weight);

  if((fp = fopen("./time.txt", "w")) == NULL) {
    puts("打开文件失败");
  } else {
    printf("写入用户的名称/身高/体重. \n");
    fprintf(fp, "%-6s / %5.1lf / %5.1lf ", std.name, std.height, std.weight);
  }

  fclose(fp);

  return 0;
}