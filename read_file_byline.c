#include <stdio.h>
#include <string.h>

int main()
{
    FILE* f = NULL;
    f = fopen("new_test.txt", "r");
    char str[100];
    while(!feof(f))
    {
        strcpy(str,"");
        fgets(str,sizeof(str),f);
        printf("%s", str);
    }
    return 0;
}