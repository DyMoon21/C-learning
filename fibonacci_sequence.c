#include <stdio.h>
int fibonacci(int n) {
    int last1 = 1;
    int last2 = 1;
    int result = 0;
    for (int i = 3; i <= n; i++) {
        result = last1 + last2;
        last1 = last2;
        last2 = result;
    }
    return result;
}

//以递归的方式实现
int fibonacci_recursive(int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main()
{
    printf("%d\n", fibonacci(5));
    printf("%d\n", fibonacci_recursive(5));
}