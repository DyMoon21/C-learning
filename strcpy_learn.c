#include <string.h>
#include <stdio.h>
int main()
{
    char str[] = "Hello, World!";
    strcpy(str, "abc");
    printf("%s\n", str);
}