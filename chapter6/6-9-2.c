#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(int vc[], int key, int no) {
  int i;
  vc[no] = key;

  while(1) {
    if(vc[i] == key) break;
    i++;
  }

  return i == no ? FAILED : i;
}

int main(void) {
  int i, key, idx;
  int vc[NUMBER];

  for(i = 0; i < NUMBER; i++) {
    printf("vc[%d]", i);
    scanf("%d", &vc[i]);
  }

  printf("请输入想要查找的值: ");
  scanf("%d", &key);

  idx = search(vc, key, NUMBER);  

  if(idx == FAILED) {
    printf("\a 查找失败");
  } else {
    printf("%d 是数组的第 %d 号元素\n", key, idx + 1);
  }

  return 0;
}