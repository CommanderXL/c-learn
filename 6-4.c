#include <stdio.h>

double power(double dx, int no) {
    double temp = 1.0;

    //没用使用循环变量i，使得函数更加简洁紧凑
    while(no-- > 0) {
        temp *= dx;
    }

    return (temp);
}

int main (void) {
    int n;
    double x;

    printf("请输入一个整数"); scanf("%d", &n);
    printf("请输入一个实数"); scanf("%lf", &x);

    printf("%.2f的%d次幂是%.2f.\n", x, n, power(x, n));
    return (0);
}