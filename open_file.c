#include <stdio.h>

int main()
{
    FILE* f = NULL;
    //f = fopen("C:\\Users\\17789\\Downloads\\aabbcc.txt","r");
    f = fopen("how_to_use_git.txt", "r");
    if(f == NULL)
    {
        perror("出错了");
        return -1;
    }
    fclose(f);
    return 0;
}