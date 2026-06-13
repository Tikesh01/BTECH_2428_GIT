#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *second, *third;

void linkedlist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", *ptr);
        ptr = ptr->next;
    }
}
int main()
{
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data=11;
    third->next=NULL;

    linkedlist(head);
    return 0;
}