#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head = NULL, *newnode = NULL, *temp = NULL;
    int size = 0;
    printf("Enter the data in LL : ");
    while ((getchar() != '\n'))
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
            head = newnode;
        else
            temp->next = newnode;
        temp = newnode;
        size++;
    }
    printf("\nThe size = %d\n", size);
    struct Node *ptr = head;
    printf("The Older LL : ");
    while (ptr != NULL)
    {
        printf("%d ", *ptr);
        ptr = ptr->next;
    }
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the the data in New Node : ");
    scanf("%d", &new->data);
    int i = 0;
    printf("The new LL : ");
    struct Node *ptr2 = head;
    while (i <= size)
    {
        if (ptr2->next == NULL)
        {
            ptr2->next = new;
            new->next = NULL;
            break;
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

    return 0;
}