#include <stdio.h>

int main (void) {
    int len = 3;
    int height = 3;
    int i = 0;
    while(height > 0) {
        int x = 0,
            y = len - i - 1,
            z = len + i;
        for(; x < (len - i - 1); x++) {
            printf(" ");
        }
        for(; y < (len + i); y++) {
            printf("*");
        }
        for(; z < (2 * len - 1); z++) {
            printf(" ");
        }
        height--;
        i++;
        putchar('\n');
    }
}