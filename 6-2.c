#include <stdio.h>

int maxof (int x, int y, int z) {
    int max = x;
    if(y > max) max = y;
    if(z > max) max = z;
    return (max);
}

int main(void) {
    int x, y, z;
    puts("请输入3个数值");

    printf("请输入x的值"); scanf("%d", &x);
    printf("请输入y的值"); scanf("%d", &y);
    printf("请输入z的值"); scanf("%d", &z);

    printf("3个值的最大的值是: %d\n", maxof(x, y, z));
    
    return (0);
}