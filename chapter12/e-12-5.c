#include <stdio.h>

struct gstudent {
  char name[20];
  int height;
  float weight;
  long schols;
};

// 通过指针来访问结构体中的成员的写法
void hiroko(struct gstudent *std) {
  if(std->height < 180) std->height = 180;
  if(std->weight > 80) std->weight = 80;
}

int main(void) {
  struct gstudent sanaka = {"Sanaka", 175, 60.5, 70000};

  hiroko(&sanaka);

  printf("姓名 = %s\n", sanaka.name);
  printf("身高 = %d\n", sanaka.height);
  printf("体重 = %f\n", sanaka.weight);
  printf("奖学金 = %ld\n", sanaka.schols);

  return 0;
}
