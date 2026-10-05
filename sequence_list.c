#include <stdio.h>

#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int size;
} SeqList;


// 初始化
void init(SeqList *list)
{
    list->size = 0;
}


// 尾插
void push_back(SeqList *list, int value)
{
    if (list->size >= MAX_SIZE)
    {
        printf("顺序表已满\n");
        return;
    }

    list->data[list->size] = value;
    list->size++;
}


// 头插
void push_front(SeqList *list, int value)
{
    if (list->size >= MAX_SIZE)
    {
        printf("顺序表已满\n");
        return;
    }

    for (int i = list->size; i > 0; i--)
    {
        list->data[i] = list->data[i - 1];
    }

    list->data[0] = value;
    list->size++;
}


// 指定位置插入
void insert(SeqList *list, int pos, int value)
{
    if (list->size >= MAX_SIZE)
    {
        printf("顺序表已满\n");
        return;
    }

    if (pos < 0 || pos > list->size)
    {
        printf("位置错误\n");
        return;
    }

    for (int i = list->size; i > pos; i--)
    {
        list->data[i] = list->data[i - 1];
    }

    list->data[pos] = value;
    list->size++;
}


// 删除
void erase(SeqList *list, int pos)
{
    if (pos < 0 || pos >= list->size)
    {
        printf("位置错误\n");
        return;
    }

    for (int i = pos; i < list->size - 1; i++)
    {
        list->data[i] = list->data[i + 1];
    }

    list->size--;
}


// 查找
int find(SeqList *list, int value)
{
    for (int i = 0; i < list->size; i++)
    {
        if (list->data[i] == value)
        {
            return i;
        }
    }

    return -1;
}


// 打印
void print(SeqList *list)
{
    for (int i = 0; i < list->size; i++)
    {
        printf("%d ", list->data[i]);
    }

    printf("\n");
}


int main()
{
    SeqList list;

    // 初始化
    init(&list);

    // 尾插
    push_back(&list, 10);
    push_back(&list, 20);
    push_back(&list, 30);

    printf("尾插：");
    print(&list);

    // 头插
    push_front(&list, 5);

    printf("头插：");
    print(&list);

    // 指定位置插入
    insert(&list, 2, 99);

    printf("指定位置插入：");
    print(&list);

    // 删除
    erase(&list, 2);

    printf("删除：");
    print(&list);

    // 查找
    int pos = find(&list, 30);

    printf("30的位置：%d\n", pos);

    return 0;
}