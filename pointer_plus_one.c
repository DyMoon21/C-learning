#include <stdio.h>
int main()
{
    int a[5]= {1, 2, 3, 4, 5};
    int *p = a;
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}