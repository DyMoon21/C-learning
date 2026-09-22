#include <stdio.h>

int main() {
    int i;
    int count[10];
    int x;
    
    for(i=0;i<10;i++) {
        count[i] = 0;
    }

    printf("请输入：");
    scanf("%d", &x);
    while(x!= -1) {
        if(x>=0 && x<10) {
            count[x]++;
        }
        scanf("%d",&x);
    }

    for(i=0;i<10;i++) {
        printf("%d:%d\n",i,count[i]);
    }
}