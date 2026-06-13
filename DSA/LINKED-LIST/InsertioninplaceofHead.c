#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *second, *third, *fourth;
int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d ", *p);
        p = p->next;
    }
    struct Node *newhead = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter data in New Node : ");
    scanf("%d", &newhead->data);
    newhead->next = head;
    struct Node *ptr = newhead;
    while (ptr != NULL)
    {
        printf("%d ", *ptr);
        ptr = ptr->next;
    }

    return 0;
}