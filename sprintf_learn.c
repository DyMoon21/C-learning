#include <stdio.h>

int main()
{
    int a = 15;
    double b = 3.14;
    char str[100];
    sprintf(str, "integer: %d  double: %lf", a, b);
    printf("%s\n", str);
    return 0;
}