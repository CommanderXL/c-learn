#include <stdio.h>

#define NUMBER 6

typedef struct {
  char name[100];
  double height;
  double weight;
} person;

void swap(person *x, person *y) {
  person temp = *x;
  *x = *y;
  *y = temp;
}

void sort(person data[], int n) {
  int k = n - 1;
  while(k >= 0) {
    int i, j;
    for(i = 1, j = -1; i <= k; i++) {
      if(data[i - 1].height > data[i].height) {
        j = i - 1;
        swap(&data[i], &data[j]);
      }
    }
    k = j;
  }
}

// 从文件中获取个人信息, 并进行排序

int main(void) {
  person std[5];
  int re, i = 0;

  FILE *fp;

  if((fp = fopen("./data.txt", "r")) == NULL) {
    puts("文件不存在");
  } else {
    while(fscanf(fp, "%s%lf%lf", std[i].name, &std[i].height, &std[i].weight) == 3) {
      i++;
    }
  }
  
  sort(std, NUMBER);

  for(i = 0; i < NUMBER; i++) {
    printf("%-8s%5.1lf%5.1lf\n", std[i].name, std[i].height, std[i].weight);
  }

  fclose(fp);

  return 0;
}