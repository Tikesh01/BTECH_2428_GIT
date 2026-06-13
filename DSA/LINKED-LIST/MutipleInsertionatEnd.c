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
    printf("! firstly press Enter to give imput !\n-To terminate scaning type d");
    struct Node *head = NULL, *newnode = NULL, *temp = NULL;
    int size = 0;
    while (getchar() != 'd')
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data in Node %d : ", size + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
        }
        temp = newnode;
        size++;
    }
    printf("\nThe size = %d\n", size - 1);
    struct Node *ptr = head;
    int i = 1;
    printf("The older LL : ");
    while (ptr != NULL && i < size)
    {
        printf("%d ", *ptr);
        ptr = ptr->next;
        i++;
    }
    char cmd;
    printf("\nInsertion in new nodes : \n");
    struct Node *head2 = NULL, *new = NULL, *tem = NULL;
    int size2 = 0;
    while (getchar() != 't')
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data in new node %d : ", size2 + 1);
        scanf("%d", &new->data);
        new->next = NULL;
        if (head2 == NULL)
        {
            head2 = new;
        }
        else
        {
            tem->next = new;
        }
        tem = new;
        size2++;
    }
    struct Node *ptr2 = head2;
    int j = 0;
    while (j <= size);
    {
        if (ptr2->next == NULL)
        {
            ptr2->next = head2;
        }
        
    }
    printf("\nThe new LL : ");
    struct Node *ptr3 =head;
    while (ptr3 != NULL)
    {
        printf("%d ",*ptr3);
        ptr3 = ptr3->next;
    }
    

    return 0;
}