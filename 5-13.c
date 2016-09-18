#include <stdio.h>
#define NUMBER 80    //学生人数

int main(void) {
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("请输入学生的人数");
    do {
        scanf("%d", &num);
        if(num < 1 || num > NUMBER)
            printf("\a人数的范围[1 到 %d]", NUMBER);
    } while(num < 1 || num > NUMBER);

    puts("请输入学生的分数.");
    for(i = 0; i < num; i++) {
        printf("%2d 号", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if(tensu[i] < 0 || tensu[i] > 100) {
                printf("\a分数范围是[0 到 100]");
            }
        } while(tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("分布图");
    puts("------");
    for(j = 0; j < bunpu[10]; j++) {
        putchar('*');
    }
    putchar('\n');
    
    for(i = 9; i >= 0; i--) {
        printf("%3d - %3d: ", i * 10, i * 10 + 9);
        for(j = 0; j < bunpu[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return (0);
}