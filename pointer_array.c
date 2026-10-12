#include <stdio.h>
int main()
{
    //指针数组，数组中的值都是指针变量
    int *p[3];
    int a = 10, b = 20, c = 30;
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *p[i]);
    }
    return 0;
}