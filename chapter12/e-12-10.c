#include <math.h>
#include <stdio.h>

#define sqr(x) ((x) * (x))

typedef struct {
  int x;
  int y;
} point;

double distanceof(point pa, point pb) {
  return (sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y)));
}

int main(void) {
  point p1, p2;
  printf("点1的X坐标: "); 
  scanf("%d", &p1.x);
  printf("点1的Y坐标: ");
  scanf("%d", &p1.y);
  printf("点2的X坐标: ");
  scanf("%d", &p2.x);
  printf("点2的Y坐标: ");
  scanf("%d", &p2.y);

  printf("两点之间的距离为: %.2f. \n", distanceof(p1, p2));

  return 0;
}