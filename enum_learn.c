#include <stdio.h>

enum weekday
{
    mon,tue,wed,thu,fri,sat,sun
};

/*
typedef enum
{

}weekday;
*/

int main()
{
    enum weekday w;
    w = mon;
    printf("%d ",w);
    return 0;
}