#include <stdio.h>

int scan_unit(void) {
    int temp;

    do {
        printf("请输入一个非负整数");
        scanf("%d", &temp);
        if(temp < 0)
            printf("请输入一个非负整数");
    } while(temp < 0);
    return (temp);
}

int rev_int(int num) {
    int temp = 0;

    if(num > 0) {
        do {
            temp = temp * 10 + num % 10;
            num /= 10;
        } while(num > 0);
    }
    return (temp);
}

int main(void) {
    int nx = scan_unit();

    printf("该整数倒转后的值是: %d\n", rev_int(nx));

    return (0);
}