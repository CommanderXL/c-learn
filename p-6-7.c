#include <stdio.h>
#define NUMBER 1000


int min_of(int vc[], int no) {
    int i, temp, j;
    int index = no / 2;
    for(i = 0; i < no; i++) {
        if(i < index) {
            temp = vc[i];
            vc[i] = vc[no - i -1];
            vc[no - i - 1] = temp;
            //printf("倒序后第[%d]个数是[%d]\n", i + 1, vc[i]);
        }
    }

    for(j = 0; j < no; j++) {
        printf("倒序后第[%d]个数是[%d]\n", j + 1, vc[j]);
    }
    return (1);
}

int main(void) {
    int i, len;
    int j;
    //int arr[NUMBER];
    //int arr1[NUMBER];
    
    printf("请输入数组的长度"); scanf("%d", &len);

    int arr[len];
    int arr1[len];


    for(j = 0; j < len; j++) {
        printf("请输入数组第%d个数", j + 1); scanf("%d", &arr[j]);
    }

    //arr1 = min_of(arr, len);

    min_of(arr, len);

    /*for(i = 0; i < len; i++) {
        printf("倒序后的数组第%d个数\n", arr1[i]);
    }*/
    return (0);
}