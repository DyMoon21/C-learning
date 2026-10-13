#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int* arr = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    char* str = (char*)malloc(sizeof(char) * 10);
    strcpy(str, "Hello");
    printf("%s\n", str);
    return 0;
}