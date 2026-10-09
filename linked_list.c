#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

typedef struct {
    Node *head;
    int size;
}LinkedList;

LinkedList* initList() {
    LinkedList *list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = (Node*)malloc(sizeof(Node));
    list->head->next =  NULL;
    list->size = 0;
    return list;
}

