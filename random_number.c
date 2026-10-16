#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //设置随机数种子
    srand(time(NULL));
    //伪随机数
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", rand() % 100);
    }
    return 0;
}