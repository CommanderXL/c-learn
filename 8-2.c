#include <stdio.h>

#define max(x, y) ((x > y) ? (x) : (y))

int main(void) {

    int a;
    int b;
    int c;
    int d;

    printf("请输入a的值:");
    scanf("%d", &a);

    printf("请输入b的值:");
    scanf("%d", &b);

    printf("请输入c的值:");
    scanf("%d", &c);

    printf("请输入d的值:");
    scanf("%d", &d);

    printf("a, b, c, d4个数中最大的是: %d", max(max(a, b), max(c, d)));

    return (0);
}