#include <stdio.h>

int main()
{
    FILE *f = NULL;
    f = fopen("test.txt", "w");
    char str[10] = "helloworld";
    int len = sizeof(str);
    for (int i = 0; i < len; i++)
    {
        fputc(str[i],f);
    }
    return 0;
}