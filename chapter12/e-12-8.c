#include <stdio.h>

#define NUMBER 5

// 根据结构体中对象的身高来进行冒泡排序

typedef struct {
  char name[20];
  int height;
  float weight;
  long schols;
} student;

void swap(student *x, student *y) {
  student temp = *x;
  *x = *y;
  *y = temp;
}

void sort(student data[], int n) {
  int k = n - 1;
  while(k >= 0) {
    int i, j;
    for(i = 1, j = -1; i <= k; i++) {     // 这里i的初始值为1,可以很好的结束循环
      if(data[i - 1].height > data[i].height) {
        j = i - 1;                        // j用以表示还未进行排序的个数
        swap(&data[i - 1], &data[i]);
      }
    }
    k = j;
  }
}

int main(void) {
  int i;
  student std[] = {
    {"Sato", 178, 61.0, 80000},
    {"Sanaka", 175, 60.5, 70000},
    {"Takao", 173, 80.0, 0},
    {"Mike", 165, 72.0, 70000},
    {"Masaki", 179, 77.5, 70000}
  };

  sort(std, NUMBER);

  puts("------------------------");
  for(i = 0; i < NUMBER; i++) {
    printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
  }

  return 0;
}