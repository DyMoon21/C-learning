#include <stdio.h>
#include <string.h>

struct weapon
{
    char weaponName[20];
    double attack;
    double attackSpeed;
};
struct Hero
{
    char heroName[20];
    double life;
    double attack;
    double magic;
    double attackSpeed;
    struct weapon *w;
};

void setWeapon(struct Hero *h,struct weapon *w)
{
    h ->w = w;
    h ->attack += h->w->attack;
    h ->attackSpeed += h->w->attackSpeed;
}

void initHero(struct Hero *h)
{
    strcpy((*h).heroName,"亚瑟");
    (*h).life = 5000;
    (*h).magic = 0;
    (*h).attack = 2000;
    (*h).attackSpeed = 500;
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
    struct weapon w;
    strcpy(w.weaponName, "泣血之刃");
    w.attack = 2000;
    w.attackSpeed = 100;

    setWeapon(&h,&w);

    printf("%s, %lf, %lf, %lf, %lf\n", h.heroName, h.life, h.magic, h.attack, h. attackSpeed);
    return 0;
}