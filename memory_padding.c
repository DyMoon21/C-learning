#include <stdio.h>

struct y
{
    int a;
    char b;
    short c;
    char d;
};

int main()
{
    printf("%zu ", sizeof(struct y));
    return 0;
}