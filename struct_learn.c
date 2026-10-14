#include <stdio.h>
#include <string.h>

struct book
{
    char id[15];
    char bookName[25];
    double price;
};

int main()
{
    struct book b1;
    strcpy(b1.id,"ISBN456162");
    strcpy(b1.bookName,"基督山伯爵");
    b1.price = 49.99;

    struct book b2 = {"ISBN456163", "红与黑", 39.99};
    struct book b3 = {.price = 29.99, .bookName = "悲惨世界", .id = "ISBN456164"};
    struct book b4 = {.id = "ISBN456165", .bookName = "战争与和平", .price = 59.99};

    //创建一个长度为4的结构体数组
    struct book books[4] = {b1, b2, b3, b4};
    for (int i = 0; i < 4; i++)
    {
        printf("书籍编号：%s\n 书籍名称：%s\n 书籍价格：%.2f\n", books[i].id, books[i].bookName, books[i].price);
        printf("\n");
    }
    return 0;
}