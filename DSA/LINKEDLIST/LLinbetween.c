#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    int index;
    struct Node *next;
};
int main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->index = 1;
    head->next = second;

    second->data = 20;
    second->index = 2;
    second->next = third;

    third->data = 30;
    third->index = 3;
    third->next = fourth;

    fourth->data = 40;
    fourth->index = 4;
    fourth->next = NULL;

    struct Node *new, *ptr = head, *p2 = head;
    printf("The older LL : ");
    while (ptr != NULL)
    {
        printf("%d", *ptr);
        printf("(%d) ", ptr->index);
        ptr = ptr->next;
    }

    new = (struct Node *)malloc(sizeof(struct Node));
    int n, i = 0;
    printf("\nU want value after node : ");
    scanf("%d", &n);
    printf("Data in new Node : ");
    scanf("%d", &new->data);

    while (p2 != NULL)
    {
        if (p2->index == n)
        {
            new->next = p2->next;
            p2->next = new;
            new->index = n + 1;
        }
        if (i > n)
        {
            p2->index = i + 1;
        }
        i++;
        p2 = p2->next;
    }
    struct Node *p3 = head;
    while (p3 != NULL)
    {
        printf("%d", *p3);
        printf("(%d) ", p3->index);
        p3 = p3->next;
    }

    return 0;
}