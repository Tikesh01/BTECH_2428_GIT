#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *pre;
} *head, *second, *third, *fourth;
int traverse(struct Node *ptr)
{
    printf("%d ", *ptr);
    traverse(ptr->next);
}
int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    head->pre = NULL;

    second->data = 2;
    second->next = third;
    second->pre = head;

    third->data = 3;
    third->next = fourth;
    third->pre = second;

    fourth->data = 4;
    fourth->next = NULL;
    fourth->pre = third;
    
    printf("The sidha LL : ");
    traverse(head);
    struct Node *p = fourth;
    printf("The Ulta LL : ");
    while (p != NULL)
    {
        printf("%d ",*p);
        p = p->pre;
    }

    return 0;
}