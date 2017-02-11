#include <stdio.h>

#define MAX(x,y) (x > y ? x : y)

void sort3(int *n1, int *n2, int *n3) {
  //*n3 = MAX(*n1, MAX(*n2, *n3));
  int n1, n2;

  n1 = swap(n1, n2);

  if(!n1) {
    n2 = swap(n2, n3);
    if(n2) {

    } else {

    }
  } else {
    n2 = swap(n1, n3);
    if(n2) {

    } else {

    }
  }
}

int swap(int *x, int *y) {
  int temp;
  if(*x < *y) {
    return 0;
  } else {
    temp = *y;
    *y = *x;
    *x = temp;
    return 1;
  }
}

int main(void) {
  int x, y, z;

  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  sort3(&x, &y, &z);

  return 0;
}