#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fin = NULL;
    FILE* fout = NULL;
    fin = fopen("calculate.txt", "r");
    fout = fopen("answer.txt", "w");

    int a, b, result;
    char op;
    char str[50];
    char results[20][50];
    int i = 0;
    while(!feof(fin))
    {
        strcpy(str, "");
        fgets(str, sizeof(str), fin);
        //40+55=
        sscanf(str, "%d %c %d = ",&a, &op, &b);
        switch (op)
        {
            case ('+'):
                result = a + b;
                break;
            case ('-'):
                result = a - b;
                break;
            case ('*'):
                result = a * b;
                break;
            case ('/'):
                result = a / b;
                break;
            default:
                break;
        }
        sprintf(results[i], "%d %c %d = %d \n", a, op, b, result);
        i++;
    }
    for (int i = 0; i < 15; i++)
    {
        fputs(results[i], fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}