#include <stdio.h>
void concat(char *s1, char *s2)
{
    int len1 = 0;
    int len2 = 0;
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }
    for (int i = 0; i < len2; i++) {
        s1[len1 + i] = s2[i];
    }
}

int main()
{
    char s1[100] = "Hello, ";
    char s2[] = "World!";
    concat(s1, s2);
    printf("%s\n", s1);
    return 0;
}