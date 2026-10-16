#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    FILE* f = NULL;
    f = fopen("calculate.txt", "w");

    char str[50];
    int a, b;
    char op;
    char ops[4] = {'+', '-', '*', '/'};

    srand(time(NULL));
    //20 + 12 =
    for (int i = 0; i < 15; i++)
    {
        a = rand() % 100;
        b = rand() % 100;
        op = ops[rand() % 4];
        sprintf(str, "%d %c %d = \n", a, op, b);
        fputs(str,f);
    }
    fclose(f);
    return 0;
}