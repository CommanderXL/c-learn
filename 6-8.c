#include <stdio.h>

void put_nchar(char ch, int no) {
    while(no-- > 0) {
        putchar(ch);
    }
}

int main (void) {
    int i, ln;

    printf("三角形有几层:");
    scanf("%d", &ln);

    for(i = 1; i <= ln; i++){
        put_nchar(' ', ln - i);
        put_nchar('*', i);
        putchar('\n');
    }
    return (0);
}
