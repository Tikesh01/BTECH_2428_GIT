#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *new = NULL, *temp = NULL;
    int size1 = 0;
    printf("Enter the data in LL : ");
    while ((getchar() != '\n'))
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
            head = new;
        else
            temp->next = new;
        temp = new;
        size1++;
    }
    struct Node *newhead = NULL, *newnode = NULL, *newtemp = NULL;
    printf("Enter the data in new LL : ");
    int size = 0;
    while (getchar() != '\n')
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (newhead == NULL)
            newhead = newnode;
        else
            newtemp->next = newnode;
        newtemp = newnode;
        size++;
    }
    int i = 0;
    struct Node *ptr = newhead;
    while (i <= size)
    {
        if (ptr->next == NULL)
        {
            ptr->next = head;
        }
        ptr = ptr->next;
        i++;
    }
    struct Node *p = newhead;
    while (p != NULL)
    {
        printf("%d ", *p);
        p = p->next;
    }

    return 0;
}