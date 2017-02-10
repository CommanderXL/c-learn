#include <stdio.h>

//#define MONTH {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

int isFeb(int m) {
  return m == 2;
}

int isLeapYear(int year) {
  // 整百的能被400整除
  // 非整百的能被4整除
  return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

void yesterday(int *y, int *m, int *d) {
  int min = 1, max;
  int MONTH[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  MONTH[1] = isLeapYear(*y) ? 29 : 28;

  max = MONTH[*m - 1];

  // 对二月份的判断
  /*if(isFeb(*m)) {
    max = isLeapYear(*y) ? 29 : 28;
  } else {
    max = MONTH[*m + 1];
  }*/

  if(min < *d  && *d< max) {
    *d = *d - 1;
    //printf("昨天的日期是: %d年%d月%d日.", *y, *m, *d - 1);
  }

  if(min == *d) {
    if(*m == min) {
      *m = 12;
      *y = *y - 1;
    } else {
      *m = *m - 1;
    }
    *d = MONTH[*m - 1];
  }

  //printf("昨天的日期是: %d年%d月%d日." *y, *m, *d);
}

void tomorrow(int *y, int *m, int *d) {
  
}

int main(void) {
  int year, month, day;

  printf("请输入年份: ");
  scanf("%d", &year);

  printf("请输入月份: ");
  scanf("%d", &month);

  printf("请输入日期: ");
  scanf("%d", &day);

  yesterday(&year, &month, &day);
  printf("昨天是%d年%d月%d日\n", year, month, day);

  //tomorrow(&year, &month, &day);
  //printf("明天是%d年%d月%d日", year, month, day);

  return 0;
}