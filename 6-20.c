#include <stdio.h>

int main(void) {
    static int arr[5];

    int i = 0;
    for(; i < 5; i++) {
        printf("%d", arr[i]);
    }
    
    return (0);
}