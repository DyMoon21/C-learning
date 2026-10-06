#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    int size;
    int capacity;
} SeqList;


// 初始化
void init(SeqList *list)
{
    list->size = 0;
    list->capacity = 4;

    list->data = malloc(
        list->capacity * sizeof(int)
    );

    if (list->data == NULL)
    {
        printf("内存申请失败\n");
        exit(1);
    }
}


// 扩容
void resize(SeqList *list)
{
    int new_capacity = list->capacity * 2;

    int *new_data = realloc(
        list->data,
        new_capacity * sizeof(int)
    );

    if (new_data == NULL)
    {
        printf("扩容失败\n");
        return;
    }

    list->data = new_data;
    list->capacity = new_capacity;

    printf("扩容成功，新容量：%d\n",
           list->capacity);
}


// 尾插
void push_back(SeqList *list, int value)
{
    if (list->size == list->capacity)
    {
        resize(list);
    }

    list->data[list->size] = value;
    list->size++;
}


// 头插
void push_front(SeqList *list, int value)
{
    if (list->size == list->capacity)
    {
        resize(list);
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
    if (pos < 0 || pos > list->size)
    {
        printf("位置错误\n");
        return;
    }

    if (list->size == list->capacity)
    {
        resize(list);
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
    printf("size = %d, capacity = %d\n",
           list->size,
           list->capacity);

    for (int i = 0; i < list->size; i++)
    {
        printf("%d ", list->data[i]);
    }

    printf("\n");
}


// 销毁
void destroy(SeqList *list)
{
    free(list->data);

    list->data = NULL;
    list->size = 0;
    list->capacity = 0;
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
    push_back(&list, 40);

    print(&list);

    // 第 5 个元素，触发扩容
    push_back(&list, 50);

    print(&list);

    // 头插
    push_front(&list, 5);

    print(&list);

    // 指定位置插入
    insert(&list, 2, 99);

    print(&list);

    // 删除
    erase(&list, 2);

    print(&list);

    // 查找
    int pos = find(&list, 30);

    printf("30的位置：%d\n", pos);

    // 销毁
    destroy(&list);

    return 0;
}