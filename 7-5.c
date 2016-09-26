#include <stdio.h>

//返回这个每一位都是1的整数的位数
int count_bits(unsigned x) {
    int count = 0;
    while(x) {
        if(x & 1U) count++;
        x >>= 1;
    }
    return (count);
}
//返回unsigned型的位数
int int_bits(void) {
    return (count_bits(~0U));
}

//遍历int_bits()的最后一位，并去1U按位与，如果结果是1的话，就输出1，如果结果是0的话就输出0
void print_bits(unsigned x) {
    int i;
    for(i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}


int main (void) {
    unsigned nx;
    printf("请输入一个非负整数");
    scanf("%u", &nx);
    
    print_bits(nx);
    putchar('\n');

    return (0);
}