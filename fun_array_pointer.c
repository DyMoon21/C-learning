#include <stdio.h>

//调用函数时传入一个数组，此时应传入数组的指针
void print_array(int *arr,int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]);
    print_array(a,len);
    return 0;
}