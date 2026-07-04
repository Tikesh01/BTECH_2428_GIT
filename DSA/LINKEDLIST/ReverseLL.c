#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr)
{
    printf("%d ", *ptr);
    traverse(ptr->next);
}
void reversell(struct Node *ptr, int size)
{
    struct Node *temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = ptr;
        ptr = (ptr->next);
    }
}
int main()
{
    struct Node *head = NULL, *new = NULL, *temp = NULL;
    int i, n;
    printf("Enter the Number of Nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the value in node %d : ", i + 1);
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
        }
        else
        {
            temp->next = new;
        }
        temp = new;
        reversell(head, n);
    }
    return 0;
}