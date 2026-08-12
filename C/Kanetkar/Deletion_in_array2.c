#include <stdio.h>
int main()
{
    int arr[5] = {22, 42, 45, 87, 9}, i, j;
    int size = sizeof(arr) / sizeof(int);
    int index[size],index2;

    printf("The Array = { ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");

    int n;
    printf("\nHow many values do you want to remove : ");
    scanf("%d", &n);
    printf("\n'Index Available 0 to %d'", size - 1);
    printf("\nEnter the index to remove the element : ");
    for (j = 0; j < n; j++)
        scanf("%d", &index[j]);
    index2 = index[0];
    int a = 0,temp;
    for (i = 1; i <= n; i++)
    {
        temp = arr[size-i];
        arr[size - i] = arr[index[a]];
        arr[index[a]] = arr[index2];
        a++;
        index2++;
    }

    size = size - n;
    printf("\nThe Updated Array = { ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");

    return 0;
}