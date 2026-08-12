#include <stdio.h>
int main()
{
    int arr[5] = {2, 55, 66, 82, 90}, i, j;
    int size = sizeof(arr) / sizeof(int);
    int index[size];
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
    for (i = 0; i < n; i++)
        scanf("%d", &index[i]);

    int a = 1;
    for (j = 0; j < n; j++)
    {
        for (i = index[j]; i < index[a]; i++)
        {
            arr[i] = arr[i + 1];
        }
        a++;
    }

    size = size - n;
    printf("The Updated Array = { ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");


    return 0;
}