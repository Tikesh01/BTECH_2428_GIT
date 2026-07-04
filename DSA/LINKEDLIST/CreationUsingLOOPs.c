#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void traversLL(struct Node *ptr)
{
    printf("The linked list : ");
    while(ptr != NULL)
    {
        printf("%d ", *ptr);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head = NULL, *new = NULL, *temp = NULL;
    int n, i;
    printf("Enter the Number of Nodes : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data of node %d : ", i + 1);
        scanf("%d",&new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
        }
        else
        {
            temp->next = new;//NOT WORKINg IN FIRST ITERATION
        }
        temp = new;
    }

    traversLL(head);
    return 0;
}