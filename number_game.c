#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;

    printf("我已经想好了一个1到100之间的数字。\n");

    do {
        printf("请输入你猜的数字：\n");
        scanf("%d", &a);
        count++;

        if (a > number) {
            printf("你猜的数字太大了。\n");
        } else if (a < number) {
            printf("你猜的数字太小了。\n");
        }

    } while (a != number);

    printf("恭喜你猜对了！你一共猜了%d次。\n", count);
}