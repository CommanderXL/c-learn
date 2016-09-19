#include <stdio.h>

int main(void) {
    int i, no;
    int prime[500];                 //用来保存质数的数组
    int prt = 0;                    //已经得到质数的个数
    unsigned long counter = 0;

    prime[prt++] = 2;               //2是质数
    prime[prt++] = 3;               //3是质数

    for(no = 5; no <= 1000; no+=2) {    //只把奇数当做判断对象
        for(i = 1; i < prt; i++) {  //从奇数开始，那么内部循环也是从奇数开始
            counter++;
            if(no % prime[i] == 0) {    //能被整除的不是质数
                break;                  //退出上述循环
            }
        }
        if(prt == i) {                  //直到最后也未被整除
            prime[prt++] = no;          //添加到数组当中
        }
    }

    printf("乘除运算的次数: %lu\n", counter);

    return (0);
}