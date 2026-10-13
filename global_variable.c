#include <stdio.h>

int a = 5;

void fun1()
{
    a++;
    printf("%d\n", a);
}

int main()
{
    a += 2;
    printf("%d\n", a);
    fun1();
    return 0;
}
