#include <math.h>
#include <stdio.h>

#define sqr(x) ((x) * (x))

// 结构体的成员不限于基本的int型或double型
// 也可以是结构体, 数组类型或枚举类型

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  double fuel;
  point pt;
} car;

void put_info(car c) {
  printf("当期位置: (%d, %d)\n", c.pt.x, c.pt.y);
  printf("剩余燃料: %.2f 升\n", c.fuel);
}

int move(car *c, int dx, int dy) {
  double dist = sqrt(sqr(dx) + sqr(dy));

  if(dist > c->fuel) {
    return 0;
  }
  c->pt.x += dx;
  c->pt.y += dy;
  c->fuel -= dist;

  return 1;
}

int main(void) {
  car mycar = {90.0, {0, 0}};

  while(1) {
    int slct;
    int dx, dy;

    put_info(mycar);
    printf("开动骑车吗【Yes...1/No...0】");
    scanf("%d", &slct);
    if(slct != 1) break;
    printf("X方向的行驶距离: "); 
    scanf("%d", &dx);
    printf("Y方向的行驶距离: ");
    scanf("%d", &dy);

    if(!move(&mycar, dx, dy)) {
      puts("\a燃料不足无法行驶.");
    }
  }

  return 0;
}