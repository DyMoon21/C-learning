#include <stdio.h>

int my_strcpy(char *s1,char *s2)
{
    while(*s2 != '\0')
    {
        *s1 = *s2;
        *s1++;
        *s2++;
    }
    *s1 = '\0';
    return 0;
}

int main()
{
    char s1[] = "Hello, World!";
    char s2[] = "Goodbye!";
    my_strcpy(s1, s2);
    printf("Copied string: %s\n", s1);
    return 0;
}