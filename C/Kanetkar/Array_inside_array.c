#include <stdio.h>
int main()
{
    int arr1[2], arr2[2];
    int arr[2] = {arr1[2], arr2[2]};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d",&arr1[j]);
        for (j = 0; j < 2; j++)
            scanf("%d", &arr2[j]);
        printf("%d ",arr[i]);
    }
}