#include <stdio.h>

//定义的函数式宏
//编译时展开并填入程序,可计算int、double、long型整数
#define sqr(x) (x * x)

#define alert() putchar('\n')

//对象式宏
//#define SQR (x)(x * x)


int main(void) {
    int nx;
    double dx;

    printf("请输入一个整数");
    scanf("%d", &nx);
    printf("该数的平方是: %d \n", sqr(nx));

    printf("请输入一个实数");
    scanf("%lf", &dx);
    printf("该数的平方是: %f \n", sqr(dx));

    alert();


    return (0);
}