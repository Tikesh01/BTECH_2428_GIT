#include <stdio.h>
#include <stdlib.h>
int sequence(int *ptr)
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 9; i++)
    {
    }
    
}
int main()
{
    int arr[100], i = 0, j;
    while (getchar() != '\n')
    {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("Positive No. : ");
    for (j = 0; j < i; j++)
        if (arr[j] > 0)
            printf("%d, ", arr[j]);
    printf("\nNegative No. : ");
    for (j = 0; j < i; j++)
        if (arr[j] < 0)
            printf("%d, ", arr[j]);
    printf("\nThe Zeroes : ");
    for (j = 0; j < i; j++)
        if (arr[j] == 0)
            printf("%d, ", arr[j]);

    return 0;
}