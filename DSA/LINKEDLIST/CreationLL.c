#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *second, *third;
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", *ptr);
        ptr = ptr->next;
    }
}
int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    traversal(head);

    free(head);
    free(second);
    free(third);

    return 0;
}