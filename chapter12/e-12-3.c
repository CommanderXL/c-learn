#include <stdio.h>
#include <string.h>

struct gstudent {
  char name[20];  // 姓名
  int height;     // 身高
  float weight;   // 体重
  long schols;    // 奖学金
};

int main(void) {
  struct gstudent sanaka;

  strcpy(sanaka.name, "Sanaka");
  sanaka.height = 175;
  sanaka.weight = 60.5;
  sanaka.schols = 70000;

  printf("姓名 = %s\n", sanaka.name);
  printf("身高 = %d\n", sanaka.height);
  printf("体重 = %f\n", sanaka.weight);
  printf("奖学金 = %ld\n", sanaka.schols);

  return 0;
}
