#include <stdio.h>

void hiroko(int *height) {
  if(*height < 180)
    *height = 180;
}

int main(void) {
  int sato = 178;
  int sanaka = 175;
  int hiraki = 165;
  int masaki = 179;
  

  hiroko(&hiraki);

  printf("佐藤的身高: %d\n", sato);
  printf("左中的身高: %d\n", sanaka);
  printf("平木的身高: %d\n", hiraki);
  printf("真崎的身高: %d\n", masaki);

  return 0;
}