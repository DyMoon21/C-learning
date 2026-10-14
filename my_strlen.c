#include <stdio.h>

int myStrlen1(char* str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int myStrlen2(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
 int main ()
 {
    char s[] = "Hello, World!";
    int len1 = myStrlen1(s);
    int len2 = myStrlen2(s);
    printf("Length using myStrlen1: %d\n", len1);
    printf("Length using myStrlen2: %d\n", len2);
    return 0;
 }