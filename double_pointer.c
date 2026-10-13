#include <stdio.h>
#include <stdlib.h>

void fun(int** temp)
{
    *temp = (int*)malloc(sizeof(int));
    **temp = 100;
}

int main(int argc, char const *argv[])
{
    int* p = NULL;
    fun(&p);
    printf("%d\n", *p);
    return 0;
}