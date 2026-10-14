#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1;
    p1.x = 5;
    p1.y = 15;
    struct point p2 = {10, 20};
    struct point p3 = {.y = 30, .x = 40};
    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", p2.x, p2.y);
    printf("%d %d\n", p3.x, p3.y);
    return 0;
}