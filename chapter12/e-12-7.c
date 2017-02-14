#include <stdio.h>

struct xyz {
  int mx;
  long my;
  double mz;
};

struct xyz set_xyz(int x, long y, double z) {
  struct xyz temp;

  temp.mx = x;
  temp.my = y;
  temp.mz = z;

  return temp;
}

int main(void) {
  struct xyz xyz = {0, 0, 0};

  xyz = set_xyz(10, 320, 35.6);

  printf("xyz.mx = %d\n", xyz.mx);
  printf("xyz.my = %ld\n", xyz.my);
  printf("xyz.mz = %lf\n", xyz.mz);

  return 0;
}