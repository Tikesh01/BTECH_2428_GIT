#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *second, *third, *fourth, *fifth, *new, *ptr;
int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
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
    ptr = head;
    int size = 0;
    printf("The older LL : ");
    while (ptr != NULL)
    {
        printf("%d ", *ptr);
        ptr = ptr->next;
        size++;
    }
    printf("\n%d\n", size);
    int i = 0;
    struct Node *ptr2 = head;
    while (i <= (size + 1))
    {
        if (ptr2 == NULL)
        {
            new = (struct Node *)malloc(sizeof(struct Node));
            ptr2->next = new;
            new->data = 6;
            new->next = NULL;
        }
        i++;
        ptr2 = ptr2->next;
    }
    struct Node *ptr3 = head;
    while (ptr3 != NULL)
    {
        printf("%d ", *ptr3);
        ptr3 = ptr3->next;
    }  

    free(head);
    free(second);
    free(third);
    free(fourth);
    free(fifth);
    free(new);

    return 0;
}