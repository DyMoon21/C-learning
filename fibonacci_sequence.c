#include <stdio.h>
int fibonacci(int n) {
    int last1 = 1;
    int last2 = 1;
    int result = 0;
    for (int i = 2; i <= n; i++) {
        result = last1 + last2;
        last1 = last2;
        last2 = result;
    }
    return result;
}

int main()
{
    printf("%d\n", fibonacci(5));
}