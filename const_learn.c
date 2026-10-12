#include <stdio.h>
int main()
{
    int a = 10;
    int b = 15;
    const int * p = &a;
    p = &b;
    //用const声明的，不可以使用解引用指针的方式修改指针所指向的值
    //*p = 20;
    int * q = &a;
    *q = 20;
    //const放在中间，不可以重新为指针赋值，但是可以修改指针所指向的值
    //p = &b;

}