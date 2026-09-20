#include <stdio.h>

int main() {
    int i=1;
    int j;
    int n=9;
    while (i <= n) {
        j = 1;
        while(j <= i) {
            printf("%d*%d=%d ", i, j, i * j);
            if (i * j < 10) {
                printf("   ");
            }else if(i * j < 100) {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}