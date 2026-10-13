#include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "Helle";
    printf("%p\n", strchr(str, 'e'));
    printf("%p\n", strstr(str, "ll"));
    for (int i = 0; i< strlen(str); i++)
    {
        printf("%p ", &str[i]);
    }
}