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

    head->data = 10;
    head->next = second;
    // head->pre = fourth;

    second->data = 20;
    second->next = third;
    // second->pre = head;

    third->data = 30;
    third->next = fourth;
    // third->pre = second;

    fourth->data = 40;
    fourth->next = head;
    // fourth->pre = third;

    struct Node *p = fourth;
    while (p->next != fourth)
    {
        printf("%d ",*p);
        p = p->next;
    }

    return 0;
}