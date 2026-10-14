#include <stdio.h>
#include <string.h>

int countSubstr(char* s1,char* s2)
{
    int count = 0;
    while ((s1 = strstr(s1, s2)) != NULL)
    {
        count++;
        s1 += strlen(s2);
        if (*s1 == '\0')
        {
            break;
        }
    }
    if (count == 0)
    {
        return -1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char s1[] = "oufenabcvinvnabcfndsiabc";
    char s2[] = "abc";
    int c = countSubstr(s1, s2);
    printf("%d\n", c);
    return 0;
}