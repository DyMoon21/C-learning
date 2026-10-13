#include <stdio.h>

void fun1()
{
    int a = 5;
    printf("%d\n", a);
    a++;
}

void fun2()
{
    static int a = 5;
    printf("%d\n", a);
    a++;
}

int main()
{
    fun1();
    fun1();
    fun2();
    fun2();
    return 0;
}