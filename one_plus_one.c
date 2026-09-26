#include <stdio.h>

int main() {
    int ac[] = {1,2,5,6,7};
    int *p = ac;
    printf("p = %p\n",p);
    printf("p+1 = %p",p+1);
    return 0;
}