#include <stdio.h>

int main()
{
    FILE *f =NULL;
    f = fopen("how_to_use_git.txt", "r");
    char ch;
    while (!feof(f))//eof   End Of Flie
    {
        ch = fgetc(f);
        printf("%c", ch);
    }
    fclose(f);
    return 0;
}