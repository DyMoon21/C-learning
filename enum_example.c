#include <stdio.h>
typedef enum
{
    FEMALE=2, MALE
}Sex;

typedef struct
{
    char name[20];
    Sex s;
}Person;

int main(int argc, char const *argv[])
{
    Person p;
    p.s = 0;
    return 0;
}