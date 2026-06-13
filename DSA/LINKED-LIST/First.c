#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *add;
};
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr = (int *)malloc(4* sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int j = 0; j < 3; j++)
    {
        printf("%d ", *(ptr + j));
    }

    free(ptr);
    return 0;
}