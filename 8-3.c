#include <stdio.h>

//定义多行函数式宏的写法
#define swap(x, y) do\
{\
    x=x+y;\
    y=x-y;\
    x=x-y;\
    printf("交换后的数字x为: %d, y为%d", x, y);\
} while(0)

int main (void) {
    int i = 1, j = 7;
    swap(i, j);
    return (0);
}