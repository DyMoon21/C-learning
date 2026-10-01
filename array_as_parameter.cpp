#include <iostream>

#define N 10

int max(int b[])
{
    int n = b[0];

    for (int i = 1; i < N; i++)
    {
        if (n < b[i])
            n = b[i];
    }

    return n;
}

int main()
{
    int a[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> a[i];
    }

    int m = max(a);

    std::cout << m << std::endl;

    return 0;
}