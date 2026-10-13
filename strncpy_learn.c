#include <stdio.h>
#include <string.h>

int main()
{
    char s[5] = "Hello";
    strncpy(s, "abcde", 3);
    printf("%s\n", s);
}