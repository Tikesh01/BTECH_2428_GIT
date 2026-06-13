#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *second, *third, *fourth, *fifth, *new;
void traverse(struct Node *p)
{
    printf("%d ", *p);
    traverse(p->next);
}
int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    new = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = NULL;
    struct Node *ptr = head;
    int size = 0;
    while (ptr != NULL)
    {
        // printf("%d ",*ptr);
        size++;
        ptr = ptr->next;
    }
    printf("The older size :  %d\n", size);
    printf("Enter the data in new Node : ");
    scanf("%d", &new->data);
    int i = 0;
    struct Node *ptr2 = head;
    while (i <= (size))
    {
        if (ptr2->next == NULL)
        {
            ptr2->next = new;
            new->next = NULL;
        }
        i++;
        ptr2 = ptr2->next;
    }
    traverse(head);

    return 0;
}