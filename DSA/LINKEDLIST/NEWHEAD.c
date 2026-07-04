#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node 
{
    char data;
    struct Node *next;
}*head, *second, *third, *fourth,*new;
void traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%c ",*ptr);
        ptr = ptr->next;
    }
    
}
int main()
{
    head= (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 'a';
    head->next = second;
    second->data = 'b';
    second->next = third;
    third->data= 'c';
    third->next = fourth;
    fourth->data = 'd';
    fourth->next = NULL;
    printf("The old LL : ");
    traverse(head);
    new = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the newnode in place head : ");
    scanf("%c",&new->data);
    char temp = head->data;
    head->data = new->data;
    new->data = temp;
    new->next = head->next;
    head->next = new;
    traverse(head);

    return 0;
}