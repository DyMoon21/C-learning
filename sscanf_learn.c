#include <stdio.h>

int main()
{
    char str[50] = "10-5.56";
    int a;
    double b;
    sscanf(str, "%d-%lf", &a, &b);
    printf("a=%d\n", a);
    printf("b=%lf\n", b);
    return 0;
}