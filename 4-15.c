#include <stdio.h>

int main (void) {
    int i, j;
    for(i = 0; i <= 9; i++) {
        if(i != 0) {
            printf("%3d|", i);
        } 
        for(j = 0; j <= 9; j++) {
            if(i == 0 ){
                if(j == 0) {
                    printf("   |");
                } else {
                    printf("%3d", j);
                }
            } else {
                if( j != 0) {
                    printf("%3d", i * j);
                }
            }
        }
        putchar('\n');
    }
}
