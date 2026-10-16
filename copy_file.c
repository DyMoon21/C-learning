#include <stdio.h>

int main()
{
    FILE* fin = NULL;
    FILE* fout = NULL;
    fin = fopen("test.txt", "r");
    fout = fopen("new_test.txt", "w");
    while(!feof(fin))
    {
        fputc(fgetc(fin),fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}