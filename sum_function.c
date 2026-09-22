#include <stdio.h>

void sum(int begin,int end) {
    int sum = 0;
    for(int i = begin;i<=end;i++) {
        sum+=i;
    }
    printf("从%d到%d的和为:%d\n",begin,end,sum);
}

    int main() {
        sum(1, 10);
        sum(25,35);
        return 0;
    }
