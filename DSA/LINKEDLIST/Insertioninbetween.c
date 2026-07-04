#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node 
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head, *second, *third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second =  (struct Node*)malloc(sizeof(struct Node));
    third =  (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third ->data  = 3;
    third->next = NULL;
    
    struct Node  *ptr = head;
    printf("The older LL : ");
    while (ptr != NULL)
    {
        printf("%p ",&ptr);
        ptr = ptr->next;
    }
    
    return 0;
}