#include <stdio.h>


void highest(const int vc[5][3]){
  int arr[3];
  int i, j;
  int max;

  for(j = 0; j < 3; j++) {
    max = vc[0][j];
    for(i = 0; i < 5; i++) {
      if(max < vc[i][j]) 
        max = vc[i][j];
    }
    arr[j] = max;
  }

  for(i = 0; i < 3; i++) {
    printf("每一门的最高分是%3d\n", arr[i]);
  }
}

void average(const int vc[5][3]) {
  double arr[5];
  int i, j;
  double total, point;

  for(i = 0; i < 5; i++) {
    total = 0;
    for(j = 0; j < 3; j++) {
      total += vc[i][j];
    }
    arr[i] = total/3;
  }

  for(i = 0; i < 5; i++) {
    printf("第%d位同学的平均分是%.2f\n", i + 1, arr[i]);
  }
}

int main(void) {
  int vc[5][3];
  int i, j;

  for(i = 0; i < 5; i++) {
    for(j = 0; j < 3; j++) {
      printf("%3d号同学科目%d: ", i + 1, j + 1);
      scanf("%d", &vc[i][j]);
    }
  }

  // 输出最高分
  highest(vc);

  // 输出平均分
  average(vc);

  return 0;
}