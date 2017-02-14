#include <stdio.h>

#define NUMBER 5

// 交换x和y指向的整数值
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

// 将 sx 和 sy 指向的字符串进行交换
void swaps(char sx[], char sy[]) {
  char temp[256];

  strcpy(temp, sx);
  strcpy(sy, sx);
  strcpy(sx, temp);
}

// 对数组data和name的前n个元素进行升序排列
void sort(int data[], char name[][20], int n) {
  int k = n - 1;
  while(k >= 0) {
    int i, j;
    for(i = 1, j = 1; i <= k; i++) {
      if(data[i - 1] > data[i]) {
        j = i - 1;
        swap(&data[i], &data[j]);
        swaps(name[i], name[j]);
      }
    }
    k = j;
  }
}

int main(void) {
  int i;
  int height[] = {178, 175, 173, 165, 179};
  char name[][20] = {"Sato", "Sanaka", "Takao", "Mike", "Masaki"};

  sort(height, name, NUMBER);

  for(i = 0; i < NUMBER; i++) {
    printf("%2d: %-8s%3d\n", i + 1, name[i], height[i]);
  }
  
  return 0;
}