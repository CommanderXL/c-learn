#include <stdio.h>

typedef struct {
  char name[20];
  int height;
  float weight;
  long schols;
} student;


void hiroko(student *std) {
  if(std->height < 180) std->height = 180;
  if(std->weight > 80) std->weight = 80;
}

int main(void) {
  student sanaka = {"Sanaka", 175, 60.5, 70000};

  // 结构体
  hiroko(&sanaka);

  printf("姓名 = %s\n", sanaka.name);
  printf("身高 = %d\n", sanaka.height);
  printf("体重 = %f\n", sanaka.weight);
  printf("奖学金 = %ld\n", sanaka.schols);

  return 0;
}