#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
    int data;
    int index;
    struct Node *next;
};
int main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->index = 1;
    head->next = second;

    second->data = 20;
    second->index = 2;
    second->next = third;

    third->data = 30;
    third->index = 3;
    third->next = fourth;

    fourth->data = 40;
    fourth->index=  4;
    fourth->next = NULL;
    
    struct Node *ptr = head;
    printf("The Old LL : ");
    while (ptr != NULL)
    {
        printf("%d ",*ptr);
        ptr = ptr->next;
    }
    
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr2 = head;
    int n,i=0;
    printf("\nYou want data after Node : ");
    scanf("%d",&n);
    printf("\nEnter the data in new node : ");
    scanf("%d",&new->data);
    new->index = n+1;
    while (ptr2 != NULL)
    {
        if(ptr2->index == n)
        {
            new->next = ptr2->next;
            ptr2->next = new;
        }
        if(i>n)
        {
            ptr2->index = i+1;
        }
        i++;
        ptr2 = ptr2->next;
    }
    struct Node *ptr3 = head;
    while (ptr3 != NULL)
    {
        printf("%d ",*ptr3);
        printf("(%d)",ptr3->index);
        ptr3 = ptr3->next;
    }
    
    return 0;
}