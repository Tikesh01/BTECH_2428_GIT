#include <stdio.h>
int main()
{
    int arr[10], i, n;
    printf("Enter the numbers of elements : ");
    scanf("%d", &n);
    printf("Enter the %d elements of the array : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The reversed elements of the array : ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}