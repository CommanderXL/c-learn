#include <stdio.h>

void leftCheck(unsigned x, int y, int flag) {
    int k;
    k = x;
    char or;
    if(flag) {
        x <<= y;
    for(int i = 0; i < y; i++) {
            k *= 2;
        }

    } else {
        x >>= y;
        for(int i = 0; i < y; i++) {
            y /= 2;
        }
    }
    

    printf("无符号整数位移后的值等于乘以2的指数幂后的值：%u, %u\n",  x , k);
}




int main(void) {
    unsigned x;
    int y;
    int flag;
    printf("请输入一个无符号的整数\n");
    scanf("%u", &x);

    printf("请输入左移位数\n");
    scanf("%d", &y);

    printf("向左移动请输入1\n向右移动请输入0\n");
    scanf("%d", &flag);

    leftCheck(x, y, flag);
}