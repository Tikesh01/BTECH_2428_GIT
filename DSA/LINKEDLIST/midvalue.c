#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int num;
    struct Node *next;
} *head = NULL, *new = NULL, *temp = NULL;
void traverse(struct Node *ptr, int i)
{
    int temp = i;
    while (ptr != NULL)
    {
        i--;
        if (temp % 2 == 0)
        {
            if (i == temp / 2 || i == temp / 2 - 1)
                printf("%d -> ", *ptr);
        }
        else if (temp % 2 == 1)
        {
            if (i == temp / 2)
                printf("%d -> ", *ptr);
        }
        ptr = ptr->next;
    }
}
int main()
{
    int i,n;
    printf("Enter the number of Nodes : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Value %d : ", i + 1);
        scanf("%d", &new->num);
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
    }
    traverse(head, i);
}