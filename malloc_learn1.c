#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    //在栈内存中声明一个变量a
    int a = 5;
    //在堆内存中开辟4字节空间用来存放一个整数
    int* b = (int*)malloc(sizeof(int));
    *b = 50;
    printf("a=%d, b=%d\n", a, *b);
    printf("a_address=%p, b_address=%p\n", &a, b);
    free(b);

    return 0;
}