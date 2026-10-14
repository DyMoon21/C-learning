#include <stdio.h>
#include <string.h>

struct Hero
{
    char heroName[20];
    double life;
    double attack;
    double magic;
    double attackSpeed;
};

void initHero(struct Hero *h)
{
    strcpy((*h).heroName,"亚瑟");
    (*h).life = 5000;
    (*h).magic = 0;
    (*h).attack = 2000;
    (*h).attackSpeed = 100;
}

//(*h).life还可以写成h->life
/*void initHero(struct Hero *h)
{
    strcpy(h->heroName,"亚瑟");
    h->life = 5000;
    h->magic = 0;
    h->attack = 2000;
    h->attackSpeed = 100;
}
*/

int main()
{
    struct Hero h;
    initHero(&h);
    printf("%s, %lf, %lf, %lf, %lf\n", h.heroName, h.life, h.magic, h.attack, h. attackSpeed);
    return 0;
}