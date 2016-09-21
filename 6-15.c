#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(int vc[], int key, int no) {
    int i = 0;
    while(1) {
        if(i == no) {
            return FAILED;
        } else if(vc[i] == key){
            return (i);
        }
        i++;
    }
}

int main(void) {
    int i, ky, idx;
    int vx[NUMBER];

    for(i = 0; i < NUMBER; i++) {
        printf("vx[%d]", i);
        scanf("%d", &vx[i]);
    }

    printf("需要查找的值是: ");
    scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);

    if(idx == FAILED) {
        puts("\a查找失败");
    } else {
        printf("%d是数组的第%d号元素。\n", ky, idx + 1);
    }
}