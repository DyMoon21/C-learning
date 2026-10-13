#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Alan";
    char *s2 = "Jack";
    if (strcmp(s1,s2) > 0)
    {
        printf("s1比s2大\n");
    }
    else if (strcmp(s1,s2) < 0)
    {
        printf("s1比s2小\n");
    }
    else
    {
        printf("s1和s2相等\n");
    }
}