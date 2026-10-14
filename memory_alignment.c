#include <stdio.h>

struct x
{
    char a;// 1byte
    short b;// 2byte
    char c;// 1byte
    int d;// 4byte
};

int main()
{
    printf("%zu ",sizeof(struct x));
    return 0;
}