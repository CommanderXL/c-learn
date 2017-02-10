#include <stdio.h>

int main(void) {
  int sato = 178;
  int sanaka = 175;
  int hiraki = 165;
  int masaki = 179;

  // 指向int型变量的指针变量, 它们指向的是int型变量
  int *isako, *hiroko;

  isako = &sato;
  hiroko = &masaki;

  printf("伊莎子喜欢的人的身高: %d\n", *isako);
  printf("洋子喜欢的人的身高: %d\n", *hiroko);

  isako = &sanaka;

  *hiroko = 180;

  putchar('\n');
  printf("佐藤的身高: %d\n", sato);
  printf("左中的身高: %d\n", sanaka);
  printf("平木的身高: %d\n", hiraki);
  printf("真崎的身高: %d\n", masaki);
  printf("伊莎子喜欢的人的身高: %d\n", *isako);
  printf("洋子喜欢的人的身高: %d\n", *hiroko);

  return 0;
}