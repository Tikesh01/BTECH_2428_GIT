#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node
{
    int data;
    char chdata;
    struct Node *next;

} *head = NULL, *new = NULL, *temp = NULL;
int main()
{
    int n, i = 0;
    printf("Enter the Number Of Node : ");
    scanf("%d", &n);
    printf("Enter the int data in Node : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &new->data);
        scanf("%c", &new->chdata);
        new->next = NULL;
        if (head == NULL)
            head = new;
        else
            temp->next = new;
        temp = new;
    }
    struct Node *p = head;
    while (p != NULL)
    {
        printf("%d%c",p->data,(p->chdata));
        p = p->next;
    }
    
    return 0;
}