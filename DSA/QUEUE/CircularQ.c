// Circular Queues
// It works in FIFO mathod -> First in First Out (Jo pehle aaya vahi pehle jayega)
// OPPO of Stacks(LIFO)
// Arr = | a | b | c | d |
// front           //Rear
// (delete)        //(insert)
// Here
//     N = 4
//     Front = 1
//     Rear =  4

// IF
// Arr = |  | 3 | 4 |  |
// Front = 2
// rear = 3

// IF array(Queue) has only one element
// Arr = |  |  | a |  |
// front = rear = 3(any number)

// If array has no element
//  Front = rear = NULL

// QUESTION

#include <stdio.h>
#include <stdlib.h>
int printQ(char *prr, int N, int *f, int *r)
{
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%c ", *(prr + i));
    }
    printf("( F = %d, R = %d )", *f, *r);
}
struct Queue
{
    char *f;
    char *r;
};
int delete(char *p, int *Rear, int *front, int N, int R_ele) // Fuction to delete a element from the front of Queue
{
    if (*Rear == 0 && *front == 0)
    {
        printf("\nError! --> Queue Underflow");
        return 0;
    }
    for (int i = 0; i < R_ele; i++)
    {
        if (*front < N - 1)
        {
            p[*front] = '-';
            *front = *front + 1;
        }
        else{
            *front = N - N;
            p[*front] = '-';
        }
    }
    int checker = 0;
    for (int k = 0; k < N; k++)
    {
        if(p[k] == '-')
        {
            checker++;
        }
    }
    if(checker == N-1)
    {
        *Rear = 0;
        *front = 0;
    }
    printQ(p, N, front, Rear);
}
int insert(char *p, int *Rear, int *front, int N, char *ele) // Fuction to insert a element in the rear Queue
{
    if (*Rear == *front - 1)
    {
        printf("\nError! --> Queue Overflow");
        return 0;
    }
    if (*Rear < N - 2)
    {
        *Rear = *Rear + 1;
        p[*Rear] = *ele;
        printQ(p, N, front, Rear);
    }
    else
    {
        if (*p == '-')
        {
            *Rear = N - (N);
            p[*Rear] = *ele;
            printQ(p, N, front, Rear);
        }
    }
}
// Main Fucrtin starting
int main()
{
    char arr[] = "---F---";
    int N = sizeof(arr) / sizeof(char);
    // printf("%d ",N);
    int F, R;
    printf("The Queue : ");
    for (int i = 0; i < N; i++)
    {
        if (arr[i] != '-')
        {
            F = i;
            break;
        }
    }
    for (int j = N - 2; j >= 0; j--)
    {
        if (arr[j] != '-')
        {
            R = j;
            break;
        }
    }
    printQ(arr, N, &F, &R);
    // Creation of Circular Queue
    struct Queue *ptr = (struct Queue *)malloc(sizeof(struct Queue));
    ptr->f = &arr[0];
    ptr->r = &arr[5];
    // adding 'f' in Queue
    insert(ptr->f,&R,&F,N,"J");
    delete (ptr->f, &R, &F, N, 2);
    insert(ptr->f,&R,&F,N,"J");
    
    return 0;
}
